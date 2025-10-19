#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "otherincome_list_element.h"



static otherincome_list_element_t *otherincome_list_element_create_internal(
    int pki_otherincome_id,
    int fki_otherincometype_id,
    char *s_otherincometype_description_x,
    char *s_otherincome_description,
    ezmax_api_definition__full_field_e_otherincome_remunerationtype__e e_otherincome_remunerationtype,
    char *d_otherincome_remunerationsubtotal,
    char *d_otherincome_remunerationtaxes,
    char *d_otherincome_remunerationtotal,
    char *dt_otherincome_paid,
    int b_otherincome_isactive
    ) {
    otherincome_list_element_t *otherincome_list_element_local_var = malloc(sizeof(otherincome_list_element_t));
    if (!otherincome_list_element_local_var) {
        return NULL;
    }
    otherincome_list_element_local_var->pki_otherincome_id = pki_otherincome_id;
    otherincome_list_element_local_var->fki_otherincometype_id = fki_otherincometype_id;
    otherincome_list_element_local_var->s_otherincometype_description_x = s_otherincometype_description_x;
    otherincome_list_element_local_var->s_otherincome_description = s_otherincome_description;
    otherincome_list_element_local_var->e_otherincome_remunerationtype = e_otherincome_remunerationtype;
    otherincome_list_element_local_var->d_otherincome_remunerationsubtotal = d_otherincome_remunerationsubtotal;
    otherincome_list_element_local_var->d_otherincome_remunerationtaxes = d_otherincome_remunerationtaxes;
    otherincome_list_element_local_var->d_otherincome_remunerationtotal = d_otherincome_remunerationtotal;
    otherincome_list_element_local_var->dt_otherincome_paid = dt_otherincome_paid;
    otherincome_list_element_local_var->b_otherincome_isactive = b_otherincome_isactive;

    otherincome_list_element_local_var->_library_owned = 1;
    return otherincome_list_element_local_var;
}

__attribute__((deprecated)) otherincome_list_element_t *otherincome_list_element_create(
    int pki_otherincome_id,
    int fki_otherincometype_id,
    char *s_otherincometype_description_x,
    char *s_otherincome_description,
    ezmax_api_definition__full_field_e_otherincome_remunerationtype__e e_otherincome_remunerationtype,
    char *d_otherincome_remunerationsubtotal,
    char *d_otherincome_remunerationtaxes,
    char *d_otherincome_remunerationtotal,
    char *dt_otherincome_paid,
    int b_otherincome_isactive
    ) {
    return otherincome_list_element_create_internal (
        pki_otherincome_id,
        fki_otherincometype_id,
        s_otherincometype_description_x,
        s_otherincome_description,
        e_otherincome_remunerationtype,
        d_otherincome_remunerationsubtotal,
        d_otherincome_remunerationtaxes,
        d_otherincome_remunerationtotal,
        dt_otherincome_paid,
        b_otherincome_isactive
        );
}

void otherincome_list_element_free(otherincome_list_element_t *otherincome_list_element) {
    if(NULL == otherincome_list_element){
        return ;
    }
    if(otherincome_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "otherincome_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (otherincome_list_element->s_otherincometype_description_x) {
        free(otherincome_list_element->s_otherincometype_description_x);
        otherincome_list_element->s_otherincometype_description_x = NULL;
    }
    if (otherincome_list_element->s_otherincome_description) {
        free(otherincome_list_element->s_otherincome_description);
        otherincome_list_element->s_otherincome_description = NULL;
    }
    if (otherincome_list_element->d_otherincome_remunerationsubtotal) {
        free(otherincome_list_element->d_otherincome_remunerationsubtotal);
        otherincome_list_element->d_otherincome_remunerationsubtotal = NULL;
    }
    if (otherincome_list_element->d_otherincome_remunerationtaxes) {
        free(otherincome_list_element->d_otherincome_remunerationtaxes);
        otherincome_list_element->d_otherincome_remunerationtaxes = NULL;
    }
    if (otherincome_list_element->d_otherincome_remunerationtotal) {
        free(otherincome_list_element->d_otherincome_remunerationtotal);
        otherincome_list_element->d_otherincome_remunerationtotal = NULL;
    }
    if (otherincome_list_element->dt_otherincome_paid) {
        free(otherincome_list_element->dt_otherincome_paid);
        otherincome_list_element->dt_otherincome_paid = NULL;
    }
    free(otherincome_list_element);
}

