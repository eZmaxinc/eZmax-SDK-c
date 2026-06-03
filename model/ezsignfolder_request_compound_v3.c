#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_request_compound_v3.h"



static ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_create_internal(
    int *pki_ezsignfolder_id,
    int *fki_ezsignfoldertype_id,
    int *fki_timezone_id,
    int *fki_ezsigntsarequirement_id,
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    char *t_ezsignfolder_message,
    int *i_ezsignfolder_sendreminderfirstdays,
    int *i_ezsignfolder_sendreminderotherdays,
    char *s_ezsignfolder_externalid
    ) {
    ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_local_var = malloc(sizeof(ezsignfolder_request_compound_v3_t));
    if (!ezsignfolder_request_compound_v3_local_var) {
        return NULL;
    }
    memset(ezsignfolder_request_compound_v3_local_var, 0, sizeof(ezsignfolder_request_compound_v3_t));
    ezsignfolder_request_compound_v3_local_var->_library_owned = 1;
    ezsignfolder_request_compound_v3_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_request_compound_v3_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_request_compound_v3_local_var->fki_timezone_id = fki_timezone_id;
    ezsignfolder_request_compound_v3_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfolder_request_compound_v3_local_var->e_ezsignfolder_documentdependency = e_ezsignfolder_documentdependency;
    ezsignfolder_request_compound_v3_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_request_compound_v3_local_var->t_ezsignfolder_note = t_ezsignfolder_note;
    ezsignfolder_request_compound_v3_local_var->t_ezsignfolder_message = t_ezsignfolder_message;
    ezsignfolder_request_compound_v3_local_var->i_ezsignfolder_sendreminderfirstdays = i_ezsignfolder_sendreminderfirstdays;
    ezsignfolder_request_compound_v3_local_var->i_ezsignfolder_sendreminderotherdays = i_ezsignfolder_sendreminderotherdays;
    ezsignfolder_request_compound_v3_local_var->s_ezsignfolder_externalid = s_ezsignfolder_externalid;
    return ezsignfolder_request_compound_v3_local_var;
}

__attribute__((deprecated)) ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_create(
    int *pki_ezsignfolder_id,
    int *fki_ezsignfoldertype_id,
    int *fki_timezone_id,
    int *fki_ezsigntsarequirement_id,
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    char *t_ezsignfolder_message,
    int *i_ezsignfolder_sendreminderfirstdays,
    int *i_ezsignfolder_sendreminderotherdays,
    char *s_ezsignfolder_externalid
    ) {
    int *pki_ezsignfolder_id_copy = NULL;
    if (pki_ezsignfolder_id) {
        pki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (pki_ezsignfolder_id_copy) *pki_ezsignfolder_id_copy = *pki_ezsignfolder_id;
    }
    int *fki_ezsignfoldertype_id_copy = NULL;
    if (fki_ezsignfoldertype_id) {
        fki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (fki_ezsignfoldertype_id_copy) *fki_ezsignfoldertype_id_copy = *fki_ezsignfoldertype_id;
    }
    int *fki_timezone_id_copy = NULL;
    if (fki_timezone_id) {
        fki_timezone_id_copy = malloc(sizeof(int));
        if (fki_timezone_id_copy) *fki_timezone_id_copy = *fki_timezone_id;
    }
    int *fki_ezsigntsarequirement_id_copy = NULL;
    if (fki_ezsigntsarequirement_id) {
        fki_ezsigntsarequirement_id_copy = malloc(sizeof(int));
        if (fki_ezsigntsarequirement_id_copy) *fki_ezsigntsarequirement_id_copy = *fki_ezsigntsarequirement_id;
    }
    int *i_ezsignfolder_sendreminderfirstdays_copy = NULL;
    if (i_ezsignfolder_sendreminderfirstdays) {
        i_ezsignfolder_sendreminderfirstdays_copy = malloc(sizeof(int));
        if (i_ezsignfolder_sendreminderfirstdays_copy) *i_ezsignfolder_sendreminderfirstdays_copy = *i_ezsignfolder_sendreminderfirstdays;
    }
    int *i_ezsignfolder_sendreminderotherdays_copy = NULL;
    if (i_ezsignfolder_sendreminderotherdays) {
        i_ezsignfolder_sendreminderotherdays_copy = malloc(sizeof(int));
        if (i_ezsignfolder_sendreminderotherdays_copy) *i_ezsignfolder_sendreminderotherdays_copy = *i_ezsignfolder_sendreminderotherdays;
    }
    ezsignfolder_request_compound_v3_t *result = ezsignfolder_request_compound_v3_create_internal (
        pki_ezsignfolder_id_copy,
        fki_ezsignfoldertype_id_copy,
        fki_timezone_id_copy,
        fki_ezsigntsarequirement_id_copy,
        e_ezsignfolder_documentdependency,
        s_ezsignfolder_description,
        t_ezsignfolder_note,
        t_ezsignfolder_message,
        i_ezsignfolder_sendreminderfirstdays_copy,
        i_ezsignfolder_sendreminderotherdays_copy,
        s_ezsignfolder_externalid
        );
    if (!result) {
        free(pki_ezsignfolder_id_copy);
        free(fki_ezsignfoldertype_id_copy);
        free(fki_timezone_id_copy);
        free(fki_ezsigntsarequirement_id_copy);
        free(i_ezsignfolder_sendreminderfirstdays_copy);
        free(i_ezsignfolder_sendreminderotherdays_copy);
    }
    return result;
}

