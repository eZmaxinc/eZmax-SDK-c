#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_request_compound.h"



static ezsignfolder_request_compound_t *ezsignfolder_request_compound_create_internal(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    int fki_timezone_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    ezmax_api_definition__full_field_e_ezsignfolder_sendreminderfrequency__e e_ezsignfolder_sendreminderfrequency,
    char *s_ezsignfolder_externalid
    ) {
    ezsignfolder_request_compound_t *ezsignfolder_request_compound_local_var = malloc(sizeof(ezsignfolder_request_compound_t));
    if (!ezsignfolder_request_compound_local_var) {
        return NULL;
    }
    ezsignfolder_request_compound_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_request_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_request_compound_local_var->fki_timezone_id = fki_timezone_id;
    ezsignfolder_request_compound_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfolder_request_compound_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_request_compound_local_var->t_ezsignfolder_note = t_ezsignfolder_note;
    ezsignfolder_request_compound_local_var->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    ezsignfolder_request_compound_local_var->s_ezsignfolder_externalid = s_ezsignfolder_externalid;

    ezsignfolder_request_compound_local_var->_library_owned = 1;
    return ezsignfolder_request_compound_local_var;
}

__attribute__((deprecated)) ezsignfolder_request_compound_t *ezsignfolder_request_compound_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    int fki_timezone_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    ezmax_api_definition__full_field_e_ezsignfolder_sendreminderfrequency__e e_ezsignfolder_sendreminderfrequency,
    char *s_ezsignfolder_externalid
    ) {
    return ezsignfolder_request_compound_create_internal (
        pki_ezsignfolder_id,
        fki_ezsignfoldertype_id,
        fki_timezone_id,
        fki_ezsigntsarequirement_id,
        s_ezsignfolder_description,
        t_ezsignfolder_note,
        e_ezsignfolder_sendreminderfrequency,
        s_ezsignfolder_externalid
        );
}

void ezsignfolder_request_compound_free(ezsignfolder_request_compound_t *ezsignfolder_request_compound) {
    if(NULL == ezsignfolder_request_compound){
        return ;
    }
    if(ezsignfolder_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_request_compound->s_ezsignfolder_description) {
        free(ezsignfolder_request_compound->s_ezsignfolder_description);
        ezsignfolder_request_compound->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_request_compound->t_ezsignfolder_note) {
        free(ezsignfolder_request_compound->t_ezsignfolder_note);
        ezsignfolder_request_compound->t_ezsignfolder_note = NULL;
    }
    if (ezsignfolder_request_compound->s_ezsignfolder_externalid) {
        free(ezsignfolder_request_compound->s_ezsignfolder_externalid);
        ezsignfolder_request_compound->s_ezsignfolder_externalid = NULL;
    }
    free(ezsignfolder_request_compound);
}

