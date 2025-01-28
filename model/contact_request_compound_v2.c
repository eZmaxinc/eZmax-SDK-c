#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contact_request_compound_v2.h"



static contact_request_compound_v2_t *contact_request_compound_v2_create_internal(
    int fki_contacttitle_id,
    int fki_language_id,
    ezmax_api_definition__full_field_e_contact_type__e e_contact_type,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *dt_contact_birthdate,
    char *s_contact_occupation,
    char *t_contact_note,
    int b_contact_isactive,
    contactinformations_request_compound_v2_t *obj_contactinformations
    ) {
    contact_request_compound_v2_t *contact_request_compound_v2_local_var = malloc(sizeof(contact_request_compound_v2_t));
    if (!contact_request_compound_v2_local_var) {
        return NULL;
    }
    contact_request_compound_v2_local_var->fki_contacttitle_id = fki_contacttitle_id;
    contact_request_compound_v2_local_var->fki_language_id = fki_language_id;
    contact_request_compound_v2_local_var->e_contact_type = e_contact_type;
    contact_request_compound_v2_local_var->s_contact_firstname = s_contact_firstname;
    contact_request_compound_v2_local_var->s_contact_lastname = s_contact_lastname;
    contact_request_compound_v2_local_var->s_contact_company = s_contact_company;
    contact_request_compound_v2_local_var->dt_contact_birthdate = dt_contact_birthdate;
    contact_request_compound_v2_local_var->s_contact_occupation = s_contact_occupation;
    contact_request_compound_v2_local_var->t_contact_note = t_contact_note;
    contact_request_compound_v2_local_var->b_contact_isactive = b_contact_isactive;
    contact_request_compound_v2_local_var->obj_contactinformations = obj_contactinformations;

    contact_request_compound_v2_local_var->_library_owned = 1;
    return contact_request_compound_v2_local_var;
}

__attribute__((deprecated)) contact_request_compound_v2_t *contact_request_compound_v2_create(
    int fki_contacttitle_id,
    int fki_language_id,
    ezmax_api_definition__full_field_e_contact_type__e e_contact_type,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company,
    char *dt_contact_birthdate,
    char *s_contact_occupation,
    char *t_contact_note,
    int b_contact_isactive,
    contactinformations_request_compound_v2_t *obj_contactinformations
    ) {
    return contact_request_compound_v2_create_internal (
        fki_contacttitle_id,
        fki_language_id,
        e_contact_type,
        s_contact_firstname,
        s_contact_lastname,
        s_contact_company,
        dt_contact_birthdate,
        s_contact_occupation,
        t_contact_note,
        b_contact_isactive,
        obj_contactinformations
        );
}

void contact_request_compound_v2_free(contact_request_compound_v2_t *contact_request_compound_v2) {
    if(NULL == contact_request_compound_v2){
        return ;
    }
    if(contact_request_compound_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "contact_request_compound_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (contact_request_compound_v2->s_contact_firstname) {
        free(contact_request_compound_v2->s_contact_firstname);
        contact_request_compound_v2->s_contact_firstname = NULL;
    }
    if (contact_request_compound_v2->s_contact_lastname) {
        free(contact_request_compound_v2->s_contact_lastname);
        contact_request_compound_v2->s_contact_lastname = NULL;
    }
    if (contact_request_compound_v2->s_contact_company) {
        free(contact_request_compound_v2->s_contact_company);
        contact_request_compound_v2->s_contact_company = NULL;
    }
    if (contact_request_compound_v2->dt_contact_birthdate) {
        free(contact_request_compound_v2->dt_contact_birthdate);
        contact_request_compound_v2->dt_contact_birthdate = NULL;
    }
    if (contact_request_compound_v2->s_contact_occupation) {
        free(contact_request_compound_v2->s_contact_occupation);
        contact_request_compound_v2->s_contact_occupation = NULL;
    }
    if (contact_request_compound_v2->t_contact_note) {
        free(contact_request_compound_v2->t_contact_note);
        contact_request_compound_v2->t_contact_note = NULL;
    }
    if (contact_request_compound_v2->obj_contactinformations) {
        contactinformations_request_compound_v2_free(contact_request_compound_v2->obj_contactinformations);
        contact_request_compound_v2->obj_contactinformations = NULL;
    }
    free(contact_request_compound_v2);
}

