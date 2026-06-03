#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_list_element.h"



static supply_list_element_t *supply_list_element_create_internal(
    int *pki_supply_id,
    int *fki_glaccount_id,
    int *fki_glaccountcontainer_id,
    int *fki_variableexpense_id,
    char *s_supply_code,
    char *s_supply_description_x,
    char *d_supply_unitprice,
    int *b_supply_isactive,
    int *b_supply_variableprice,
    char *s_glaccount_description_x,
    char *s_glaccountcontainer_longdescription_x,
    char *s_variableexpense_description_x
    ) {
    supply_list_element_t *supply_list_element_local_var = malloc(sizeof(supply_list_element_t));
    if (!supply_list_element_local_var) {
        return NULL;
    }
    memset(supply_list_element_local_var, 0, sizeof(supply_list_element_t));
    supply_list_element_local_var->_library_owned = 1;
    supply_list_element_local_var->pki_supply_id = pki_supply_id;
    supply_list_element_local_var->fki_glaccount_id = fki_glaccount_id;
    supply_list_element_local_var->fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    supply_list_element_local_var->fki_variableexpense_id = fki_variableexpense_id;
    supply_list_element_local_var->s_supply_code = s_supply_code;
    supply_list_element_local_var->s_supply_description_x = s_supply_description_x;
    supply_list_element_local_var->d_supply_unitprice = d_supply_unitprice;
    supply_list_element_local_var->b_supply_isactive = b_supply_isactive;
    supply_list_element_local_var->b_supply_variableprice = b_supply_variableprice;
    supply_list_element_local_var->s_glaccount_description_x = s_glaccount_description_x;
    supply_list_element_local_var->s_glaccountcontainer_longdescription_x = s_glaccountcontainer_longdescription_x;
    supply_list_element_local_var->s_variableexpense_description_x = s_variableexpense_description_x;
    return supply_list_element_local_var;
}

__attribute__((deprecated)) supply_list_element_t *supply_list_element_create(
    int *pki_supply_id,
    int *fki_glaccount_id,
    int *fki_glaccountcontainer_id,
    int *fki_variableexpense_id,
    char *s_supply_code,
    char *s_supply_description_x,
    char *d_supply_unitprice,
    int *b_supply_isactive,
    int *b_supply_variableprice,
    char *s_glaccount_description_x,
    char *s_glaccountcontainer_longdescription_x,
    char *s_variableexpense_description_x
    ) {
    int *pki_supply_id_copy = NULL;
    if (pki_supply_id) {
        pki_supply_id_copy = malloc(sizeof(int));
        if (pki_supply_id_copy) *pki_supply_id_copy = *pki_supply_id;
    }
    int *fki_glaccount_id_copy = NULL;
    if (fki_glaccount_id) {
        fki_glaccount_id_copy = malloc(sizeof(int));
        if (fki_glaccount_id_copy) *fki_glaccount_id_copy = *fki_glaccount_id;
    }
    int *fki_glaccountcontainer_id_copy = NULL;
    if (fki_glaccountcontainer_id) {
        fki_glaccountcontainer_id_copy = malloc(sizeof(int));
        if (fki_glaccountcontainer_id_copy) *fki_glaccountcontainer_id_copy = *fki_glaccountcontainer_id;
    }
    int *fki_variableexpense_id_copy = NULL;
    if (fki_variableexpense_id) {
        fki_variableexpense_id_copy = malloc(sizeof(int));
        if (fki_variableexpense_id_copy) *fki_variableexpense_id_copy = *fki_variableexpense_id;
    }
    int *b_supply_isactive_copy = NULL;
    if (b_supply_isactive) {
        b_supply_isactive_copy = malloc(sizeof(int));
        if (b_supply_isactive_copy) *b_supply_isactive_copy = *b_supply_isactive;
    }
    int *b_supply_variableprice_copy = NULL;
    if (b_supply_variableprice) {
        b_supply_variableprice_copy = malloc(sizeof(int));
        if (b_supply_variableprice_copy) *b_supply_variableprice_copy = *b_supply_variableprice;
    }
    supply_list_element_t *result = supply_list_element_create_internal (
        pki_supply_id_copy,
        fki_glaccount_id_copy,
        fki_glaccountcontainer_id_copy,
        fki_variableexpense_id_copy,
        s_supply_code,
        s_supply_description_x,
        d_supply_unitprice,
        b_supply_isactive_copy,
        b_supply_variableprice_copy,
        s_glaccount_description_x,
        s_glaccountcontainer_longdescription_x,
        s_variableexpense_description_x
        );
    if (!result) {
        free(pki_supply_id_copy);
        free(fki_glaccount_id_copy);
        free(fki_glaccountcontainer_id_copy);
        free(fki_variableexpense_id_copy);
        free(b_supply_isactive_copy);
        free(b_supply_variableprice_copy);
    }
    return result;
}

