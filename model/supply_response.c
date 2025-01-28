#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_response.h"



static supply_response_t *supply_response_create_internal(
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
    supply_response_t *supply_response_local_var = malloc(sizeof(supply_response_t));
    if (!supply_response_local_var) {
        return NULL;
    }
    supply_response_local_var->pki_supply_id = pki_supply_id;
    supply_response_local_var->fki_glaccount_id = fki_glaccount_id;
    supply_response_local_var->fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    supply_response_local_var->fki_variableexpense_id = fki_variableexpense_id;
    supply_response_local_var->s_supply_code = s_supply_code;
    supply_response_local_var->obj_supply_description = obj_supply_description;
    supply_response_local_var->d_supply_unitprice = d_supply_unitprice;
    supply_response_local_var->b_supply_isactive = b_supply_isactive;
    supply_response_local_var->b_supply_variableprice = b_supply_variableprice;
    supply_response_local_var->s_glaccount_description_x = s_glaccount_description_x;
    supply_response_local_var->s_glaccountcontainer_longdescription_x = s_glaccountcontainer_longdescription_x;
    supply_response_local_var->s_variableexpense_description_x = s_variableexpense_description_x;

    supply_response_local_var->_library_owned = 1;
    return supply_response_local_var;
}

__attribute__((deprecated)) supply_response_t *supply_response_create(
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
    return supply_response_create_internal (
        pki_supply_id,
        fki_glaccount_id,
        fki_glaccountcontainer_id,
        fki_variableexpense_id,
        s_supply_code,
        obj_supply_description,
        d_supply_unitprice,
        b_supply_isactive,
        b_supply_variableprice,
        s_glaccount_description_x,
        s_glaccountcontainer_longdescription_x,
        s_variableexpense_description_x
        );
}

void supply_response_free(supply_response_t *supply_response) {
    if(NULL == supply_response){
        return ;
    }
    if(supply_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "supply_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (supply_response->s_supply_code) {
        free(supply_response->s_supply_code);
        supply_response->s_supply_code = NULL;
    }
    if (supply_response->obj_supply_description) {
        multilingual_supply_description_free(supply_response->obj_supply_description);
        supply_response->obj_supply_description = NULL;
    }
    if (supply_response->d_supply_unitprice) {
        free(supply_response->d_supply_unitprice);
        supply_response->d_supply_unitprice = NULL;
    }
    if (supply_response->s_glaccount_description_x) {
        free(supply_response->s_glaccount_description_x);
        supply_response->s_glaccount_description_x = NULL;
    }
    if (supply_response->s_glaccountcontainer_longdescription_x) {
        free(supply_response->s_glaccountcontainer_longdescription_x);
        supply_response->s_glaccountcontainer_longdescription_x = NULL;
    }
    if (supply_response->s_variableexpense_description_x) {
        free(supply_response->s_variableexpense_description_x);
        supply_response->s_variableexpense_description_x = NULL;
    }
    free(supply_response);
}

