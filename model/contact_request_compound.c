#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_request_compound.h"



contact_request_compound_t *contact_request_compound_create(
    int fki_contacttitle_id,
    int fki_language_id,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *dt_contact_birthdate,
    contactinformations_request_compound_t *obj_contactinformations
    ) {
    contact_request_compound_t *contact_request_compound_local_var = malloc(sizeof(contact_request_compound_t));
    if (!contact_request_compound_local_var) {
        return NULL;
    }
    contact_request_compound_local_var->fki_contacttitle_id = fki_contacttitle_id;
    contact_request_compound_local_var->fki_language_id = fki_language_id;
    contact_request_compound_local_var->s_contact_firstname = s_contact_firstname;
    contact_request_compound_local_var->s_contact_lastname = s_contact_lastname;
    contact_request_compound_local_var->s_contact_company = s_contact_company;
    contact_request_compound_local_var->dt_contact_birthdate = dt_contact_birthdate;
    contact_request_compound_local_var->obj_contactinformations = obj_contactinformations;

    return contact_request_compound_local_var;
}


void contact_request_compound_free(contact_request_compound_t *contact_request_compound) {
    if(NULL == contact_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (contact_request_compound->s_contact_firstname) {
        free(contact_request_compound->s_contact_firstname);
        contact_request_compound->s_contact_firstname = NULL;
    }
    if (contact_request_compound->s_contact_lastname) {
        free(contact_request_compound->s_contact_lastname);
        contact_request_compound->s_contact_lastname = NULL;
    }
    if (contact_request_compound->s_contact_company) {
        free(contact_request_compound->s_contact_company);
        contact_request_compound->s_contact_company = NULL;
    }
    if (contact_request_compound->dt_contact_birthdate) {
        free(contact_request_compound->dt_contact_birthdate);
        contact_request_compound->dt_contact_birthdate = NULL;
    }
    if (contact_request_compound->obj_contactinformations) {
        contactinformations_request_compound_free(contact_request_compound->obj_contactinformations);
        contact_request_compound->obj_contactinformations = NULL;
    }
    free(contact_request_compound);
}

cJSON *contact_request_compound_convertToJSON(contact_request_compound_t *contact_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // contact_request_compound->fki_contacttitle_id
    if (!contact_request_compound->fki_contacttitle_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContacttitleID", contact_request_compound->fki_contacttitle_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_request_compound->fki_language_id
    if (!contact_request_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", contact_request_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_request_compound->s_contact_firstname
    if (!contact_request_compound->s_contact_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactFirstname", contact_request_compound->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // contact_request_compound->s_contact_lastname
    if (!contact_request_compound->s_contact_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactLastname", contact_request_compound->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // contact_request_compound->s_contact_company
    if (!contact_request_compound->s_contact_company) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactCompany", contact_request_compound->s_contact_company) == NULL) {
    goto fail; //String
    }


    // contact_request_compound->dt_contact_birthdate
    if(contact_request_compound->dt_contact_birthdate) {
    if(cJSON_AddStringToObject(item, "dtContactBirthdate", contact_request_compound->dt_contact_birthdate) == NULL) {
    goto fail; //String
    }
    }


    // contact_request_compound->obj_contactinformations
    if (!contact_request_compound->obj_contactinformations) {
        goto fail;
    }
    cJSON *obj_contactinformations_local_JSON = contactinformations_request_compound_convertToJSON(contact_request_compound->obj_contactinformations);
    if(obj_contactinformations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactinformations", obj_contactinformations_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

contact_request_compound_t *contact_request_compound_parseFromJSON(cJSON *contact_request_compoundJSON){

    contact_request_compound_t *contact_request_compound_local_var = NULL;

    // define the local variable for contact_request_compound->obj_contactinformations
    contactinformations_request_compound_t *obj_contactinformations_local_nonprim = NULL;

    // contact_request_compound->fki_contacttitle_id
    cJSON *fki_contacttitle_id = cJSON_GetObjectItemCaseSensitive(contact_request_compoundJSON, "fkiContacttitleID");
    if (!fki_contacttitle_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contacttitle_id))
    {
    goto end; //Numeric
    }

    // contact_request_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(contact_request_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // contact_request_compound->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(contact_request_compoundJSON, "sContactFirstname");
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // contact_request_compound->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(contact_request_compoundJSON, "sContactLastname");
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // contact_request_compound->s_contact_company
    cJSON *s_contact_company = cJSON_GetObjectItemCaseSensitive(contact_request_compoundJSON, "sContactCompany");
    if (!s_contact_company) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_company))
    {
    goto end; //String
    }

    // contact_request_compound->dt_contact_birthdate
    cJSON *dt_contact_birthdate = cJSON_GetObjectItemCaseSensitive(contact_request_compoundJSON, "dtContactBirthdate");
    if (dt_contact_birthdate) { 
    if(!cJSON_IsString(dt_contact_birthdate) && !cJSON_IsNull(dt_contact_birthdate))
    {
    goto end; //String
    }
    }

    // contact_request_compound->obj_contactinformations
    cJSON *obj_contactinformations = cJSON_GetObjectItemCaseSensitive(contact_request_compoundJSON, "objContactinformations");
    if (!obj_contactinformations) {
        goto end;
    }

    
    obj_contactinformations_local_nonprim = contactinformations_request_compound_parseFromJSON(obj_contactinformations); //nonprimitive


    contact_request_compound_local_var = contact_request_compound_create (
        fki_contacttitle_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        strdup(s_contact_company->valuestring),
        dt_contact_birthdate && !cJSON_IsNull(dt_contact_birthdate) ? strdup(dt_contact_birthdate->valuestring) : NULL,
        obj_contactinformations_local_nonprim
        );

    return contact_request_compound_local_var;
end:
    if (obj_contactinformations_local_nonprim) {
        contactinformations_request_compound_free(obj_contactinformations_local_nonprim);
        obj_contactinformations_local_nonprim = NULL;
    }
    return NULL;

}