void supply_list_element_free(supply_list_element_t *supply_list_element) {
    if(NULL == supply_list_element){
        return ;
    }
    if(supply_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "supply_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (supply_list_element->pki_supply_id) {
        free(supply_list_element->pki_supply_id);
        supply_list_element->pki_supply_id = NULL;
    }
    if (supply_list_element->fki_glaccount_id) {
        free(supply_list_element->fki_glaccount_id);
        supply_list_element->fki_glaccount_id = NULL;
    }
    if (supply_list_element->fki_glaccountcontainer_id) {
        free(supply_list_element->fki_glaccountcontainer_id);
        supply_list_element->fki_glaccountcontainer_id = NULL;
    }
    if (supply_list_element->fki_variableexpense_id) {
        free(supply_list_element->fki_variableexpense_id);
        supply_list_element->fki_variableexpense_id = NULL;
    }
    if (supply_list_element->s_supply_code) {
        free(supply_list_element->s_supply_code);
        supply_list_element->s_supply_code = NULL;
    }
    if (supply_list_element->s_supply_description_x) {
        free(supply_list_element->s_supply_description_x);
        supply_list_element->s_supply_description_x = NULL;
    }
    if (supply_list_element->d_supply_unitprice) {
        free(supply_list_element->d_supply_unitprice);
        supply_list_element->d_supply_unitprice = NULL;
    }
    if (supply_list_element->b_supply_isactive) {
        free(supply_list_element->b_supply_isactive);
        supply_list_element->b_supply_isactive = NULL;
    }
    if (supply_list_element->b_supply_variableprice) {
        free(supply_list_element->b_supply_variableprice);
        supply_list_element->b_supply_variableprice = NULL;
    }
    if (supply_list_element->s_glaccount_description_x) {
        free(supply_list_element->s_glaccount_description_x);
        supply_list_element->s_glaccount_description_x = NULL;
    }
    if (supply_list_element->s_glaccountcontainer_longdescription_x) {
        free(supply_list_element->s_glaccountcontainer_longdescription_x);
        supply_list_element->s_glaccountcontainer_longdescription_x = NULL;
    }
    if (supply_list_element->s_variableexpense_description_x) {
        free(supply_list_element->s_variableexpense_description_x);
        supply_list_element->s_variableexpense_description_x = NULL;
    }
    free(supply_list_element);
}