cJSON *supply_response_convertToJSON(supply_response_t *supply_response) {
    cJSON *item = cJSON_CreateObject();

    // supply_response->pki_supply_id
    if (!supply_response->pki_supply_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSupplyID", supply_response->pki_supply_id) == NULL) {
    goto fail; //Numeric
    }


    // supply_response->fki_glaccount_id
    if(supply_response->fki_glaccount_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountID", supply_response->fki_glaccount_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supply_response->fki_glaccountcontainer_id
    if(supply_response->fki_glaccountcontainer_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerID", supply_response->fki_glaccountcontainer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supply_response->fki_variableexpense_id
    if (!supply_response->fki_variableexpense_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiVariableexpenseID", supply_response->fki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }


    // supply_response->s_supply_code
    if (!supply_response->s_supply_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSupplyCode", supply_response->s_supply_code) == NULL) {
    goto fail; //String
    }


    // supply_response->obj_supply_description
    if (!supply_response->obj_supply_description) {
        goto fail;
    }
    cJSON *obj_supply_description_local_JSON = multilingual_supply_description_convertToJSON(supply_response->obj_supply_description);
    if(obj_supply_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSupplyDescription", obj_supply_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // supply_response->d_supply_unitprice
    if (!supply_response->d_supply_unitprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dSupplyUnitprice", supply_response->d_supply_unitprice) == NULL) {
    goto fail; //String
    }


    // supply_response->b_supply_isactive
    if (!supply_response->b_supply_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplyIsactive", supply_response->b_supply_isactive) == NULL) {
    goto fail; //Bool
    }


    // supply_response->b_supply_variableprice
    if (!supply_response->b_supply_variableprice) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplyVariableprice", supply_response->b_supply_variableprice) == NULL) {
    goto fail; //Bool
    }


    // supply_response->s_glaccount_description_x
    if(supply_response->s_glaccount_description_x) {
    if(cJSON_AddStringToObject(item, "sGlaccountDescriptionX", supply_response->s_glaccount_description_x) == NULL) {
    goto fail; //String
    }
    }


    // supply_response->s_glaccountcontainer_longdescription_x
    if(supply_response->s_glaccountcontainer_longdescription_x) {
    if(cJSON_AddStringToObject(item, "sGlaccountcontainerLongdescriptionX", supply_response->s_glaccountcontainer_longdescription_x) == NULL) {
    goto fail; //String
    }
    }


    // supply_response->s_variableexpense_description_x
    if(supply_response->s_variableexpense_description_x) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescriptionX", supply_response->s_variableexpense_description_x) == NULL) {
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

supply_response_t *supply_response_parseFromJSON(cJSON *supply_responseJSON){

    supply_response_t *supply_response_local_var = NULL;

    // define the local variable for supply_response->obj_supply_description
    multilingual_supply_description_t *obj_supply_description_local_nonprim = NULL;

    // supply_response->pki_supply_id
    cJSON *pki_supply_id = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "pkiSupplyID");
    if (cJSON_IsNull(pki_supply_id)) {
        pki_supply_id = NULL;
    }
    if (!pki_supply_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_supply_id))
    {
    goto end; //Numeric
    }

    // supply_response->fki_glaccount_id
    cJSON *fki_glaccount_id = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "fkiGlaccountID");
    if (cJSON_IsNull(fki_glaccount_id)) {
        fki_glaccount_id = NULL;
    }
    if (fki_glaccount_id) { 
    if(!cJSON_IsNumber(fki_glaccount_id))
    {
    goto end; //Numeric
    }
    }

    // supply_response->fki_glaccountcontainer_id
    cJSON *fki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "fkiGlaccountcontainerID");
    if (cJSON_IsNull(fki_glaccountcontainer_id)) {
        fki_glaccountcontainer_id = NULL;
    }
    if (fki_glaccountcontainer_id) { 
    if(!cJSON_IsNumber(fki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }
    }

    // supply_response->fki_variableexpense_id
    cJSON *fki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "fkiVariableexpenseID");
    if (cJSON_IsNull(fki_variableexpense_id)) {
        fki_variableexpense_id = NULL;
    }
    if (!fki_variableexpense_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_variableexpense_id))
    {
    goto end; //Numeric
    }

    // supply_response->s_supply_code
    cJSON *s_supply_code = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "sSupplyCode");
    if (cJSON_IsNull(s_supply_code)) {
        s_supply_code = NULL;
    }
    if (!s_supply_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_supply_code))
    {
    goto end; //String
    }

    // supply_response->obj_supply_description
    cJSON *obj_supply_description = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "objSupplyDescription");
    if (cJSON_IsNull(obj_supply_description)) {
        obj_supply_description = NULL;
    }
    if (!obj_supply_description) {
        goto end;
    }

    
    obj_supply_description_local_nonprim = multilingual_supply_description_parseFromJSON(obj_supply_description); //nonprimitive

    // supply_response->d_supply_unitprice
    cJSON *d_supply_unitprice = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "dSupplyUnitprice");
    if (cJSON_IsNull(d_supply_unitprice)) {
        d_supply_unitprice = NULL;
    }
    if (!d_supply_unitprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_supply_unitprice))
    {
    goto end; //String
    }

    // supply_response->b_supply_isactive
    cJSON *b_supply_isactive = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "bSupplyIsactive");
    if (cJSON_IsNull(b_supply_isactive)) {
        b_supply_isactive = NULL;
    }
    if (!b_supply_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_supply_isactive))
    {
    goto end; //Bool
    }

    // supply_response->b_supply_variableprice
    cJSON *b_supply_variableprice = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "bSupplyVariableprice");
    if (cJSON_IsNull(b_supply_variableprice)) {
        b_supply_variableprice = NULL;
    }
    if (!b_supply_variableprice) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_supply_variableprice))
    {
    goto end; //Bool
    }

    // supply_response->s_glaccount_description_x
    cJSON *s_glaccount_description_x = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "sGlaccountDescriptionX");
    if (cJSON_IsNull(s_glaccount_description_x)) {
        s_glaccount_description_x = NULL;
    }
    if (s_glaccount_description_x) { 
    if(!cJSON_IsString(s_glaccount_description_x) && !cJSON_IsNull(s_glaccount_description_x))
    {
    goto end; //String
    }
    }

    // supply_response->s_glaccountcontainer_longdescription_x
    cJSON *s_glaccountcontainer_longdescription_x = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "sGlaccountcontainerLongdescriptionX");
    if (cJSON_IsNull(s_glaccountcontainer_longdescription_x)) {
        s_glaccountcontainer_longdescription_x = NULL;
    }
    if (s_glaccountcontainer_longdescription_x) { 
    if(!cJSON_IsString(s_glaccountcontainer_longdescription_x) && !cJSON_IsNull(s_glaccountcontainer_longdescription_x))
    {
    goto end; //String
    }
    }

    // supply_response->s_variableexpense_description_x
    cJSON *s_variableexpense_description_x = cJSON_GetObjectItemCaseSensitive(supply_responseJSON, "sVariableexpenseDescriptionX");
    if (cJSON_IsNull(s_variableexpense_description_x)) {
        s_variableexpense_description_x = NULL;
    }
    if (s_variableexpense_description_x) { 
    if(!cJSON_IsString(s_variableexpense_description_x) && !cJSON_IsNull(s_variableexpense_description_x))
    {
    goto end; //String
    }
    }


    supply_response_local_var = supply_response_create_internal (
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

    return supply_response_local_var;
end:
    if (obj_supply_description_local_nonprim) {
        multilingual_supply_description_free(obj_supply_description_local_nonprim);
        obj_supply_description_local_nonprim = NULL;
    }
    return NULL;

}
