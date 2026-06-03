#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_create_ezsignbulksendtransmission_v2_request.h"



static ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create_internal(
    int *fki_userlogintype_id,
    int *fki_secretquestion_id,
    int *fki_ezsigntsarequirement_id,
    char *s_ezsignbulksendtransmission_description,
    char *dt_ezsigndocument_duedate,
    int *i_ezsignfolder_sendreminderfirstdays,
    int *i_ezsignfolder_sendreminderotherdays,
    char *t_extra_message,
    char *s_csv_base64
    ) {
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var = malloc(sizeof(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t));
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var) {
        return NULL;
    }
    memset(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var, 0, sizeof(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t));
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->_library_owned = 1;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->fki_secretquestion_id = fki_secretquestion_id;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->s_ezsignbulksendtransmission_description = s_ezsignbulksendtransmission_description;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->i_ezsignfolder_sendreminderfirstdays = i_ezsignfolder_sendreminderfirstdays;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->i_ezsignfolder_sendreminderotherdays = i_ezsignfolder_sendreminderotherdays;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->t_extra_message = t_extra_message;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->s_csv_base64 = s_csv_base64;
    return ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var;
}

__attribute__((deprecated)) ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create(
    int *fki_userlogintype_id,
    int *fki_secretquestion_id,
    int *fki_ezsigntsarequirement_id,
    char *s_ezsignbulksendtransmission_description,
    char *dt_ezsigndocument_duedate,
    int *i_ezsignfolder_sendreminderfirstdays,
    int *i_ezsignfolder_sendreminderotherdays,
    char *t_extra_message,
    char *s_csv_base64
    ) {
    int *fki_userlogintype_id_copy = NULL;
    if (fki_userlogintype_id) {
        fki_userlogintype_id_copy = malloc(sizeof(int));
        if (fki_userlogintype_id_copy) *fki_userlogintype_id_copy = *fki_userlogintype_id;
    }
    int *fki_secretquestion_id_copy = NULL;
    if (fki_secretquestion_id) {
        fki_secretquestion_id_copy = malloc(sizeof(int));
        if (fki_secretquestion_id_copy) *fki_secretquestion_id_copy = *fki_secretquestion_id;
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
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *result = ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create_internal (
        fki_userlogintype_id_copy,
        fki_secretquestion_id_copy,
        fki_ezsigntsarequirement_id_copy,
        s_ezsignbulksendtransmission_description,
        dt_ezsigndocument_duedate,
        i_ezsignfolder_sendreminderfirstdays_copy,
        i_ezsignfolder_sendreminderotherdays_copy,
        t_extra_message,
        s_csv_base64
        );
    if (!result) {
        free(fki_userlogintype_id_copy);
        free(fki_secretquestion_id_copy);
        free(fki_ezsigntsarequirement_id_copy);
        free(i_ezsignfolder_sendreminderfirstdays_copy);
        free(i_ezsignfolder_sendreminderotherdays_copy);
    }
    return result;
}

void ezsignbulksend_create_ezsignbulksendtransmission_v2_request_free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request) {
    if(NULL == ezsignbulksend_create_ezsignbulksendtransmission_v2_request){
        return ;
    }
    if(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_create_ezsignbulksendtransmission_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_userlogintype_id) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_userlogintype_id);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_userlogintype_id = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_secretquestion_id) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_secretquestion_id);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_secretquestion_id = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderfirstdays) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderfirstdays);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderfirstdays = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->t_extra_message) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->t_extra_message);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->t_extra_message = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_csv_base64) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_csv_base64);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_csv_base64 = NULL;
    }
    free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request);
}

cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_convertToJSON(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_userlogintype_id
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", *ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_secretquestion_id
    if(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_secretquestion_id) {
    if(cJSON_AddNumberToObject(item, "fkiSecretquestionID", *ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_secretquestion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id
    if(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", *ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendtransmissionDescription", ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderfirstdays
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderfirstdays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderfirstdays", *ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderfirstdays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderotherdays", *ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->t_extra_message
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request->t_extra_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tExtraMessage", ezsignbulksend_create_ezsignbulksendtransmission_v2_request->t_extra_message) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_csv_base64
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_csv_base64) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCsvBase64", ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_csv_base64) == NULL) {
    goto fail; //ByteArray
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_parseFromJSON(cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON){

    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var = NULL;

    // define the local variable for ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_userlogintype_id
    int *fki_userlogintype_id_local_var = NULL;

    // define the local variable for ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_secretquestion_id
    int *fki_secretquestion_id_local_var = NULL;

    // define the local variable for ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id
    int *fki_ezsigntsarequirement_id_local_var = NULL;

    char *s_ezsignbulksendtransmission_description_local_str = NULL;

    char *dt_ezsigndocument_duedate_local_str = NULL;

    // define the local variable for ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderfirstdays
    int *i_ezsignfolder_sendreminderfirstdays_local_var = NULL;

    // define the local variable for ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays
    int *i_ezsignfolder_sendreminderotherdays_local_var = NULL;

    char *t_extra_message_local_str = NULL;

    char *s_csv_base64_local_str = NULL;

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON, "fkiUserlogintypeID");
    if (cJSON_IsNull(fki_userlogintype_id)) {
        fki_userlogintype_id = NULL;
    }
    if (!fki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }
    fki_userlogintype_id_local_var = malloc(sizeof(int));
    if(!fki_userlogintype_id_local_var)
    {
        goto end;
    }
    *fki_userlogintype_id_local_var = fki_userlogintype_id->valuedouble;

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_secretquestion_id
    cJSON *fki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON, "fkiSecretquestionID");
    if (cJSON_IsNull(fki_secretquestion_id)) {
        fki_secretquestion_id = NULL;
    }
    if (fki_secretquestion_id) { 
    if(!cJSON_IsNumber(fki_secretquestion_id))
    {
    goto end; //Numeric
    }
    fki_secretquestion_id_local_var = malloc(sizeof(int));
    if(!fki_secretquestion_id_local_var)
    {
        goto end;
    }
    *fki_secretquestion_id_local_var = fki_secretquestion_id->valuedouble;
    }

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON, "fkiEzsigntsarequirementID");
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

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description
    cJSON *s_ezsignbulksendtransmission_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON, "sEzsignbulksendtransmissionDescription");
    if (cJSON_IsNull(s_ezsignbulksendtransmission_description)) {
        s_ezsignbulksendtransmission_description = NULL;
    }
    if (!s_ezsignbulksendtransmission_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendtransmission_description))
    {
    goto end; //String
    }

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON, "dtEzsigndocumentDuedate");
    if (cJSON_IsNull(dt_ezsigndocument_duedate)) {
        dt_ezsigndocument_duedate = NULL;
    }
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderfirstdays
    cJSON *i_ezsignfolder_sendreminderfirstdays = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON, "iEzsignfolderSendreminderfirstdays");
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

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays
    cJSON *i_ezsignfolder_sendreminderotherdays = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON, "iEzsignfolderSendreminderotherdays");
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

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->t_extra_message
    cJSON *t_extra_message = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON, "tExtraMessage");
    if (cJSON_IsNull(t_extra_message)) {
        t_extra_message = NULL;
    }
    if (!t_extra_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_extra_message))
    {
    goto end; //String
    }

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_csv_base64
    cJSON *s_csv_base64 = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_requestJSON, "sCsvBase64");
    if (cJSON_IsNull(s_csv_base64)) {
        s_csv_base64 = NULL;
    }
    if (!s_csv_base64) {
        goto end;
    }

    
    if(!cJSON_IsString(s_csv_base64))
    {
    goto end; //ByteArray
    }


    if (s_ezsignbulksendtransmission_description && !cJSON_IsNull(s_ezsignbulksendtransmission_description)) s_ezsignbulksendtransmission_description_local_str = strdup(s_ezsignbulksendtransmission_description->valuestring);
    if (dt_ezsigndocument_duedate && !cJSON_IsNull(dt_ezsigndocument_duedate)) dt_ezsigndocument_duedate_local_str = strdup(dt_ezsigndocument_duedate->valuestring);
    if (t_extra_message && !cJSON_IsNull(t_extra_message)) t_extra_message_local_str = strdup(t_extra_message->valuestring);
    if (s_csv_base64) s_csv_base64_local_str = strdup(s_csv_base64->valuestring);

    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var = ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create_internal (
        fki_userlogintype_id_local_var,
        fki_secretquestion_id_local_var,
        fki_ezsigntsarequirement_id_local_var,
        s_ezsignbulksendtransmission_description_local_str,
        dt_ezsigndocument_duedate_local_str,
        i_ezsignfolder_sendreminderfirstdays_local_var,
        i_ezsignfolder_sendreminderotherdays_local_var,
        t_extra_message_local_str,
        s_csv_base64_local_str
        );

    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var) {
        goto end;
    }

    return ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var;
end:
    if (fki_userlogintype_id_local_var) {
        free(fki_userlogintype_id_local_var);
        fki_userlogintype_id_local_var = NULL;
    }
    if (fki_secretquestion_id_local_var) {
        free(fki_secretquestion_id_local_var);
        fki_secretquestion_id_local_var = NULL;
    }
    if (fki_ezsigntsarequirement_id_local_var) {
        free(fki_ezsigntsarequirement_id_local_var);
        fki_ezsigntsarequirement_id_local_var = NULL;
    }
    if (s_ezsignbulksendtransmission_description_local_str) {
        free(s_ezsignbulksendtransmission_description_local_str);
        s_ezsignbulksendtransmission_description_local_str = NULL;
    }
    if (dt_ezsigndocument_duedate_local_str) {
        free(dt_ezsigndocument_duedate_local_str);
        dt_ezsigndocument_duedate_local_str = NULL;
    }
    if (i_ezsignfolder_sendreminderfirstdays_local_var) {
        free(i_ezsignfolder_sendreminderfirstdays_local_var);
        i_ezsignfolder_sendreminderfirstdays_local_var = NULL;
    }
    if (i_ezsignfolder_sendreminderotherdays_local_var) {
        free(i_ezsignfolder_sendreminderotherdays_local_var);
        i_ezsignfolder_sendreminderotherdays_local_var = NULL;
    }
    if (t_extra_message_local_str) {
        free(t_extra_message_local_str);
        t_extra_message_local_str = NULL;
    }
    if (s_csv_base64_local_str) {
        free(s_csv_base64_local_str);
        s_csv_base64_local_str = NULL;
    }
    return NULL;

}
