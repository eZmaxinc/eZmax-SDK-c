#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_request.h"



static contact_request_t *contact_request_create_internal(
    int fki_contacttitle_id,
    int fki_language_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *dt_contact_birthdate
    ) {
    contact_request_t *contact_request_local_var = malloc(sizeof(contact_request_t));
    if (!contact_request_local_var) {
        return NULL;
    }
    contact_request_local_var->fki_contacttitle_id = fki_contacttitle_id;
    contact_request_local_var->fki_language_id = fki_language_id;
    contact_request_local_var->s_contact_firstname = s_contact_firstname;
    contact_request_local_var->s_contact_lastname = s_contact_lastname;
    contact_request_local_var->s_contact_company = s_contact_company;
    contact_request_local_var->dt_contact_birthdate = dt_contact_birthdate;

    contact_request_local_var->_library_owned = 1;
    return contact_request_local_var;
}

__attribute__((deprecated)) contact_request_t *contact_request_create(
    int fki_contacttitle_id,
    int fki_language_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *dt_contact_birthdate
    ) {
    return contact_request_create_internal (
        fki_contacttitle_id,
        fki_language_id,
        s_contact_firstname,
        s_contact_lastname,
        s_contact_company,
        dt_contact_birthdate
        );
}

void contact_request_free(contact_request_t *contact_request) {
    if(NULL == contact_request){
        return ;
    }
    if(contact_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "contact_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (contact_request->s_contact_firstname) {
        free(contact_request->s_contact_firstname);
        contact_request->s_contact_firstname = NULL;
    }
    if (contact_request->s_contact_lastname) {
        free(contact_request->s_contact_lastname);
        contact_request->s_contact_lastname = NULL;
    }
    if (contact_request->s_contact_company) {
        free(contact_request->s_contact_company);
        contact_request->s_contact_company = NULL;
    }
    if (contact_request->dt_contact_birthdate) {
        free(contact_request->dt_contact_birthdate);
        contact_request->dt_contact_birthdate = NULL;
    }
    free(contact_request);
}

cJSON *contact_request_convertToJSON(contact_request_t *contact_request) {
    cJSON *item = cJSON_CreateObject();

    // contact_request->fki_contacttitle_id
    if (!contact_request->fki_contacttitle_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContacttitleID", contact_request->fki_contacttitle_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_request->fki_language_id
    if (!contact_request->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", contact_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_request->s_contact_firstname
    if (!contact_request->s_contact_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactFirstname", contact_request->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // contact_request->s_contact_lastname
    if (!contact_request->s_contact_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactLastname", contact_request->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // contact_request->s_contact_company
    if (!contact_request->s_contact_company) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactCompany", contact_request->s_contact_company) == NULL) {
    goto fail; //String
    }


    // contact_request->dt_contact_birthdate
    if(contact_request->dt_contact_birthdate) {
    if(cJSON_AddStringToObject(item, "dtContactBirthdate", contact_request->dt_contact_birthdate) == NULL) {
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

contact_request_t *contact_request_parseFromJSON(cJSON *contact_requestJSON){

    contact_request_t *contact_request_local_var = NULL;

    // contact_request->fki_contacttitle_id
    cJSON *fki_contacttitle_id = cJSON_GetObjectItemCaseSensitive(contact_requestJSON, "fkiContacttitleID");
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

    // contact_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(contact_requestJSON, "fkiLanguageID");
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

    // contact_request->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(contact_requestJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // contact_request->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(contact_requestJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // contact_request->s_contact_company
    cJSON *s_contact_company = cJSON_GetObjectItemCaseSensitive(contact_requestJSON, "sContactCompany");
    if (cJSON_IsNull(s_contact_company)) {
        s_contact_company = NULL;
    }
    if (!s_contact_company) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_company))
    {
    goto end; //String
    }

    // contact_request->dt_contact_birthdate
    cJSON *dt_contact_birthdate = cJSON_GetObjectItemCaseSensitive(contact_requestJSON, "dtContactBirthdate");
    if (cJSON_IsNull(dt_contact_birthdate)) {
        dt_contact_birthdate = NULL;
    }
    if (dt_contact_birthdate) { 
    if(!cJSON_IsString(dt_contact_birthdate) && !cJSON_IsNull(dt_contact_birthdate))
    {
    goto end; //String
    }
    }


    contact_request_local_var = contact_request_create_internal (
        fki_contacttitle_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        strdup(s_contact_company->valuestring),
        dt_contact_birthdate && !cJSON_IsNull(dt_contact_birthdate) ? strdup(dt_contact_birthdate->valuestring) : NULL
        );

    return contact_request_local_var;
end:
    return NULL;

}
