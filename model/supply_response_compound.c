#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_response_compound.h"



supply_response_compound_t *supply_response_compound_create(
    int pki_supply_id,
    int fki_glaccount_id,
    int fki_glaccountcontainer_id,
    int fki_variableexpense_id,
    char *s_supply_code,
    multilingual_supply_description_t *obj_supply_description,
    char *d_supply_unitprice,
    int b_supply_isactive,
    int b_supply_variableprice,
    char *s_glaccount_description_x,
    char *s_glaccountcontainer_longdescription_x,
    char *s_variableexpense_description_x
    ) {
    supply_response_compound_t *supply_response_compound_local_var = malloc(sizeof(supply_response_compound_t));
    if (!supply_response_compound_local_var) {
        return NULL;
    }
    supply_response_compound_local_var->pki_supply_id = pki_supply_id;
    supply_response_compound_local_var->fki_glaccount_id = fki_glaccount_id;
    supply_response_compound_local_var->fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    supply_response_compound_local_var->fki_variableexpense_id = fki_variableexpense_id;
    supply_response_compound_local_var->s_supply_code = s_supply_code;
    supply_response_compound_local_var->obj_supply_description = obj_supply_description;
    supply_response_compound_local_var->d_supply_unitprice = d_supply_unitprice;
    supply_response_compound_local_var->b_supply_isactive = b_supply_isactive;
    supply_response_compound_local_var->b_supply_variableprice = b_supply_variableprice;
    supply_response_compound_local_var->s_glaccount_description_x = s_glaccount_description_x;
    supply_response_compound_local_var->s_glaccountcontainer_longdescription_x = s_glaccountcontainer_longdescription_x;
    supply_response_compound_local_var->s_variableexpense_description_x = s_variableexpense_description_x;

    return supply_response_compound_local_var;
}