cJSON *contact_request_compound_v2_convertToJSON(contact_request_compound_v2_t *contact_request_compound_v2) {
    cJSON *item = cJSON_CreateObject();

    // contact_request_compound_v2->fki_contacttitle_id
    if (!contact_request_compound_v2->fki_contacttitle_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContacttitleID", contact_request_compound_v2->fki_contacttitle_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_request_compound_v2->fki_language_id
    if (!contact_request_compound_v2->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", contact_request_compound_v2->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // contact_request_compound_v2->e_contact_type
    if (ezmax_api_definition__full_field_e_contact_type__NULL == contact_request_compound_v2->e_contact_type) {
        goto fail;
    }
    cJSON *e_contact_type_local_JSON = field_e_contact_type_convertToJSON(contact_request_compound_v2->e_contact_type);
    if(e_contact_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eContactType", e_contact_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // contact_request_compound_v2->s_contact_firstname
    if (!contact_request_compound_v2->s_contact_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactFirstname", contact_request_compound_v2->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // contact_request_compound_v2->s_contact_lastname
    if (!contact_request_compound_v2->s_contact_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactLastname", contact_request_compound_v2->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // contact_request_compound_v2->s_contact_company
    if(contact_request_compound_v2->s_contact_company) {
    if(cJSON_AddStringToObject(item, "sContactCompany", contact_request_compound_v2->s_contact_company) == NULL) {
    goto fail; //String
    }
    }


    // contact_request_compound_v2->dt_contact_birthdate
    if(contact_request_compound_v2->dt_contact_birthdate) {
    if(cJSON_AddStringToObject(item, "dtContactBirthdate", contact_request_compound_v2->dt_contact_birthdate) == NULL) {
    goto fail; //String
    }
    }


    // contact_request_compound_v2->s_contact_occupation
    if(contact_request_compound_v2->s_contact_occupation) {
    if(cJSON_AddStringToObject(item, "sContactOccupation", contact_request_compound_v2->s_contact_occupation) == NULL) {
    goto fail; //String
    }
    }


    // contact_request_compound_v2->t_contact_note
    if(contact_request_compound_v2->t_contact_note) {
    if(cJSON_AddStringToObject(item, "tContactNote", contact_request_compound_v2->t_contact_note) == NULL) {
    goto fail; //String
    }
    }


    // contact_request_compound_v2->b_contact_isactive
    if(contact_request_compound_v2->b_contact_isactive) {
    if(cJSON_AddBoolToObject(item, "bContactIsactive", contact_request_compound_v2->b_contact_isactive) == NULL) {
    goto fail; //Bool
    }
    }


    // contact_request_compound_v2->obj_contactinformations
    if (!contact_request_compound_v2->obj_contactinformations) {
        goto fail;
    }
    cJSON *obj_contactinformations_local_JSON = contactinformations_request_compound_v2_convertToJSON(contact_request_compound_v2->obj_contactinformations);
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

contact_request_compound_v2_t *contact_request_compound_v2_parseFromJSON(cJSON *contact_request_compound_v2JSON){

    contact_request_compound_v2_t *contact_request_compound_v2_local_var = NULL;

    // define the local variable for contact_request_compound_v2->e_contact_type
    ezmax_api_definition__full_field_e_contact_type__e e_contact_type_local_nonprim = 0;

    // define the local variable for contact_request_compound_v2->obj_contactinformations
    contactinformations_request_compound_v2_t *obj_contactinformations_local_nonprim = NULL;

    // contact_request_compound_v2->fki_contacttitle_id
    cJSON *fki_contacttitle_id = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "fkiContacttitleID");
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

    // contact_request_compound_v2->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "fkiLanguageID");
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

    // contact_request_compound_v2->e_contact_type
    cJSON *e_contact_type = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "eContactType");
    if (cJSON_IsNull(e_contact_type)) {
        e_contact_type = NULL;
    }
    if (!e_contact_type) {
        goto end;
    }

    
    e_contact_type_local_nonprim = field_e_contact_type_parseFromJSON(e_contact_type); //custom

    // contact_request_compound_v2->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "sContactFirstname");
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

    // contact_request_compound_v2->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "sContactLastname");
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

    // contact_request_compound_v2->s_contact_company
    cJSON *s_contact_company = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "sContactCompany");
    if (cJSON_IsNull(s_contact_company)) {
        s_contact_company = NULL;
    }
    if (s_contact_company) { 
    if(!cJSON_IsString(s_contact_company) && !cJSON_IsNull(s_contact_company))
    {
    goto end; //String
    }
    }

    // contact_request_compound_v2->dt_contact_birthdate
    cJSON *dt_contact_birthdate = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "dtContactBirthdate");
    if (cJSON_IsNull(dt_contact_birthdate)) {
        dt_contact_birthdate = NULL;
    }
    if (dt_contact_birthdate) { 
    if(!cJSON_IsString(dt_contact_birthdate) && !cJSON_IsNull(dt_contact_birthdate))
    {
    goto end; //String
    }
    }

    // contact_request_compound_v2->s_contact_occupation
    cJSON *s_contact_occupation = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "sContactOccupation");
    if (cJSON_IsNull(s_contact_occupation)) {
        s_contact_occupation = NULL;
    }
    if (s_contact_occupation) { 
    if(!cJSON_IsString(s_contact_occupation) && !cJSON_IsNull(s_contact_occupation))
    {
    goto end; //String
    }
    }

    // contact_request_compound_v2->t_contact_note
    cJSON *t_contact_note = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "tContactNote");
    if (cJSON_IsNull(t_contact_note)) {
        t_contact_note = NULL;
    }
    if (t_contact_note) { 
    if(!cJSON_IsString(t_contact_note) && !cJSON_IsNull(t_contact_note))
    {
    goto end; //String
    }
    }

    // contact_request_compound_v2->b_contact_isactive
    cJSON *b_contact_isactive = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "bContactIsactive");
    if (cJSON_IsNull(b_contact_isactive)) {
        b_contact_isactive = NULL;
    }
    if (b_contact_isactive) { 
    if(!cJSON_IsBool(b_contact_isactive))
    {
    goto end; //Bool
    }
    }

    // contact_request_compound_v2->obj_contactinformations
    cJSON *obj_contactinformations = cJSON_GetObjectItemCaseSensitive(contact_request_compound_v2JSON, "objContactinformations");
    if (cJSON_IsNull(obj_contactinformations)) {
        obj_contactinformations = NULL;
    }
    if (!obj_contactinformations) {
        goto end;
    }

    
    obj_contactinformations_local_nonprim = contactinformations_request_compound_v2_parseFromJSON(obj_contactinformations); //nonprimitive


    contact_request_compound_v2_local_var = contact_request_compound_v2_create_internal (
        fki_contacttitle_id->valuedouble,
        fki_language_id->valuedouble,
        e_contact_type_local_nonprim,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        s_contact_company && !cJSON_IsNull(s_contact_company) ? strdup(s_contact_company->valuestring) : NULL,
        dt_contact_birthdate && !cJSON_IsNull(dt_contact_birthdate) ? strdup(dt_contact_birthdate->valuestring) : NULL,
        s_contact_occupation && !cJSON_IsNull(s_contact_occupation) ? strdup(s_contact_occupation->valuestring) : NULL,
        t_contact_note && !cJSON_IsNull(t_contact_note) ? strdup(t_contact_note->valuestring) : NULL,
        b_contact_isactive ? b_contact_isactive->valueint : 0,
        obj_contactinformations_local_nonprim
        );

    return contact_request_compound_v2_local_var;
end:
    if (e_contact_type_local_nonprim) {
        e_contact_type_local_nonprim = 0;
    }
    if (obj_contactinformations_local_nonprim) {
        contactinformations_request_compound_v2_free(obj_contactinformations_local_nonprim);
        obj_contactinformations_local_nonprim = NULL;
    }
    return NULL;

}
