#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_create_ezsignbulksendtransmission_v2_request.h"



static ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create_internal(
    int fki_userlogintype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignbulksendtransmission_description,
    char *dt_ezsigndocument_duedate,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *t_extra_message,
    char *s_csv_base64
    ) {
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var = malloc(sizeof(ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t));
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var) {
        return NULL;
    }
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->s_ezsignbulksendtransmission_description = s_ezsignbulksendtransmission_description;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->i_ezsignfolder_sendreminderfirstdays = i_ezsignfolder_sendreminderfirstdays;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->i_ezsignfolder_sendreminderotherdays = i_ezsignfolder_sendreminderotherdays;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->t_extra_message = t_extra_message;
    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->s_csv_base64 = s_csv_base64;

    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var->_library_owned = 1;
    return ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var;
}

__attribute__((deprecated)) ezsignbulksend_create_ezsignbulksendtransmission_v2_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create(
    int fki_userlogintype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignbulksendtransmission_description,
    char *dt_ezsigndocument_duedate,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *t_extra_message,
    char *s_csv_base64
    ) {
    return ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create_internal (
        fki_userlogintype_id,
        fki_ezsigntsarequirement_id,
        s_ezsignbulksendtransmission_description,
        dt_ezsigndocument_duedate,
        i_ezsignfolder_sendreminderfirstdays,
        i_ezsignfolder_sendreminderotherdays,
        t_extra_message,
        s_csv_base64
        );
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
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->s_ezsignbulksendtransmission_description = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_request->dt_ezsigndocument_duedate = NULL;
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
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id
    if(ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignbulksend_create_ezsignbulksendtransmission_v2_request->fki_ezsigntsarequirement_id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderfirstdays", ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderfirstdays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderotherdays", ezsignbulksend_create_ezsignbulksendtransmission_v2_request->i_ezsignfolder_sendreminderotherdays) == NULL) {
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


    ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var = ezsignbulksend_create_ezsignbulksendtransmission_v2_request_create_internal (
        fki_userlogintype_id->valuedouble,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        strdup(s_ezsignbulksendtransmission_description->valuestring),
        strdup(dt_ezsigndocument_duedate->valuestring),
        i_ezsignfolder_sendreminderfirstdays->valuedouble,
        i_ezsignfolder_sendreminderotherdays->valuedouble,
        strdup(t_extra_message->valuestring),
        strdup(s_csv_base64->valuestring)
        );

    return ezsignbulksend_create_ezsignbulksendtransmission_v2_request_local_var;
end:
    return NULL;

}