cJSON *supply_list_element_convertToJSON(supply_list_element_t *supply_list_element) {
    cJSON *item = cJSON_CreateObject();

    // supply_list_element->pki_supply_id
    if (!supply_list_element->pki_supply_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSupplyID", *supply_list_element->pki_supply_id) == NULL) {
    goto fail; //Numeric
    }


    // supply_list_element->fki_glaccount_id
    if(supply_list_element->fki_glaccount_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountID", *supply_list_element->fki_glaccount_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supply_list_element->fki_glaccountcontainer_id
    if(supply_list_element->fki_glaccountcontainer_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerID", *supply_list_element->fki_glaccountcontainer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // supply_list_element->fki_variableexpense_id
    if (!supply_list_element->fki_variableexpense_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiVariableexpenseID", *supply_list_element->fki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }


    // supply_list_element->s_supply_code
    if (!supply_list_element->s_supply_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSupplyCode", supply_list_element->s_supply_code) == NULL) {
    goto fail; //String
    }


    // supply_list_element->s_supply_description_x
    if (!supply_list_element->s_supply_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSupplyDescriptionX", supply_list_element->s_supply_description_x) == NULL) {
    goto fail; //String
    }


    // supply_list_element->d_supply_unitprice
    if (!supply_list_element->d_supply_unitprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dSupplyUnitprice", supply_list_element->d_supply_unitprice) == NULL) {
    goto fail; //String
    }


    // supply_list_element->b_supply_isactive
    if (!supply_list_element->b_supply_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplyIsactive", *supply_list_element->b_supply_isactive) == NULL) {
    goto fail; //Bool
    }


    // supply_list_element->b_supply_variableprice
    if (!supply_list_element->b_supply_variableprice) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSupplyVariableprice", *supply_list_element->b_supply_variableprice) == NULL) {
    goto fail; //Bool
    }


    // supply_list_element->s_glaccount_description_x
    if(supply_list_element->s_glaccount_description_x) {
    if(cJSON_AddStringToObject(item, "sGlaccountDescriptionX", supply_list_element->s_glaccount_description_x) == NULL) {
    goto fail; //String
    }
    }


    // supply_list_element->s_glaccountcontainer_longdescription_x
    if(supply_list_element->s_glaccountcontainer_longdescription_x) {
    if(cJSON_AddStringToObject(item, "sGlaccountcontainerLongdescriptionX", supply_list_element->s_glaccountcontainer_longdescription_x) == NULL) {
    goto fail; //String
    }
    }


    // supply_list_element->s_variableexpense_description_x
    if(supply_list_element->s_variableexpense_description_x) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescriptionX", supply_list_element->s_variableexpense_description_x) == NULL) {
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

supply_list_element_t *supply_list_element_parseFromJSON(cJSON *supply_list_elementJSON){

    supply_list_element_t *supply_list_element_local_var = NULL;

    // define the local variable for supply_list_element->pki_supply_id
    int *pki_supply_id_local_var = NULL;

    // define the local variable for supply_list_element->fki_glaccount_id
    int *fki_glaccount_id_local_var = NULL;

    // define the local variable for supply_list_element->fki_glaccountcontainer_id
    int *fki_glaccountcontainer_id_local_var = NULL;

    // define the local variable for supply_list_element->fki_variableexpense_id
    int *fki_variableexpense_id_local_var = NULL;

    char *s_supply_code_local_str = NULL;

    char *s_supply_description_x_local_str = NULL;

    char *d_supply_unitprice_local_str = NULL;

    // define the local variable for supply_list_element->b_supply_isactive
    int *b_supply_isactive_local_var = NULL;

    // define the local variable for supply_list_element->b_supply_variableprice
    int *b_supply_variableprice_local_var = NULL;

    char *s_glaccount_description_x_local_str = NULL;

    char *s_glaccountcontainer_longdescription_x_local_str = NULL;

    char *s_variableexpense_description_x_local_str = NULL;

    // supply_list_element->pki_supply_id
    cJSON *pki_supply_id = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "pkiSupplyID");
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
    pki_supply_id_local_var = malloc(sizeof(int));
    if(!pki_supply_id_local_var)
    {
        goto end;
    }
    *pki_supply_id_local_var = pki_supply_id->valuedouble;

    // supply_list_element->fki_glaccount_id
    cJSON *fki_glaccount_id = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "fkiGlaccountID");
    if (cJSON_IsNull(fki_glaccount_id)) {
        fki_glaccount_id = NULL;
    }
    if (fki_glaccount_id) { 
    if(!cJSON_IsNumber(fki_glaccount_id))
    {
    goto end; //Numeric
    }
    fki_glaccount_id_local_var = malloc(sizeof(int));
    if(!fki_glaccount_id_local_var)
    {
        goto end;
    }
    *fki_glaccount_id_local_var = fki_glaccount_id->valuedouble;
    }

    // supply_list_element->fki_glaccountcontainer_id
    cJSON *fki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "fkiGlaccountcontainerID");
    if (cJSON_IsNull(fki_glaccountcontainer_id)) {
        fki_glaccountcontainer_id = NULL;
    }
    if (fki_glaccountcontainer_id) { 
    if(!cJSON_IsNumber(fki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }
    fki_glaccountcontainer_id_local_var = malloc(sizeof(int));
    if(!fki_glaccountcontainer_id_local_var)
    {
        goto end;
    }
    *fki_glaccountcontainer_id_local_var = fki_glaccountcontainer_id->valuedouble;
    }

    // supply_list_element->fki_variableexpense_id
    cJSON *fki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "fkiVariableexpenseID");
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
    fki_variableexpense_id_local_var = malloc(sizeof(int));
    if(!fki_variableexpense_id_local_var)
    {
        goto end;
    }
    *fki_variableexpense_id_local_var = fki_variableexpense_id->valuedouble;

    // supply_list_element->s_supply_code
    cJSON *s_supply_code = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "sSupplyCode");
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

    // supply_list_element->s_supply_description_x
    cJSON *s_supply_description_x = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "sSupplyDescriptionX");
    if (cJSON_IsNull(s_supply_description_x)) {
        s_supply_description_x = NULL;
    }
    if (!s_supply_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_supply_description_x))
    {
    goto end; //String
    }

    // supply_list_element->d_supply_unitprice
    cJSON *d_supply_unitprice = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "dSupplyUnitprice");
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

    // supply_list_element->b_supply_isactive
    cJSON *b_supply_isactive = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "bSupplyIsactive");
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
    b_supply_isactive_local_var = malloc(sizeof(int));
    if(!b_supply_isactive_local_var)
    {
        goto end;
    }
    *b_supply_isactive_local_var = b_supply_isactive->valueint;

    // supply_list_element->b_supply_variableprice
    cJSON *b_supply_variableprice = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "bSupplyVariableprice");
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
    b_supply_variableprice_local_var = malloc(sizeof(int));
    if(!b_supply_variableprice_local_var)
    {
        goto end;
    }
    *b_supply_variableprice_local_var = b_supply_variableprice->valueint;

    // supply_list_element->s_glaccount_description_x
    cJSON *s_glaccount_description_x = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "sGlaccountDescriptionX");
    if (cJSON_IsNull(s_glaccount_description_x)) {
        s_glaccount_description_x = NULL;
    }
    if (s_glaccount_description_x) { 
    if(!cJSON_IsString(s_glaccount_description_x) && !cJSON_IsNull(s_glaccount_description_x))
    {
    goto end; //String
    }
    }

    // supply_list_element->s_glaccountcontainer_longdescription_x
    cJSON *s_glaccountcontainer_longdescription_x = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "sGlaccountcontainerLongdescriptionX");
    if (cJSON_IsNull(s_glaccountcontainer_longdescription_x)) {
        s_glaccountcontainer_longdescription_x = NULL;
    }
    if (s_glaccountcontainer_longdescription_x) { 
    if(!cJSON_IsString(s_glaccountcontainer_longdescription_x) && !cJSON_IsNull(s_glaccountcontainer_longdescription_x))
    {
    goto end; //String
    }
    }

    // supply_list_element->s_variableexpense_description_x
    cJSON *s_variableexpense_description_x = cJSON_GetObjectItemCaseSensitive(supply_list_elementJSON, "sVariableexpenseDescriptionX");
    if (cJSON_IsNull(s_variableexpense_description_x)) {
        s_variableexpense_description_x = NULL;
    }
    if (s_variableexpense_description_x) { 
    if(!cJSON_IsString(s_variableexpense_description_x) && !cJSON_IsNull(s_variableexpense_description_x))
    {
    goto end; //String
    }
    }


    if (s_supply_code && !cJSON_IsNull(s_supply_code)) s_supply_code_local_str = strdup(s_supply_code->valuestring);
    if (s_supply_description_x && !cJSON_IsNull(s_supply_description_x)) s_supply_description_x_local_str = strdup(s_supply_description_x->valuestring);
    if (d_supply_unitprice && !cJSON_IsNull(d_supply_unitprice)) d_supply_unitprice_local_str = strdup(d_supply_unitprice->valuestring);
    if (s_glaccount_description_x && !cJSON_IsNull(s_glaccount_description_x)) s_glaccount_description_x_local_str = strdup(s_glaccount_description_x->valuestring);
    if (s_glaccountcontainer_longdescription_x && !cJSON_IsNull(s_glaccountcontainer_longdescription_x)) s_glaccountcontainer_longdescription_x_local_str = strdup(s_glaccountcontainer_longdescription_x->valuestring);
    if (s_variableexpense_description_x && !cJSON_IsNull(s_variableexpense_description_x)) s_variableexpense_description_x_local_str = strdup(s_variableexpense_description_x->valuestring);

    supply_list_element_local_var = supply_list_element_create_internal (
        pki_supply_id_local_var,
        fki_glaccount_id_local_var,
        fki_glaccountcontainer_id_local_var,
        fki_variableexpense_id_local_var,
        s_supply_code_local_str,
        s_supply_description_x_local_str,
        d_supply_unitprice_local_str,
        b_supply_isactive_local_var,
        b_supply_variableprice_local_var,
        s_glaccount_description_x_local_str,
        s_glaccountcontainer_longdescription_x_local_str,
        s_variableexpense_description_x_local_str
        );

    if (!supply_list_element_local_var) {
        goto end;
    }

    return supply_list_element_local_var;