void ezsignfolder_request_compound_v3_free(ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3) {
    if(NULL == ezsignfolder_request_compound_v3){
        return ;
    }
    if(ezsignfolder_request_compound_v3->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_request_compound_v3_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_request_compound_v3->pki_ezsignfolder_id) {
        free(ezsignfolder_request_compound_v3->pki_ezsignfolder_id);
        ezsignfolder_request_compound_v3->pki_ezsignfolder_id = NULL;
    }
    if (ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id) {
        free(ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id);
        ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id = NULL;
    }
    if (ezsignfolder_request_compound_v3->fki_timezone_id) {
        free(ezsignfolder_request_compound_v3->fki_timezone_id);
        ezsignfolder_request_compound_v3->fki_timezone_id = NULL;
    }
    if (ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id) {
        free(ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id);
        ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id = NULL;
    }
    if (ezsignfolder_request_compound_v3->s_ezsignfolder_description) {
        free(ezsignfolder_request_compound_v3->s_ezsignfolder_description);
        ezsignfolder_request_compound_v3->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_request_compound_v3->t_ezsignfolder_note) {
        free(ezsignfolder_request_compound_v3->t_ezsignfolder_note);
        ezsignfolder_request_compound_v3->t_ezsignfolder_note = NULL;
    }
    if (ezsignfolder_request_compound_v3->t_ezsignfolder_message) {
        free(ezsignfolder_request_compound_v3->t_ezsignfolder_message);
        ezsignfolder_request_compound_v3->t_ezsignfolder_message = NULL;
    }
    if (ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays) {
        free(ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays);
        ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays = NULL;
    }
    if (ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays) {
        free(ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays);
        ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays = NULL;
    }
    if (ezsignfolder_request_compound_v3->s_ezsignfolder_externalid) {
        free(ezsignfolder_request_compound_v3->s_ezsignfolder_externalid);
        ezsignfolder_request_compound_v3->s_ezsignfolder_externalid = NULL;
    }
    free(ezsignfolder_request_compound_v3);
}

