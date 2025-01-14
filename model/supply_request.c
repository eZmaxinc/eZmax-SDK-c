#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_request.h"



supply_request_t *supply_request_create(
    int pki_supply_id,
    int fki_glaccount_id,
    int fki_glaccountcontainer_id,
    int fki_variableexpense_id,
    char *s_supply_code,
    multilingual_supply_description_t *obj_supply_description,
    char *d_supply_unitprice,
    int b_supply_isactive,
    int b_supply_variableprice
    ) {
    supply_request_t *supply_request_local_var = malloc(sizeof(supply_request_t));
    if (!supply_request_local_var) {
        return NULL;
    }
    supply_request_local_var->pki_supply_id = pki_supply_id;
    supply_request_local_var->fki_glaccount_id = fki_glaccount_id;
    supply_request_local_var->fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    supply_request_local_var->fki_variableexpense_id = fki_variableexpense_id;
    supply_request_local_var->s_supply_code = s_supply_code;
    supply_request_local_var->obj_supply_description = obj_supply_description;
    supply_request_local_var->d_supply_unitprice = d_supply_unitprice;
    supply_request_local_var->b_supply_isactive = b_supply_isactive;
    supply_request_local_var->b_supply_variableprice = b_supply_variableprice;

    return supply_request_local_var;
}


void supply_request_free(supply_request_t *supply_request) {
    if(NULL == supply_request){
        return ;
    }
    listEntry_t *listEntry;
    if (supply_request->s_supply_code) {
        free(supply_request->s_supply_code);
        supply_request->s_supply_code = NULL;
    }
    if (supply_request->obj_supply_description) {
        multilingual_supply_description_free(supply_request->obj_supply_description);
        supply_request->obj_supply_description = NULL;
    }
    if (supply_request->d_supply_unitprice) {
        free(supply_request->d_supply_unitprice);
        supply_request->d_supply_unitprice = NULL;
    }
    free(supply_request);
}

cJSON *supply_request_convertToJSON(supply_request_t *supply_request) {
    cJSON *item = cJSON_CreateObject();

    // supply_request->pki_supply_id
    if(supply_request->pki_supply_id) {
    if(cJSON_AddNumberToObject(item, "pkiSupplyID", supply_request->pki_supply_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supply_request->fki_glaccount_id
    if(supply_request->fki_glaccount_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountID", supply_request->fki_glaccount_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supply_request->fki_glaccountcontainer_id
    if(supply_request->fki_glaccountcontainer_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerID", supply_request->fki_glaccountcontainer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supply_request->fki_variableexpense_id
    if (!supply_request->fki_variableexpense_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiVariableexpenseID", supply_request->fki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }


    // supply_request->s_supply_code
    if (!supply_request->s_supply_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSupplyCode", supply_request->s_supply_code) == NULL) {
    goto fail; //String
    }


    // supply_request->obj_supply_description
    if (!supply_request->obj_supply_description) {
        goto fail;
    }
    cJSON *obj_supply_description_local_JSON = multilingual_supply_description_convertToJSON(supply_request->obj_supply_description);
    if(obj_supply_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSupplyDescription", obj_supply_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // supply_request->d_supply_unitprice
    if (!supply_request->d_supply_unitprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dSupplyUnitprice", supply_request->d_supply_unitprice) == NULL) {
    goto fail; //String
    }


    // supply_request->b_supply_isactive
    if (!supply_request->b_supply_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplyIsactive", supply_request->b_supply_isactive) == NULL) {
    goto fail; //Bool
    }


    // supply_request->b_supply_variableprice
    if (!supply_request->b_supply_variableprice) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplyVariableprice", supply_request->b_supply_variableprice) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

supply_request_t *supply_request_parseFromJSON(cJSON *supply_requestJSON){

    supply_request_t *supply_request_local_var = NULL;

    // define the local variable for supply_request->obj_supply_description
    multilingual_supply_description_t *obj_supply_description_local_nonprim = NULL;

    // supply_request->pki_supply_id
    cJSON *pki_supply_id = cJSON_GetObjectItemCaseSensitive(supply_requestJSON, "pkiSupplyID");
    if (pki_supply_id) { 
    if(!cJSON_IsNumber(pki_supply_id))
    {
    goto end; //Numeric
    }
    }

    // supply_request->fki_glaccount_id
    cJSON *fki_glaccount_id = cJSON_GetObjectItemCaseSensitive(supply_requestJSON, "fkiGlaccountID");
    if (fki_glaccount_id) { 
    if(!cJSON_IsNumber(fki_glaccount_id))
    {
    goto end; //Numeric
    }
    }

    // supply_request->fki_glaccountcontainer_id
    cJSON *fki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(supply_requestJSON, "fkiGlaccountcontainerID");
    if (fki_glaccountcontainer_id) { 
    if(!cJSON_IsNumber(fki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }
    }

    // supply_request->fki_variableexpense_id
    cJSON *fki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(supply_requestJSON, "fkiVariableexpenseID");
    if (!fki_variableexpense_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_variableexpense_id))
    {
    goto end; //Numeric
    }

    // supply_request->s_supply_code
    cJSON *s_supply_code = cJSON_GetObjectItemCaseSensitive(supply_requestJSON, "sSupplyCode");
    if (!s_supply_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_supply_code))
    {
    goto end; //String
    }

    // supply_request->obj_supply_description
    cJSON *obj_supply_description = cJSON_GetObjectItemCaseSensitive(supply_requestJSON, "objSupplyDescription");
    if (!obj_supply_description) {
        goto end;
    }

    
    obj_supply_description_local_nonprim = multilingual_supply_description_parseFromJSON(obj_supply_description); //nonprimitive

    // supply_request->d_supply_unitprice
    cJSON *d_supply_unitprice = cJSON_GetObjectItemCaseSensitive(supply_requestJSON, "dSupplyUnitprice");
    if (!d_supply_unitprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_supply_unitprice))
    {
    goto end; //String
    }

    // supply_request->b_supply_isactive
    cJSON *b_supply_isactive = cJSON_GetObjectItemCaseSensitive(supply_requestJSON, "bSupplyIsactive");
    if (!b_supply_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_supply_isactive))
    {
    goto end; //Bool
    }

    // supply_request->b_supply_variableprice
    cJSON *b_supply_variableprice = cJSON_GetObjectItemCaseSensitive(supply_requestJSON, "bSupplyVariableprice");
    if (!b_supply_variableprice) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_supply_variableprice))
    {
    goto end; //Bool
    }


    supply_request_local_var = supply_request_create (
        pki_supply_id ? pki_supply_id->valuedouble : 0,
        fki_glaccount_id ? fki_glaccount_id->valuedouble : 0,
        fki_glaccountcontainer_id ? fki_glaccountcontainer_id->valuedouble : 0,
        fki_variableexpense_id->valuedouble,
        strdup(s_supply_code->valuestring),
        obj_supply_description_local_nonprim,
        strdup(d_supply_unitprice->valuestring),
        b_supply_isactive->valueint,
        b_supply_variableprice->valueint
        );

    return supply_request_local_var;
end:
    if (obj_supply_description_local_nonprim) {
        multilingual_supply_description_free(obj_supply_description_local_nonprim);
        obj_supply_description_local_nonprim = NULL;
    }
    return NULL;

}
