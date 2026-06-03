#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezmaxcustomeruser_response.h"



static custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response_create_internal(
    custom_ezmaxcustomer_response_t *obj_ezmaxcustomer,
    int *fki_contacttitle_id,
    int *fki_language_id,
    email_response_compound_t *obj_email,
    phone_response_compound_t *obj_phone,
    char *s_ezmaxcustomeruser_firstname,
    char *s_ezmaxcustomeruser_lastname
    ) {
    custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response_local_var = malloc(sizeof(custom_ezmaxcustomeruser_response_t));
    if (!custom_ezmaxcustomeruser_response_local_var) {
        return NULL;
    }
    memset(custom_ezmaxcustomeruser_response_local_var, 0, sizeof(custom_ezmaxcustomeruser_response_t));
    custom_ezmaxcustomeruser_response_local_var->_library_owned = 1;
    custom_ezmaxcustomeruser_response_local_var->obj_ezmaxcustomer = obj_ezmaxcustomer;
    custom_ezmaxcustomeruser_response_local_var->fki_contacttitle_id = fki_contacttitle_id;
    custom_ezmaxcustomeruser_response_local_var->fki_language_id = fki_language_id;
    custom_ezmaxcustomeruser_response_local_var->obj_email = obj_email;
    custom_ezmaxcustomeruser_response_local_var->obj_phone = obj_phone;
    custom_ezmaxcustomeruser_response_local_var->s_ezmaxcustomeruser_firstname = s_ezmaxcustomeruser_firstname;
    custom_ezmaxcustomeruser_response_local_var->s_ezmaxcustomeruser_lastname = s_ezmaxcustomeruser_lastname;
    return custom_ezmaxcustomeruser_response_local_var;
}