cJSON *ezsignfolder_request_compound_v3_convertToJSON(ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_request_compound_v3->pki_ezsignfolder_id
    if(ezsignfolder_request_compound_v3->pki_ezsignfolder_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", *ezsignfolder_request_compound_v3->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id
    if (!ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", *ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_request_compound_v3->fki_timezone_id
    if(ezsignfolder_request_compound_v3->fki_timezone_id) {
    if(cJSON_AddNumberToObject(item, "fkiTimezoneID", *ezsignfolder_request_compound_v3->fki_timezone_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id
    if(ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", *ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency
    if(ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency != ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__NULL) {
    cJSON *e_ezsignfolder_documentdependency_local_JSON = field_e_ezsignfolder_documentdependency_convertToJSON(ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency);
    if(e_ezsignfolder_documentdependency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderDocumentdependency", e_ezsignfolder_documentdependency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfolder_request_compound_v3->s_ezsignfolder_description
    if (!ezsignfolder_request_compound_v3->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_request_compound_v3->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_request_compound_v3->t_ezsignfolder_note
    if(ezsignfolder_request_compound_v3->t_ezsignfolder_note) {
    if(cJSON_AddStringToObject(item, "tEzsignfolderNote", ezsignfolder_request_compound_v3->t_ezsignfolder_note) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_request_compound_v3->t_ezsignfolder_message
    if(ezsignfolder_request_compound_v3->t_ezsignfolder_message) {
    if(cJSON_AddStringToObject(item, "tEzsignfolderMessage", ezsignfolder_request_compound_v3->t_ezsignfolder_message) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays
    if (!ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderfirstdays", *ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays
    if (!ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderotherdays", *ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_request_compound_v3->s_ezsignfolder_externalid
    if(ezsignfolder_request_compound_v3->s_ezsignfolder_externalid) {
    if(cJSON_AddStringToObject(item, "sEzsignfolderExternalid", ezsignfolder_request_compound_v3->s_ezsignfolder_externalid) == NULL) {
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

ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_parseFromJSON(cJSON *ezsignfolder_request_compound_v3JSON){

    ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_local_var = NULL;

    // define the local variable for ezsignfolder_request_compound_v3->pki_ezsignfolder_id
    int *pki_ezsignfolder_id_local_var = NULL;

    // define the local variable for ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id
    int *fki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for ezsignfolder_request_compound_v3->fki_timezone_id
    int *fki_timezone_id_local_var = NULL;

    // define the local variable for ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id
    int *fki_ezsigntsarequirement_id_local_var = NULL;

    // define the local variable for ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency_local_nonprim = 0;

    char *s_ezsignfolder_description_local_str = NULL;

    char *t_ezsignfolder_note_local_str = NULL;

    char *t_ezsignfolder_message_local_str = NULL;

    // define the local variable for ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays
    int *i_ezsignfolder_sendreminderfirstdays_local_var = NULL;

    // define the local variable for ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays
    int *i_ezsignfolder_sendreminderotherdays_local_var = NULL;

    char *s_ezsignfolder_externalid_local_str = NULL;

    // ezsignfolder_request_compound_v3->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "pkiEzsignfolderID");
    if (cJSON_IsNull(pki_ezsignfolder_id)) {
        pki_ezsignfolder_id = NULL;
    }
    if (pki_ezsignfolder_id) { 
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    pki_ezsignfolder_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignfolder_id_local_var)
    {
        goto end;
    }
    *pki_ezsignfolder_id_local_var = pki_ezsignfolder_id->valuedouble;
    }

    // ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "fkiEzsignfoldertypeID");
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
    fki_ezsignfoldertype_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldertype_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldertype_id_local_var = fki_ezsignfoldertype_id->valuedouble;

    // ezsignfolder_request_compound_v3->fki_timezone_id
    cJSON *fki_timezone_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "fkiTimezoneID");
    if (cJSON_IsNull(fki_timezone_id)) {
        fki_timezone_id = NULL;
    }
    if (fki_timezone_id) { 
    if(!cJSON_IsNumber(fki_timezone_id))
    {
    goto end; //Numeric
    }
    fki_timezone_id_local_var = malloc(sizeof(int));
    if(!fki_timezone_id_local_var)
    {
        goto end;
    }
    *fki_timezone_id_local_var = fki_timezone_id->valuedouble;
    }

    // ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "fkiEzsigntsarequirementID");
    if (cJSON_IsNull(fki_ezsigntsarequirement_id)) {
        fki_ezsigntsarequirement_id = NULL;
    }
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntsarequirement_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntsarequirement_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntsarequirement_id_local_var = fki_ezsigntsarequirement_id->valuedouble;
    }

    // ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency
    cJSON *e_ezsignfolder_documentdependency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "eEzsignfolderDocumentdependency");
    if (cJSON_IsNull(e_ezsignfolder_documentdependency)) {
        e_ezsignfolder_documentdependency = NULL;
    }
    if (e_ezsignfolder_documentdependency) { 
    e_ezsignfolder_documentdependency_local_nonprim = field_e_ezsignfolder_documentdependency_parseFromJSON(e_ezsignfolder_documentdependency); //custom
    }

    // ezsignfolder_request_compound_v3->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "sEzsignfolderDescription");
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

    // ezsignfolder_request_compound_v3->t_ezsignfolder_note
    cJSON *t_ezsignfolder_note = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "tEzsignfolderNote");
    if (cJSON_IsNull(t_ezsignfolder_note)) {
        t_ezsignfolder_note = NULL;
    }
    if (t_ezsignfolder_note) { 
    if(!cJSON_IsString(t_ezsignfolder_note) && !cJSON_IsNull(t_ezsignfolder_note))
    {
    goto end; //String
    }
    }

    // ezsignfolder_request_compound_v3->t_ezsignfolder_message
    cJSON *t_ezsignfolder_message = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "tEzsignfolderMessage");
    if (cJSON_IsNull(t_ezsignfolder_message)) {
        t_ezsignfolder_message = NULL;
    }
    if (t_ezsignfolder_message) { 
    if(!cJSON_IsString(t_ezsignfolder_message) && !cJSON_IsNull(t_ezsignfolder_message))
    {
    goto end; //String
    }
    }

    // ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays
    cJSON *i_ezsignfolder_sendreminderfirstdays = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "iEzsignfolderSendreminderfirstdays");
    if (cJSON_IsNull(i_ezsignfolder_sendreminderfirstdays)) {
        i_ezsignfolder_sendreminderfirstdays = NULL;
    }
    if (!i_ezsignfolder_sendreminderfirstdays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_sendreminderfirstdays))
    {
    goto end; //Numeric
    }
    i_ezsignfolder_sendreminderfirstdays_local_var = malloc(sizeof(int));
    if(!i_ezsignfolder_sendreminderfirstdays_local_var)
    {
        goto end;
    }
    *i_ezsignfolder_sendreminderfirstdays_local_var = i_ezsignfolder_sendreminderfirstdays->valuedouble;

    // ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays
    cJSON *i_ezsignfolder_sendreminderotherdays = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "iEzsignfolderSendreminderotherdays");
    if (cJSON_IsNull(i_ezsignfolder_sendreminderotherdays)) {
        i_ezsignfolder_sendreminderotherdays = NULL;
    }
    if (!i_ezsignfolder_sendreminderotherdays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_sendreminderotherdays))
    {
    goto end; //Numeric
    }
    i_ezsignfolder_sendreminderotherdays_local_var = malloc(sizeof(int));
    if(!i_ezsignfolder_sendreminderotherdays_local_var)
    {
        goto end;
    }
    *i_ezsignfolder_sendreminderotherdays_local_var = i_ezsignfolder_sendreminderotherdays->valuedouble;

    // ezsignfolder_request_compound_v3->s_ezsignfolder_externalid
    cJSON *s_ezsignfolder_externalid = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "sEzsignfolderExternalid");
    if (cJSON_IsNull(s_ezsignfolder_externalid)) {
        s_ezsignfolder_externalid = NULL;
    }
    if (s_ezsignfolder_externalid) { 
    if(!cJSON_IsString(s_ezsignfolder_externalid) && !cJSON_IsNull(s_ezsignfolder_externalid))
    {
    goto end; //String
    }
    }


    if (s_ezsignfolder_description && !cJSON_IsNull(s_ezsignfolder_description)) s_ezsignfolder_description_local_str = strdup(s_ezsignfolder_description->valuestring);
    if (t_ezsignfolder_note && !cJSON_IsNull(t_ezsignfolder_note)) t_ezsignfolder_note_local_str = strdup(t_ezsignfolder_note->valuestring);
    if (t_ezsignfolder_message && !cJSON_IsNull(t_ezsignfolder_message)) t_ezsignfolder_message_local_str = strdup(t_ezsignfolder_message->valuestring);
    if (s_ezsignfolder_externalid && !cJSON_IsNull(s_ezsignfolder_externalid)) s_ezsignfolder_externalid_local_str = strdup(s_ezsignfolder_externalid->valuestring);

    ezsignfolder_request_compound_v3_local_var = ezsignfolder_request_compound_v3_create_internal (
        pki_ezsignfolder_id_local_var,
        fki_ezsignfoldertype_id_local_var,
        fki_timezone_id_local_var,
        fki_ezsigntsarequirement_id_local_var,
        e_ezsignfolder_documentdependency ? e_ezsignfolder_documentdependency_local_nonprim : 0,
        s_ezsignfolder_description_local_str,
        t_ezsignfolder_note_local_str,
        t_ezsignfolder_message_local_str,
        i_ezsignfolder_sendreminderfirstdays_local_var,
        i_ezsignfolder_sendreminderotherdays_local_var,
        s_ezsignfolder_externalid_local_str
        );

    if (!ezsignfolder_request_compound_v3_local_var) {
        goto end;
    }

    return ezsignfolder_request_compound_v3_local_var;
end:
    if (pki_ezsignfolder_id_local_var) {
        free(pki_ezsignfolder_id_local_var);
        pki_ezsignfolder_id_local_var = NULL;
    }
    if (fki_ezsignfoldertype_id_local_var) {
        free(fki_ezsignfoldertype_id_local_var);
        fki_ezsignfoldertype_id_local_var = NULL;
    }
    if (fki_timezone_id_local_var) {
        free(fki_timezone_id_local_var);
        fki_timezone_id_local_var = NULL;
    }
    if (fki_ezsigntsarequirement_id_local_var) {
        free(fki_ezsigntsarequirement_id_local_var);
        fki_ezsigntsarequirement_id_local_var = NULL;
    }
    if (e_ezsignfolder_documentdependency_local_nonprim) {
        e_ezsignfolder_documentdependency_local_nonprim = 0;
    }
    if (s_ezsignfolder_description_local_str) {
        free(s_ezsignfolder_description_local_str);
        s_ezsignfolder_description_local_str = NULL;
    }
    if (t_ezsignfolder_note_local_str) {
        free(t_ezsignfolder_note_local_str);
        t_ezsignfolder_note_local_str = NULL;
    }
    if (t_ezsignfolder_message_local_str) {
        free(t_ezsignfolder_message_local_str);
        t_ezsignfolder_message_local_str = NULL;
    }
    if (i_ezsignfolder_sendreminderfirstdays_local_var) {
        free(i_ezsignfolder_sendreminderfirstdays_local_var);
        i_ezsignfolder_sendreminderfirstdays_local_var = NULL;
    }
    if (i_ezsignfolder_sendreminderotherdays_local_var) {
        free(i_ezsignfolder_sendreminderotherdays_local_var);
        i_ezsignfolder_sendreminderotherdays_local_var = NULL;
    }
    if (s_ezsignfolder_externalid_local_str) {
        free(s_ezsignfolder_externalid_local_str);
        s_ezsignfolder_externalid_local_str = NULL;
    }
    return NULL;

}