end:
    if (pki_supply_id_local_var) {
        free(pki_supply_id_local_var);
        pki_supply_id_local_var = NULL;
    }
    if (fki_glaccount_id_local_var) {
        free(fki_glaccount_id_local_var);
        fki_glaccount_id_local_var = NULL;
    }
    if (fki_glaccountcontainer_id_local_var) {
        free(fki_glaccountcontainer_id_local_var);
        fki_glaccountcontainer_id_local_var = NULL;
    }
    if (fki_variableexpense_id_local_var) {
        free(fki_variableexpense_id_local_var);
        fki_variableexpense_id_local_var = NULL;
    }
    if (s_supply_code_local_str) {
        free(s_supply_code_local_str);
        s_supply_code_local_str = NULL;
    }
    if (s_supply_description_x_local_str) {
        free(s_supply_description_x_local_str);
        s_supply_description_x_local_str = NULL;
    }
    if (d_supply_unitprice_local_str) {
        free(d_supply_unitprice_local_str);
        d_supply_unitprice_local_str = NULL;
    }
    if (b_supply_isactive_local_var) {
        free(b_supply_isactive_local_var);
        b_supply_isactive_local_var = NULL;
    }
    if (b_supply_variableprice_local_var) {
        free(b_supply_variableprice_local_var);
        b_supply_variableprice_local_var = NULL;
    }
    if (s_glaccount_description_x_local_str) {
        free(s_glaccount_description_x_local_str);
        s_glaccount_description_x_local_str = NULL;
    }
    if (s_glaccountcontainer_longdescription_x_local_str) {
        free(s_glaccountcontainer_longdescription_x_local_str);
        s_glaccountcontainer_longdescription_x_local_str = NULL;
    }
    if (s_variableexpense_description_x_local_str) {
        free(s_variableexpense_description_x_local_str);
        s_variableexpense_description_x_local_str = NULL;
    }
    return NULL;

}