__attribute__((deprecated)) custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response_create(
    custom_ezmaxcustomer_response_t *obj_ezmaxcustomer,
    int *fki_contacttitle_id,
    int *fki_language_id,
    email_response_compound_t *obj_email,
    phone_response_compound_t *obj_phone,
    char *s_ezmaxcustomeruser_firstname,
    char *s_ezmaxcustomeruser_lastname
    ) {
    int *fki_contacttitle_id_copy = NULL;
    if (fki_contacttitle_id) {
        fki_contacttitle_id_copy = malloc(sizeof(int));
        if (fki_contacttitle_id_copy) *fki_contacttitle_id_copy = *fki_contacttitle_id;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    custom_ezmaxcustomeruser_response_t *result = custom_ezmaxcustomeruser_response_create_internal (
        obj_ezmaxcustomer,
        fki_contacttitle_id_copy,
        fki_language_id_copy,
        obj_email,
        obj_phone,
        s_ezmaxcustomeruser_firstname,
        s_ezmaxcustomeruser_lastname
        );
    if (!result) {
        free(fki_contacttitle_id_copy);
        free(fki_language_id_copy);
    }
    return result;
}

void custom_ezmaxcustomeruser_response_free(custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response) {
    if(NULL == custom_ezmaxcustomeruser_response){
        return ;
    }
    if(custom_ezmaxcustomeruser_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezmaxcustomeruser_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezmaxcustomeruser_response->obj_ezmaxcustomer) {
        custom_ezmaxcustomer_response_free(custom_ezmaxcustomeruser_response->obj_ezmaxcustomer);
        custom_ezmaxcustomeruser_response->obj_ezmaxcustomer = NULL;
    }
    if (custom_ezmaxcustomeruser_response->fki_contacttitle_id) {
        free(custom_ezmaxcustomeruser_response->fki_contacttitle_id);
        custom_ezmaxcustomeruser_response->fki_contacttitle_id = NULL;
    }
    if (custom_ezmaxcustomeruser_response->fki_language_id) {
        free(custom_ezmaxcustomeruser_response->fki_language_id);
        custom_ezmaxcustomeruser_response->fki_language_id = NULL;
    }
    if (custom_ezmaxcustomeruser_response->obj_email) {
        email_response_compound_free(custom_ezmaxcustomeruser_response->obj_email);
        custom_ezmaxcustomeruser_response->obj_email = NULL;
    }
    if (custom_ezmaxcustomeruser_response->obj_phone) {
        phone_response_compound_free(custom_ezmaxcustomeruser_response->obj_phone);
        custom_ezmaxcustomeruser_response->obj_phone = NULL;
    }
    if (custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_firstname) {
        free(custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_firstname);
        custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_firstname = NULL;
    }
    if (custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_lastname) {
        free(custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_lastname);
        custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_lastname = NULL;
    }
    free(custom_ezmaxcustomeruser_response);
}

cJSON *custom_ezmaxcustomeruser_response_convertToJSON(custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezmaxcustomeruser_response->obj_ezmaxcustomer
    if (!custom_ezmaxcustomeruser_response->obj_ezmaxcustomer) {
        goto fail;
    }
    cJSON *obj_ezmaxcustomer_local_JSON = custom_ezmaxcustomer_response_convertToJSON(custom_ezmaxcustomeruser_response->obj_ezmaxcustomer);
    if(obj_ezmaxcustomer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxcustomer", obj_ezmaxcustomer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // custom_ezmaxcustomeruser_response->fki_contacttitle_id
    if (!custom_ezmaxcustomeruser_response->fki_contacttitle_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContacttitleID", *custom_ezmaxcustomeruser_response->fki_contacttitle_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezmaxcustomeruser_response->fki_language_id
    if (!custom_ezmaxcustomeruser_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *custom_ezmaxcustomeruser_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezmaxcustomeruser_response->obj_email
    if(custom_ezmaxcustomeruser_response->obj_email) {
    cJSON *obj_email_local_JSON = email_response_compound_convertToJSON(custom_ezmaxcustomeruser_response->obj_email);
    if(obj_email_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmail", obj_email_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_ezmaxcustomeruser_response->obj_phone
    if(custom_ezmaxcustomeruser_response->obj_phone) {
    cJSON *obj_phone_local_JSON = phone_response_compound_convertToJSON(custom_ezmaxcustomeruser_response->obj_phone);
    if(obj_phone_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhone", obj_phone_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_firstname
    if (!custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxcustomeruserFirstname", custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_firstname) == NULL) {
    goto fail; //String
    }


    // custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_lastname
    if (!custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxcustomeruserLastname", custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_lastname) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response_parseFromJSON(cJSON *custom_ezmaxcustomeruser_responseJSON){

    custom_ezmaxcustomeruser_response_t *custom_ezmaxcustomeruser_response_local_var = NULL;

    // define the local variable for custom_ezmaxcustomeruser_response->obj_ezmaxcustomer
    custom_ezmaxcustomer_response_t *obj_ezmaxcustomer_local_nonprim = NULL;

    // define the local variable for custom_ezmaxcustomeruser_response->fki_contacttitle_id
    int *fki_contacttitle_id_local_var = NULL;

    // define the local variable for custom_ezmaxcustomeruser_response->fki_language_id
    int *fki_language_id_local_var = NULL;

    // define the local variable for custom_ezmaxcustomeruser_response->obj_email
    email_response_compound_t *obj_email_local_nonprim = NULL;

    // define the local variable for custom_ezmaxcustomeruser_response->obj_phone
    phone_response_compound_t *obj_phone_local_nonprim = NULL;

    char *s_ezmaxcustomeruser_firstname_local_str = NULL;

    char *s_ezmaxcustomeruser_lastname_local_str = NULL;

    // custom_ezmaxcustomeruser_response->obj_ezmaxcustomer
    cJSON *obj_ezmaxcustomer = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomeruser_responseJSON, "objEzmaxcustomer");
    if (cJSON_IsNull(obj_ezmaxcustomer)) {
        obj_ezmaxcustomer = NULL;
    }
    if (!obj_ezmaxcustomer) {
        goto end;
    }

    
    obj_ezmaxcustomer_local_nonprim = custom_ezmaxcustomer_response_parseFromJSON(obj_ezmaxcustomer); //nonprimitive

    // custom_ezmaxcustomeruser_response->fki_contacttitle_id
    cJSON *fki_contacttitle_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomeruser_responseJSON, "fkiContacttitleID");
    if (cJSON_IsNull(fki_contacttitle_id)) {
        fki_contacttitle_id = NULL;
    }
    if (!fki_contacttitle_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contacttitle_id))
    {
    goto end; //Numeric
    }
    fki_contacttitle_id_local_var = malloc(sizeof(int));
    if(!fki_contacttitle_id_local_var)
    {
        goto end;
    }
    *fki_contacttitle_id_local_var = fki_contacttitle_id->valuedouble;

    // custom_ezmaxcustomeruser_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomeruser_responseJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    fki_language_id_local_var = malloc(sizeof(int));
    if(!fki_language_id_local_var)
    {
        goto end;
    }
    *fki_language_id_local_var = fki_language_id->valuedouble;

    // custom_ezmaxcustomeruser_response->obj_email
    cJSON *obj_email = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomeruser_responseJSON, "objEmail");
    if (cJSON_IsNull(obj_email)) {
        obj_email = NULL;
    }
    if (obj_email) { 
    obj_email_local_nonprim = email_response_compound_parseFromJSON(obj_email); //nonprimitive
    }

    // custom_ezmaxcustomeruser_response->obj_phone
    cJSON *obj_phone = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomeruser_responseJSON, "objPhone");
    if (cJSON_IsNull(obj_phone)) {
        obj_phone = NULL;
    }
    if (obj_phone) { 
    obj_phone_local_nonprim = phone_response_compound_parseFromJSON(obj_phone); //nonprimitive
    }

    // custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_firstname
    cJSON *s_ezmaxcustomeruser_firstname = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomeruser_responseJSON, "sEzmaxcustomeruserFirstname");
    if (cJSON_IsNull(s_ezmaxcustomeruser_firstname)) {
        s_ezmaxcustomeruser_firstname = NULL;
    }
    if (!s_ezmaxcustomeruser_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxcustomeruser_firstname))
    {
    goto end; //String
    }

    // custom_ezmaxcustomeruser_response->s_ezmaxcustomeruser_lastname
    cJSON *s_ezmaxcustomeruser_lastname = cJSON_GetObjectItemCaseSensitive(custom_ezmaxcustomeruser_responseJSON, "sEzmaxcustomeruserLastname");
    if (cJSON_IsNull(s_ezmaxcustomeruser_lastname)) {
        s_ezmaxcustomeruser_lastname = NULL;
    }
    if (!s_ezmaxcustomeruser_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxcustomeruser_lastname))
    {
    goto end; //String
    }


    if (s_ezmaxcustomeruser_firstname && !cJSON_IsNull(s_ezmaxcustomeruser_firstname)) s_ezmaxcustomeruser_firstname_local_str = strdup(s_ezmaxcustomeruser_firstname->valuestring);
    if (s_ezmaxcustomeruser_lastname && !cJSON_IsNull(s_ezmaxcustomeruser_lastname)) s_ezmaxcustomeruser_lastname_local_str = strdup(s_ezmaxcustomeruser_lastname->valuestring);

    custom_ezmaxcustomeruser_response_local_var = custom_ezmaxcustomeruser_response_create_internal (
        obj_ezmaxcustomer_local_nonprim,
        fki_contacttitle_id_local_var,
        fki_language_id_local_var,
        obj_email ? obj_email_local_nonprim : NULL,
        obj_phone ? obj_phone_local_nonprim : NULL,
        s_ezmaxcustomeruser_firstname_local_str,
        s_ezmaxcustomeruser_lastname_local_str
        );

    if (!custom_ezmaxcustomeruser_response_local_var) {
        goto end;
    }

    return custom_ezmaxcustomeruser_response_local_var;
end:
    if (obj_ezmaxcustomer_local_nonprim) {
        custom_ezmaxcustomer_response_free(obj_ezmaxcustomer_local_nonprim);
        obj_ezmaxcustomer_local_nonprim = NULL;
    }
    if (fki_contacttitle_id_local_var) {
        free(fki_contacttitle_id_local_var);
        fki_contacttitle_id_local_var = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (obj_email_local_nonprim) {
        email_response_compound_free(obj_email_local_nonprim);
        obj_email_local_nonprim = NULL;
    }
    if (obj_phone_local_nonprim) {
        phone_response_compound_free(obj_phone_local_nonprim);
        obj_phone_local_nonprim = NULL;
    }
    if (s_ezmaxcustomeruser_firstname_local_str) {
        free(s_ezmaxcustomeruser_firstname_local_str);
        s_ezmaxcustomeruser_firstname_local_str = NULL;
    }
    if (s_ezmaxcustomeruser_lastname_local_str) {
        free(s_ezmaxcustomeruser_lastname_local_str);
        s_ezmaxcustomeruser_lastname_local_str = NULL;
    }
    return NULL;

}