cJSON *otherincome_list_element_convertToJSON(otherincome_list_element_t *otherincome_list_element) {
    cJSON *item = cJSON_CreateObject();

    // otherincome_list_element->pki_otherincome_id
    if (!otherincome_list_element->pki_otherincome_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiOtherincomeID", otherincome_list_element->pki_otherincome_id) == NULL) {
    goto fail; //Numeric
    }


    // otherincome_list_element->fki_otherincometype_id
    if (!otherincome_list_element->fki_otherincometype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiOtherincometypeID", otherincome_list_element->fki_otherincometype_id) == NULL) {
    goto fail; //Numeric
    }


    // otherincome_list_element->s_otherincometype_description_x
    if (!otherincome_list_element->s_otherincometype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sOtherincometypeDescriptionX", otherincome_list_element->s_otherincometype_description_x) == NULL) {
    goto fail; //String
    }


    // otherincome_list_element->s_otherincome_description
    if (!otherincome_list_element->s_otherincome_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sOtherincomeDescription", otherincome_list_element->s_otherincome_description) == NULL) {
    goto fail; //String
    }


    // otherincome_list_element->e_otherincome_remunerationtype
    if (ezmax_api_definition__full_field_e_otherincome_remunerationtype__NULL == otherincome_list_element->e_otherincome_remunerationtype) {
        goto fail;
    }
    cJSON *e_otherincome_remunerationtype_local_JSON = field_e_otherincome_remunerationtype_convertToJSON(otherincome_list_element->e_otherincome_remunerationtype);
    if(e_otherincome_remunerationtype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eOtherincomeRemunerationtype", e_otherincome_remunerationtype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // otherincome_list_element->d_otherincome_remunerationsubtotal
    if (!otherincome_list_element->d_otherincome_remunerationsubtotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dOtherincomeRemunerationsubtotal", otherincome_list_element->d_otherincome_remunerationsubtotal) == NULL) {
    goto fail; //String
    }


    // otherincome_list_element->d_otherincome_remunerationtaxes
    if(otherincome_list_element->d_otherincome_remunerationtaxes) {
    if(cJSON_AddStringToObject(item, "dOtherincomeRemunerationtaxes", otherincome_list_element->d_otherincome_remunerationtaxes) == NULL) {
    goto fail; //String
    }
    }


    // otherincome_list_element->d_otherincome_remunerationtotal
    if(otherincome_list_element->d_otherincome_remunerationtotal) {
    if(cJSON_AddStringToObject(item, "dOtherincomeRemunerationtotal", otherincome_list_element->d_otherincome_remunerationtotal) == NULL) {
    goto fail; //String
    }
    }


    // otherincome_list_element->dt_otherincome_paid
    if (!otherincome_list_element->dt_otherincome_paid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtOtherincomePaid", otherincome_list_element->dt_otherincome_paid) == NULL) {
    goto fail; //String
    }


    // otherincome_list_element->b_otherincome_isactive
    if (!otherincome_list_element->b_otherincome_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bOtherincomeIsactive", otherincome_list_element->b_otherincome_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

otherincome_list_element_t *otherincome_list_element_parseFromJSON(cJSON *otherincome_list_elementJSON){

    otherincome_list_element_t *otherincome_list_element_local_var = NULL;

    // define the local variable for otherincome_list_element->e_otherincome_remunerationtype
    ezmax_api_definition__full_field_e_otherincome_remunerationtype__e e_otherincome_remunerationtype_local_nonprim = 0;

    // otherincome_list_element->pki_otherincome_id
    cJSON *pki_otherincome_id = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "pkiOtherincomeID");
    if (cJSON_IsNull(pki_otherincome_id)) {
        pki_otherincome_id = NULL;
    }
    if (!pki_otherincome_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_otherincome_id))
    {
    goto end; //Numeric
    }

    // otherincome_list_element->fki_otherincometype_id
    cJSON *fki_otherincometype_id = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "fkiOtherincometypeID");
    if (cJSON_IsNull(fki_otherincometype_id)) {
        fki_otherincometype_id = NULL;
    }
    if (!fki_otherincometype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_otherincometype_id))
    {
    goto end; //Numeric
    }

    // otherincome_list_element->s_otherincometype_description_x
    cJSON *s_otherincometype_description_x = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "sOtherincometypeDescriptionX");
    if (cJSON_IsNull(s_otherincometype_description_x)) {
        s_otherincometype_description_x = NULL;
    }
    if (!s_otherincometype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_otherincometype_description_x))
    {
    goto end; //String
    }

    // otherincome_list_element->s_otherincome_description
    cJSON *s_otherincome_description = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "sOtherincomeDescription");
    if (cJSON_IsNull(s_otherincome_description)) {
        s_otherincome_description = NULL;
    }
    if (!s_otherincome_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_otherincome_description))
    {
    goto end; //String
    }

    // otherincome_list_element->e_otherincome_remunerationtype
    cJSON *e_otherincome_remunerationtype = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "eOtherincomeRemunerationtype");
    if (cJSON_IsNull(e_otherincome_remunerationtype)) {
        e_otherincome_remunerationtype = NULL;
    }
    if (!e_otherincome_remunerationtype) {
        goto end;
    }

    
    e_otherincome_remunerationtype_local_nonprim = field_e_otherincome_remunerationtype_parseFromJSON(e_otherincome_remunerationtype); //custom

    // otherincome_list_element->d_otherincome_remunerationsubtotal
    cJSON *d_otherincome_remunerationsubtotal = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "dOtherincomeRemunerationsubtotal");
    if (cJSON_IsNull(d_otherincome_remunerationsubtotal)) {
        d_otherincome_remunerationsubtotal = NULL;
    }
    if (!d_otherincome_remunerationsubtotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_otherincome_remunerationsubtotal))
    {
    goto end; //String
    }

    // otherincome_list_element->d_otherincome_remunerationtaxes
    cJSON *d_otherincome_remunerationtaxes = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "dOtherincomeRemunerationtaxes");
    if (cJSON_IsNull(d_otherincome_remunerationtaxes)) {
        d_otherincome_remunerationtaxes = NULL;
    }
    if (d_otherincome_remunerationtaxes) { 
    if(!cJSON_IsString(d_otherincome_remunerationtaxes) && !cJSON_IsNull(d_otherincome_remunerationtaxes))
    {
    goto end; //String
    }
    }

    // otherincome_list_element->d_otherincome_remunerationtotal
    cJSON *d_otherincome_remunerationtotal = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "dOtherincomeRemunerationtotal");
    if (cJSON_IsNull(d_otherincome_remunerationtotal)) {
        d_otherincome_remunerationtotal = NULL;
    }
    if (d_otherincome_remunerationtotal) { 
    if(!cJSON_IsString(d_otherincome_remunerationtotal) && !cJSON_IsNull(d_otherincome_remunerationtotal))
    {
    goto end; //String
    }
    }

    // otherincome_list_element->dt_otherincome_paid
    cJSON *dt_otherincome_paid = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "dtOtherincomePaid");
    if (cJSON_IsNull(dt_otherincome_paid)) {
        dt_otherincome_paid = NULL;
    }
    if (!dt_otherincome_paid) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_otherincome_paid))
    {
    goto end; //String
    }

    // otherincome_list_element->b_otherincome_isactive
    cJSON *b_otherincome_isactive = cJSON_GetObjectItemCaseSensitive(otherincome_list_elementJSON, "bOtherincomeIsactive");
    if (cJSON_IsNull(b_otherincome_isactive)) {
        b_otherincome_isactive = NULL;
    }
    if (!b_otherincome_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_otherincome_isactive))
    {
    goto end; //Bool
    }


    otherincome_list_element_local_var = otherincome_list_element_create_internal (
        pki_otherincome_id->valuedouble,
        fki_otherincometype_id->valuedouble,
        strdup(s_otherincometype_description_x->valuestring),
        strdup(s_otherincome_description->valuestring),
        e_otherincome_remunerationtype_local_nonprim,
        strdup(d_otherincome_remunerationsubtotal->valuestring),
        d_otherincome_remunerationtaxes && !cJSON_IsNull(d_otherincome_remunerationtaxes) ? strdup(d_otherincome_remunerationtaxes->valuestring) : NULL,
        d_otherincome_remunerationtotal && !cJSON_IsNull(d_otherincome_remunerationtotal) ? strdup(d_otherincome_remunerationtotal->valuestring) : NULL,
        strdup(dt_otherincome_paid->valuestring),
        b_otherincome_isactive->valueint
        );

    return otherincome_list_element_local_var;
end:
    if (e_otherincome_remunerationtype_local_nonprim) {
        e_otherincome_remunerationtype_local_nonprim = 0;
    }
    return NULL;

}