cJSON *ezsignfolder_request_compound_convertToJSON(ezsignfolder_request_compound_t *ezsignfolder_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_request_compound->pki_ezsignfolder_id
    if(ezsignfolder_request_compound->pki_ezsignfolder_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_request_compound->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_request_compound->fki_ezsignfoldertype_id
    if (!ezsignfolder_request_compound->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_request_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_request_compound->fki_timezone_id
    if(ezsignfolder_request_compound->fki_timezone_id) {
    if(cJSON_AddNumberToObject(item, "fkiTimezoneID", ezsignfolder_request_compound->fki_timezone_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_request_compound->fki_ezsigntsarequirement_id
    if(ezsignfolder_request_compound->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfolder_request_compound->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_request_compound->s_ezsignfolder_description
    if (!ezsignfolder_request_compound->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_request_compound->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_request_compound->t_ezsignfolder_note
    if(ezsignfolder_request_compound->t_ezsignfolder_note) {
    if(cJSON_AddStringToObject(item, "tEzsignfolderNote", ezsignfolder_request_compound->t_ezsignfolder_note) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_request_compound->e_ezsignfolder_sendreminderfrequency
    if (ezmax_api_definition__full_field_e_ezsignfolder_sendreminderfrequency__NULL == ezsignfolder_request_compound->e_ezsignfolder_sendreminderfrequency) {
        goto fail;
    }
    cJSON *e_ezsignfolder_sendreminderfrequency_local_JSON = field_e_ezsignfolder_sendreminderfrequency_convertToJSON(ezsignfolder_request_compound->e_ezsignfolder_sendreminderfrequency);
    if(e_ezsignfolder_sendreminderfrequency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderSendreminderfrequency", e_ezsignfolder_sendreminderfrequency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_request_compound->s_ezsignfolder_externalid
    if(ezsignfolder_request_compound->s_ezsignfolder_externalid) {
    if(cJSON_AddStringToObject(item, "sEzsignfolderExternalid", ezsignfolder_request_compound->s_ezsignfolder_externalid) == NULL) {
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

ezsignfolder_request_compound_t *ezsignfolder_request_compound_parseFromJSON(cJSON *ezsignfolder_request_compoundJSON){

    ezsignfolder_request_compound_t *ezsignfolder_request_compound_local_var = NULL;

    // define the local variable for ezsignfolder_request_compound->e_ezsignfolder_sendreminderfrequency
    ezmax_api_definition__full_field_e_ezsignfolder_sendreminderfrequency__e e_ezsignfolder_sendreminderfrequency_local_nonprim = 0;

    // ezsignfolder_request_compound->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compoundJSON, "pkiEzsignfolderID");
    if (cJSON_IsNull(pki_ezsignfolder_id)) {
        pki_ezsignfolder_id = NULL;
    }
    if (pki_ezsignfolder_id) { 
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_request_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compoundJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_request_compound->fki_timezone_id
    cJSON *fki_timezone_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compoundJSON, "fkiTimezoneID");
    if (cJSON_IsNull(fki_timezone_id)) {
        fki_timezone_id = NULL;
    }
    if (fki_timezone_id) { 
    if(!cJSON_IsNumber(fki_timezone_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_request_compound->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compoundJSON, "fkiEzsigntsarequirementID");
    if (cJSON_IsNull(fki_ezsigntsarequirement_id)) {
        fki_ezsigntsarequirement_id = NULL;
    }
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_request_compound->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compoundJSON, "sEzsignfolderDescription");
    if (cJSON_IsNull(s_ezsignfolder_description)) {
        s_ezsignfolder_description = NULL;
    }
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_request_compound->t_ezsignfolder_note
    cJSON *t_ezsignfolder_note = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compoundJSON, "tEzsignfolderNote");
    if (cJSON_IsNull(t_ezsignfolder_note)) {
        t_ezsignfolder_note = NULL;
    }
    if (t_ezsignfolder_note) { 
    if(!cJSON_IsString(t_ezsignfolder_note) && !cJSON_IsNull(t_ezsignfolder_note))
    {
    goto end; //String
    }
    }

    // ezsignfolder_request_compound->e_ezsignfolder_sendreminderfrequency
    cJSON *e_ezsignfolder_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compoundJSON, "eEzsignfolderSendreminderfrequency");
    if (cJSON_IsNull(e_ezsignfolder_sendreminderfrequency)) {
        e_ezsignfolder_sendreminderfrequency = NULL;
    }
    if (!e_ezsignfolder_sendreminderfrequency) {
        goto end;
    }

    
    e_ezsignfolder_sendreminderfrequency_local_nonprim = field_e_ezsignfolder_sendreminderfrequency_parseFromJSON(e_ezsignfolder_sendreminderfrequency); //custom

    // ezsignfolder_request_compound->s_ezsignfolder_externalid
    cJSON *s_ezsignfolder_externalid = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compoundJSON, "sEzsignfolderExternalid");
    if (cJSON_IsNull(s_ezsignfolder_externalid)) {
        s_ezsignfolder_externalid = NULL;
    }
    if (s_ezsignfolder_externalid) { 
    if(!cJSON_IsString(s_ezsignfolder_externalid) && !cJSON_IsNull(s_ezsignfolder_externalid))
    {
    goto end; //String
    }
    }


    ezsignfolder_request_compound_local_var = ezsignfolder_request_compound_create_internal (
        pki_ezsignfolder_id ? pki_ezsignfolder_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_timezone_id ? fki_timezone_id->valuedouble : 0,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        strdup(s_ezsignfolder_description->valuestring),
        t_ezsignfolder_note && !cJSON_IsNull(t_ezsignfolder_note) ? strdup(t_ezsignfolder_note->valuestring) : NULL,
        e_ezsignfolder_sendreminderfrequency_local_nonprim,
        s_ezsignfolder_externalid && !cJSON_IsNull(s_ezsignfolder_externalid) ? strdup(s_ezsignfolder_externalid->valuestring) : NULL
        );

    return ezsignfolder_request_compound_local_var;
end:
    if (e_ezsignfolder_sendreminderfrequency_local_nonprim) {
        e_ezsignfolder_sendreminderfrequency_local_nonprim = 0;
    }
    return NULL;

}
