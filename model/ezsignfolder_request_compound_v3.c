#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_request_compound_v3.h"


char* ezsignfolder_request_compound_v3_e_ezsignfolder_documentdependency_ToString(ezmax_api_definition__full_ezsignfolder_request_compound_v3__e e_ezsignfolder_documentdependency) {
    char* e_ezsignfolder_documentdependencyArray[] =  { "NULL", "All", "EzsignsignerOnly" };
    return e_ezsignfolder_documentdependencyArray[e_ezsignfolder_documentdependency];
}

ezmax_api_definition__full_ezsignfolder_request_compound_v3__e ezsignfolder_request_compound_v3_e_ezsignfolder_documentdependency_FromString(char* e_ezsignfolder_documentdependency){
    int stringToReturn = 0;
    char *e_ezsignfolder_documentdependencyArray[] =  { "NULL", "All", "EzsignsignerOnly" };
    size_t sizeofArray = sizeof(e_ezsignfolder_documentdependencyArray) / sizeof(e_ezsignfolder_documentdependencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_documentdependency, e_ezsignfolder_documentdependencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    int fki_timezone_id,
    int fki_ezsigntsarequirement_id,
    field_e_ezsignfolder_documentdependency_t *e_ezsignfolder_documentdependency,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    char *t_ezsignfolder_message,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *s_ezsignfolder_externalid
    ) {
    ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3_local_var = malloc(sizeof(ezsignfolder_request_compound_v3_t));
    if (!ezsignfolder_request_compound_v3_local_var) {
        return NULL;
    }
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


void ezsignfolder_request_compound_v3_free(ezsignfolder_request_compound_v3_t *ezsignfolder_request_compound_v3) {
    if(NULL == ezsignfolder_request_compound_v3){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency) {
        field_e_ezsignfolder_documentdependency_free(ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency);
        ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_request_compound_v3->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id
    if (!ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_request_compound_v3->fki_timezone_id
    if(ezsignfolder_request_compound_v3->fki_timezone_id) {
    if(cJSON_AddNumberToObject(item, "fkiTimezoneID", ezsignfolder_request_compound_v3->fki_timezone_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id
    if(ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency
    if(ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency != ezmax_api_definition__full_ezsignfolder_request_compound_v3__NULL) {
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
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderfirstdays", ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays
    if (!ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderotherdays", ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays) == NULL) {
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

    // define the local variable for ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency
    field_e_ezsignfolder_documentdependency_t *e_ezsignfolder_documentdependency_local_nonprim = NULL;

    // ezsignfolder_request_compound_v3->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "pkiEzsignfolderID");
    if (pki_ezsignfolder_id) { 
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_request_compound_v3->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_request_compound_v3->fki_timezone_id
    cJSON *fki_timezone_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "fkiTimezoneID");
    if (fki_timezone_id) { 
    if(!cJSON_IsNumber(fki_timezone_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_request_compound_v3->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "fkiEzsigntsarequirementID");
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_request_compound_v3->e_ezsignfolder_documentdependency
    cJSON *e_ezsignfolder_documentdependency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "eEzsignfolderDocumentdependency");
    if (e_ezsignfolder_documentdependency) { 
    e_ezsignfolder_documentdependency_local_nonprim = field_e_ezsignfolder_documentdependency_parseFromJSON(e_ezsignfolder_documentdependency); //custom
    }

    // ezsignfolder_request_compound_v3->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_request_compound_v3->t_ezsignfolder_note
    cJSON *t_ezsignfolder_note = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "tEzsignfolderNote");
    if (t_ezsignfolder_note) { 
    if(!cJSON_IsString(t_ezsignfolder_note) && !cJSON_IsNull(t_ezsignfolder_note))
    {
    goto end; //String
    }
    }

    // ezsignfolder_request_compound_v3->t_ezsignfolder_message
    cJSON *t_ezsignfolder_message = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "tEzsignfolderMessage");
    if (t_ezsignfolder_message) { 
    if(!cJSON_IsString(t_ezsignfolder_message) && !cJSON_IsNull(t_ezsignfolder_message))
    {
    goto end; //String
    }
    }

    // ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderfirstdays
    cJSON *i_ezsignfolder_sendreminderfirstdays = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "iEzsignfolderSendreminderfirstdays");
    if (!i_ezsignfolder_sendreminderfirstdays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_sendreminderfirstdays))
    {
    goto end; //Numeric
    }

    // ezsignfolder_request_compound_v3->i_ezsignfolder_sendreminderotherdays
    cJSON *i_ezsignfolder_sendreminderotherdays = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "iEzsignfolderSendreminderotherdays");
    if (!i_ezsignfolder_sendreminderotherdays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfolder_sendreminderotherdays))
    {
    goto end; //Numeric
    }

    // ezsignfolder_request_compound_v3->s_ezsignfolder_externalid
    cJSON *s_ezsignfolder_externalid = cJSON_GetObjectItemCaseSensitive(ezsignfolder_request_compound_v3JSON, "sEzsignfolderExternalid");
    if (s_ezsignfolder_externalid) { 
    if(!cJSON_IsString(s_ezsignfolder_externalid) && !cJSON_IsNull(s_ezsignfolder_externalid))
    {
    goto end; //String
    }
    }


    ezsignfolder_request_compound_v3_local_var = ezsignfolder_request_compound_v3_create (
        pki_ezsignfolder_id ? pki_ezsignfolder_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_timezone_id ? fki_timezone_id->valuedouble : 0,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        e_ezsignfolder_documentdependency ? e_ezsignfolder_documentdependency_local_nonprim : NULL,
        strdup(s_ezsignfolder_description->valuestring),
        t_ezsignfolder_note && !cJSON_IsNull(t_ezsignfolder_note) ? strdup(t_ezsignfolder_note->valuestring) : NULL,
        t_ezsignfolder_message && !cJSON_IsNull(t_ezsignfolder_message) ? strdup(t_ezsignfolder_message->valuestring) : NULL,
        i_ezsignfolder_sendreminderfirstdays->valuedouble,
        i_ezsignfolder_sendreminderotherdays->valuedouble,
        s_ezsignfolder_externalid && !cJSON_IsNull(s_ezsignfolder_externalid) ? strdup(s_ezsignfolder_externalid->valuestring) : NULL
        );

    return ezsignfolder_request_compound_v3_local_var;
end:
    if (e_ezsignfolder_documentdependency_local_nonprim) {
        field_e_ezsignfolder_documentdependency_free(e_ezsignfolder_documentdependency_local_nonprim);
        e_ezsignfolder_documentdependency_local_nonprim = NULL;
    }
    return NULL;

}
