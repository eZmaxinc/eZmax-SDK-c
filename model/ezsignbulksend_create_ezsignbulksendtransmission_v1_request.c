#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_create_ezsignbulksendtransmission_v1_request.h"


char* ezsignbulksend_create_ezsignbulksendtransmission_v1_request_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition__full_ezsignbulksend_create_ezsignbulksendtransmission_v1_request__e e_ezsignfolder_sendreminderfrequency) {
    char* e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    return e_ezsignfolder_sendreminderfrequencyArray[e_ezsignfolder_sendreminderfrequency];
}

ezmax_api_definition__full_ezsignbulksend_create_ezsignbulksendtransmission_v1_request__e ezsignbulksend_create_ezsignbulksendtransmission_v1_request_e_ezsignfolder_sendreminderfrequency_FromString(char* e_ezsignfolder_sendreminderfrequency){
    int stringToReturn = 0;
    char *e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    size_t sizeofArray = sizeof(e_ezsignfolder_sendreminderfrequencyArray) / sizeof(e_ezsignfolder_sendreminderfrequencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_sendreminderfrequency, e_ezsignfolder_sendreminderfrequencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_request_create(
    int fki_userlogintype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignbulksendtransmission_description,
    char *dt_ezsigndocument_duedate,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency,
    char *t_extra_message,
    char *s_csv_base64
    ) {
    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var = malloc(sizeof(ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t));
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var) {
        return NULL;
    }
    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var->s_ezsignbulksendtransmission_description = s_ezsignbulksendtransmission_description;
    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var->t_extra_message = t_extra_message;
    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var->s_csv_base64 = s_csv_base64;

    return ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var;
}


void ezsignbulksend_create_ezsignbulksendtransmission_v1_request_free(ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_request) {
    if(NULL == ezsignbulksend_create_ezsignbulksendtransmission_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_ezsignbulksendtransmission_description) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_ezsignbulksendtransmission_description);
        ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_ezsignbulksendtransmission_description = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v1_request->dt_ezsigndocument_duedate) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v1_request->dt_ezsigndocument_duedate);
        ezsignbulksend_create_ezsignbulksendtransmission_v1_request->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v1_request->e_ezsignfolder_sendreminderfrequency) {
        field_e_ezsignfolder_sendreminderfrequency_free(ezsignbulksend_create_ezsignbulksendtransmission_v1_request->e_ezsignfolder_sendreminderfrequency);
        ezsignbulksend_create_ezsignbulksendtransmission_v1_request->e_ezsignfolder_sendreminderfrequency = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v1_request->t_extra_message) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v1_request->t_extra_message);
        ezsignbulksend_create_ezsignbulksendtransmission_v1_request->t_extra_message = NULL;
    }
    if (ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_csv_base64) {
        free(ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_csv_base64);
        ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_csv_base64 = NULL;
    }
    free(ezsignbulksend_create_ezsignbulksendtransmission_v1_request);
}

cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v1_request_convertToJSON(ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->fki_userlogintype_id
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v1_request->fki_userlogintype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsignbulksend_create_ezsignbulksendtransmission_v1_request->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->fki_ezsigntsarequirement_id
    if(ezsignbulksend_create_ezsignbulksendtransmission_v1_request->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignbulksend_create_ezsignbulksendtransmission_v1_request->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_ezsignbulksendtransmission_description
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_ezsignbulksendtransmission_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendtransmissionDescription", ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_ezsignbulksendtransmission_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->dt_ezsigndocument_duedate
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v1_request->dt_ezsigndocument_duedate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsignbulksend_create_ezsignbulksendtransmission_v1_request->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->e_ezsignfolder_sendreminderfrequency
    if (ezmax_api_definition__full_ezsignbulksend_create_ezsignbulksendtransmission_v1_request__NULL == ezsignbulksend_create_ezsignbulksendtransmission_v1_request->e_ezsignfolder_sendreminderfrequency) {
        goto fail;
    }
    cJSON *e_ezsignfolder_sendreminderfrequency_local_JSON = field_e_ezsignfolder_sendreminderfrequency_convertToJSON(ezsignbulksend_create_ezsignbulksendtransmission_v1_request->e_ezsignfolder_sendreminderfrequency);
    if(e_ezsignfolder_sendreminderfrequency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderSendreminderfrequency", e_ezsignfolder_sendreminderfrequency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->t_extra_message
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v1_request->t_extra_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tExtraMessage", ezsignbulksend_create_ezsignbulksendtransmission_v1_request->t_extra_message) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_csv_base64
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_csv_base64) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCsvBase64", ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_csv_base64) == NULL) {
    goto fail; //ByteArray
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_request_parseFromJSON(cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v1_requestJSON){

    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t *ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var = NULL;

    // define the local variable for ezsignbulksend_create_ezsignbulksendtransmission_v1_request->e_ezsignfolder_sendreminderfrequency
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency_local_nonprim = NULL;

    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v1_requestJSON, "fkiUserlogintypeID");
    if (!fki_userlogintype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v1_requestJSON, "fkiEzsigntsarequirementID");
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_ezsignbulksendtransmission_description
    cJSON *s_ezsignbulksendtransmission_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v1_requestJSON, "sEzsignbulksendtransmissionDescription");
    if (!s_ezsignbulksendtransmission_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendtransmission_description))
    {
    goto end; //String
    }

    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v1_requestJSON, "dtEzsigndocumentDuedate");
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->e_ezsignfolder_sendreminderfrequency
    cJSON *e_ezsignfolder_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v1_requestJSON, "eEzsignfolderSendreminderfrequency");
    if (!e_ezsignfolder_sendreminderfrequency) {
        goto end;
    }

    
    e_ezsignfolder_sendreminderfrequency_local_nonprim = field_e_ezsignfolder_sendreminderfrequency_parseFromJSON(e_ezsignfolder_sendreminderfrequency); //custom

    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->t_extra_message
    cJSON *t_extra_message = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v1_requestJSON, "tExtraMessage");
    if (!t_extra_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_extra_message))
    {
    goto end; //String
    }

    // ezsignbulksend_create_ezsignbulksendtransmission_v1_request->s_csv_base64
    cJSON *s_csv_base64 = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v1_requestJSON, "sCsvBase64");
    if (!s_csv_base64) {
        goto end;
    }

    
    if(!cJSON_IsString(s_csv_base64))
    {
    goto end; //ByteArray
    }


    ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var = ezsignbulksend_create_ezsignbulksendtransmission_v1_request_create (
        fki_userlogintype_id->valuedouble,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        strdup(s_ezsignbulksendtransmission_description->valuestring),
        strdup(dt_ezsigndocument_duedate->valuestring),
        e_ezsignfolder_sendreminderfrequency_local_nonprim,
        strdup(t_extra_message->valuestring),
        strdup(s_csv_base64->valuestring)
        );

    return ezsignbulksend_create_ezsignbulksendtransmission_v1_request_local_var;
end:
    if (e_ezsignfolder_sendreminderfrequency_local_nonprim) {
        field_e_ezsignfolder_sendreminderfrequency_free(e_ezsignfolder_sendreminderfrequency_local_nonprim);
        e_ezsignfolder_sendreminderfrequency_local_nonprim = NULL;
    }
    return NULL;

}