void supply_response_compound_free(supply_response_compound_t *supply_response_compound) {
    if(NULL == supply_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (supply_response_compound->s_supply_code) {
        free(supply_response_compound->s_supply_code);
        supply_response_compound->s_supply_code = NULL;
    }
    if (supply_response_compound->obj_supply_description) {
        multilingual_supply_description_free(supply_response_compound->obj_supply_description);
        supply_response_compound->obj_supply_description = NULL;
    }
    if (supply_response_compound->d_supply_unitprice) {
        free(supply_response_compound->d_supply_unitprice);
        supply_response_compound->d_supply_unitprice = NULL;
    }
    if (supply_response_compound->s_glaccount_description_x) {
        free(supply_response_compound->s_glaccount_description_x);
        supply_response_compound->s_glaccount_description_x = NULL;
    }
    if (supply_response_compound->s_glaccountcontainer_longdescription_x) {
        free(supply_response_compound->s_glaccountcontainer_longdescription_x);
        supply_response_compound->s_glaccountcontainer_longdescription_x = NULL;
    }
    if (supply_response_compound->s_variableexpense_description_x) {
        free(supply_response_compound->s_variableexpense_description_x);
        supply_response_compound->s_variableexpense_description_x = NULL;
    }
    free(supply_response_compound);
}

cJSON *supply_response_compound_convertToJSON(supply_response_compound_t *supply_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // supply_response_compound->pki_supply_id
    if (!supply_response_compound->pki_supply_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSupplyID", supply_response_compound->pki_supply_id) == NULL) {
    goto fail; //Numeric
    }


    // supply_response_compound->fki_glaccount_id
    if(supply_response_compound->fki_glaccount_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountID", supply_response_compound->fki_glaccount_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supply_response_compound->fki_glaccountcontainer_id
    if(supply_response_compound->fki_glaccountcontainer_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerID", supply_response_compound->fki_glaccountcontainer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supply_response_compound->fki_variableexpense_id
    if (!supply_response_compound->fki_variableexpense_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiVariableexpenseID", supply_response_compound->fki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }


    // supply_response_compound->s_supply_code
    if (!supply_response_compound->s_supply_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSupplyCode", supply_response_compound->s_supply_code) == NULL) {
    goto fail; //String
    }


    // supply_response_compound->obj_supply_description
    if (!supply_response_compound->obj_supply_description) {
        goto fail;
    }
    cJSON *obj_supply_description_local_JSON = multilingual_supply_description_convertToJSON(supply_response_compound->obj_supply_description);
    if(obj_supply_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSupplyDescription", obj_supply_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // supply_response_compound->d_supply_unitprice
    if (!supply_response_compound->d_supply_unitprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dSupplyUnitprice", supply_response_compound->d_supply_unitprice) == NULL) {
    goto fail; //String
    }


    // supply_response_compound->b_supply_isactive
    if (!supply_response_compound->b_supply_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplyIsactive", supply_response_compound->b_supply_isactive) == NULL) {
    goto fail; //Bool
    }


    // supply_response_compound->b_supply_variableprice
    if (!supply_response_compound->b_supply_variableprice) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplyVariableprice", supply_response_compound->b_supply_variableprice) == NULL) {
    goto fail; //Bool
    }


    // supply_response_compound->s_glaccount_description_x
    if(supply_response_compound->s_glaccount_description_x) {
    if(cJSON_AddStringToObject(item, "sGlaccountDescriptionX", supply_response_compound->s_glaccount_description_x) == NULL) {
    goto fail; //String
    }
    }


    // supply_response_compound->s_glaccountcontainer_longdescription_x
    if(supply_response_compound->s_glaccountcontainer_longdescription_x) {
    if(cJSON_AddStringToObject(item, "sGlaccountcontainerLongdescriptionX", supply_response_compound->s_glaccountcontainer_longdescription_x) == NULL) {
    goto fail; //String
    }
    }


    // supply_response_compound->s_variableexpense_description_x
    if(supply_response_compound->s_variableexpense_description_x) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescriptionX", supply_response_compound->s_variableexpense_description_x) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

supply_response_compound_t *supply_response_compound_parseFromJSON(cJSON *supply_response_compoundJSON){

    supply_response_compound_t *supply_response_compound_local_var = NULL;

    // define the local variable for supply_response_compound->obj_supply_description
    multilingual_supply_description_t *obj_supply_description_local_nonprim = NULL;

    // supply_response_compound->pki_supply_id
    cJSON *pki_supply_id = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "pkiSupplyID");
    if (!pki_supply_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_supply_id))
    {
    goto end; //Numeric
    }

    // supply_response_compound->fki_glaccount_id
    cJSON *fki_glaccount_id = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "fkiGlaccountID");
    if (fki_glaccount_id) { 
    if(!cJSON_IsNumber(fki_glaccount_id))
    {
    goto end; //Numeric
    }
    }

    // supply_response_compound->fki_glaccountcontainer_id
    cJSON *fki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "fkiGlaccountcontainerID");
    if (fki_glaccountcontainer_id) { 
    if(!cJSON_IsNumber(fki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }
    }

    // supply_response_compound->fki_variableexpense_id
    cJSON *fki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "fkiVariableexpenseID");
    if (!fki_variableexpense_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_variableexpense_id))
    {
    goto end; //Numeric
    }

    // supply_response_compound->s_supply_code
    cJSON *s_supply_code = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "sSupplyCode");
    if (!s_supply_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_supply_code))
    {
    goto end; //String
    }

    // supply_response_compound->obj_supply_description
    cJSON *obj_supply_description = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "objSupplyDescription");
    if (!obj_supply_description) {
        goto end;
    }

    
    obj_supply_description_local_nonprim = multilingual_supply_description_parseFromJSON(obj_supply_description); //nonprimitive

    // supply_response_compound->d_supply_unitprice
    cJSON *d_supply_unitprice = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "dSupplyUnitprice");
    if (!d_supply_unitprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_supply_unitprice))
    {
    goto end; //String
    }

    // supply_response_compound->b_supply_isactive
    cJSON *b_supply_isactive = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "bSupplyIsactive");
    if (!b_supply_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_supply_isactive))
    {
    goto end; //Bool
    }

    // supply_response_compound->b_supply_variableprice
    cJSON *b_supply_variableprice = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "bSupplyVariableprice");
    if (!b_supply_variableprice) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_supply_variableprice))
    {
    goto end; //Bool
    }

    // supply_response_compound->s_glaccount_description_x
    cJSON *s_glaccount_description_x = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "sGlaccountDescriptionX");
    if (s_glaccount_description_x) { 
    if(!cJSON_IsString(s_glaccount_description_x) && !cJSON_IsNull(s_glaccount_description_x))
    {
    goto end; //String
    }
    }

    // supply_response_compound->s_glaccountcontainer_longdescription_x
    cJSON *s_glaccountcontainer_longdescription_x = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "sGlaccountcontainerLongdescriptionX");
    if (s_glaccountcontainer_longdescription_x) { 
    if(!cJSON_IsString(s_glaccountcontainer_longdescription_x) && !cJSON_IsNull(s_glaccountcontainer_longdescription_x))
    {
    goto end; //String
    }
    }

    // supply_response_compound->s_variableexpense_description_x
    cJSON *s_variableexpense_description_x = cJSON_GetObjectItemCaseSensitive(supply_response_compoundJSON, "sVariableexpenseDescriptionX");
    if (s_variableexpense_description_x) { 
    if(!cJSON_IsString(s_variableexpense_description_x) && !cJSON_IsNull(s_variableexpense_description_x))
    {
    goto end; //String
    }
    }


    supply_response_compound_local_var = supply_response_compound_create (
        pki_supply_id->valuedouble,
        fki_glaccount_id ? fki_glaccount_id->valuedouble : 0,
        fki_glaccountcontainer_id ? fki_glaccountcontainer_id->valuedouble : 0,
        fki_variableexpense_id->valuedouble,
        strdup(s_supply_code->valuestring),
        obj_supply_description_local_nonprim,
        strdup(d_supply_unitprice->valuestring),
        b_supply_isactive->valueint,
        b_supply_variableprice->valueint,
        s_glaccount_description_x && !cJSON_IsNull(s_glaccount_description_x) ? strdup(s_glaccount_description_x->valuestring) : NULL,
        s_glaccountcontainer_longdescription_x && !cJSON_IsNull(s_glaccountcontainer_longdescription_x) ? strdup(s_glaccountcontainer_longdescription_x->valuestring) : NULL,
        s_variableexpense_description_x && !cJSON_IsNull(s_variableexpense_description_x) ? strdup(s_variableexpense_description_x->valuestring) : NULL
        );

    return supply_response_compound_local_var;
end:
    if (obj_supply_description_local_nonprim) {
        multilingual_supply_description_free(obj_supply_description_local_nonprim);
        obj_supply_description_local_nonprim = NULL;
    }
    return NULL;

}
