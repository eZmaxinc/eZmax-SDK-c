#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocumentlog_response_compound.h"


char* e_ezsigndocumentlog_typeezsigndocumentlog_response_compound_ToString(ezmax_api_definition_ezsigndocumentlog_response_compound__e e_ezsigndocumentlog_type) {
    char* e_ezsigndocumentlog_typeArray[] =  { "NULL", "Clone", "Login", "Sendcode", "Badcode", "Goodcode", "Authentication", "Createpage", "Download", "Send", "Sign", "Upload", "View", "Completion", "Changelimitdate", "Unsign", "ImportFromInstanet", "SendEmail", "FormCompletion", "SignatureAttachmentAdd", "SignatureAttachmentValidation", "SignatureAttachmentRefused", "SignatureAttachmentDeleted", "DeclinedToSign" };
	return e_ezsigndocumentlog_typeArray[e_ezsigndocumentlog_type];
}

ezmax_api_definition_ezsigndocumentlog_response_compound__e e_ezsigndocumentlog_typeezsigndocumentlog_response_compound_FromString(char* e_ezsigndocumentlog_type){
    int stringToReturn = 0;
    char *e_ezsigndocumentlog_typeArray[] =  { "NULL", "Clone", "Login", "Sendcode", "Badcode", "Goodcode", "Authentication", "Createpage", "Download", "Send", "Sign", "Upload", "View", "Completion", "Changelimitdate", "Unsign", "ImportFromInstanet", "SendEmail", "FormCompletion", "SignatureAttachmentAdd", "SignatureAttachmentValidation", "SignatureAttachmentRefused", "SignatureAttachmentDeleted", "DeclinedToSign" };
    size_t sizeofArray = sizeof(e_ezsigndocumentlog_typeArray) / sizeof(e_ezsigndocumentlog_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocumentlog_type, e_ezsigndocumentlog_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound_create(
    int fki_user_id,
    int fki_ezsignsigner_id,
    char *dt_ezsigndocumentlog_datetime,
    field_e_ezsigndocumentlog_type_t *e_ezsigndocumentlog_type,
    char *s_ezsigndocumentlog_detail,
    char *s_ezsigndocumentlog_lastname,
    char *s_ezsigndocumentlog_firstname,
    char *s_ezsigndocumentlog_ip
    ) {
    ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound_local_var = malloc(sizeof(ezsigndocumentlog_response_compound_t));
    if (!ezsigndocumentlog_response_compound_local_var) {
        return NULL;
    }
    ezsigndocumentlog_response_compound_local_var->fki_user_id = fki_user_id;
    ezsigndocumentlog_response_compound_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    ezsigndocumentlog_response_compound_local_var->dt_ezsigndocumentlog_datetime = dt_ezsigndocumentlog_datetime;
    ezsigndocumentlog_response_compound_local_var->e_ezsigndocumentlog_type = e_ezsigndocumentlog_type;
    ezsigndocumentlog_response_compound_local_var->s_ezsigndocumentlog_detail = s_ezsigndocumentlog_detail;
    ezsigndocumentlog_response_compound_local_var->s_ezsigndocumentlog_lastname = s_ezsigndocumentlog_lastname;
    ezsigndocumentlog_response_compound_local_var->s_ezsigndocumentlog_firstname = s_ezsigndocumentlog_firstname;
    ezsigndocumentlog_response_compound_local_var->s_ezsigndocumentlog_ip = s_ezsigndocumentlog_ip;

    return ezsigndocumentlog_response_compound_local_var;
}


void ezsigndocumentlog_response_compound_free(ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound) {
    if(NULL == ezsigndocumentlog_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocumentlog_response_compound->dt_ezsigndocumentlog_datetime) {
        free(ezsigndocumentlog_response_compound->dt_ezsigndocumentlog_datetime);
        ezsigndocumentlog_response_compound->dt_ezsigndocumentlog_datetime = NULL;
    }
    if (ezsigndocumentlog_response_compound->e_ezsigndocumentlog_type) {
        field_e_ezsigndocumentlog_type_free(ezsigndocumentlog_response_compound->e_ezsigndocumentlog_type);
        ezsigndocumentlog_response_compound->e_ezsigndocumentlog_type = NULL;
    }
    if (ezsigndocumentlog_response_compound->s_ezsigndocumentlog_detail) {
        free(ezsigndocumentlog_response_compound->s_ezsigndocumentlog_detail);
        ezsigndocumentlog_response_compound->s_ezsigndocumentlog_detail = NULL;
    }
    if (ezsigndocumentlog_response_compound->s_ezsigndocumentlog_lastname) {
        free(ezsigndocumentlog_response_compound->s_ezsigndocumentlog_lastname);
        ezsigndocumentlog_response_compound->s_ezsigndocumentlog_lastname = NULL;
    }
    if (ezsigndocumentlog_response_compound->s_ezsigndocumentlog_firstname) {
        free(ezsigndocumentlog_response_compound->s_ezsigndocumentlog_firstname);
        ezsigndocumentlog_response_compound->s_ezsigndocumentlog_firstname = NULL;
    }
    if (ezsigndocumentlog_response_compound->s_ezsigndocumentlog_ip) {
        free(ezsigndocumentlog_response_compound->s_ezsigndocumentlog_ip);
        ezsigndocumentlog_response_compound->s_ezsigndocumentlog_ip = NULL;
    }
    free(ezsigndocumentlog_response_compound);
}

cJSON *ezsigndocumentlog_response_compound_convertToJSON(ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocumentlog_response_compound->fki_user_id
    if (!ezsigndocumentlog_response_compound->fki_user_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsigndocumentlog_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocumentlog_response_compound->fki_ezsignsigner_id
    if (!ezsigndocumentlog_response_compound->fki_ezsignsigner_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", ezsigndocumentlog_response_compound->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocumentlog_response_compound->dt_ezsigndocumentlog_datetime
    if (!ezsigndocumentlog_response_compound->dt_ezsigndocumentlog_datetime) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentlogDatetime", ezsigndocumentlog_response_compound->dt_ezsigndocumentlog_datetime) == NULL) {
    goto fail; //String
    }


    // ezsigndocumentlog_response_compound->e_ezsigndocumentlog_type
    
    cJSON *e_ezsigndocumentlog_type_local_JSON = field_e_ezsigndocumentlog_type_convertToJSON(ezsigndocumentlog_response_compound->e_ezsigndocumentlog_type);
    if(e_ezsigndocumentlog_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigndocumentlogType", e_ezsigndocumentlog_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigndocumentlog_response_compound->s_ezsigndocumentlog_detail
    if (!ezsigndocumentlog_response_compound->s_ezsigndocumentlog_detail) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentlogDetail", ezsigndocumentlog_response_compound->s_ezsigndocumentlog_detail) == NULL) {
    goto fail; //String
    }


    // ezsigndocumentlog_response_compound->s_ezsigndocumentlog_lastname
    if (!ezsigndocumentlog_response_compound->s_ezsigndocumentlog_lastname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentlogLastname", ezsigndocumentlog_response_compound->s_ezsigndocumentlog_lastname) == NULL) {
    goto fail; //String
    }


    // ezsigndocumentlog_response_compound->s_ezsigndocumentlog_firstname
    if (!ezsigndocumentlog_response_compound->s_ezsigndocumentlog_firstname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentlogFirstname", ezsigndocumentlog_response_compound->s_ezsigndocumentlog_firstname) == NULL) {
    goto fail; //String
    }


    // ezsigndocumentlog_response_compound->s_ezsigndocumentlog_ip
    if (!ezsigndocumentlog_response_compound->s_ezsigndocumentlog_ip) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentlogIP", ezsigndocumentlog_response_compound->s_ezsigndocumentlog_ip) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound_parseFromJSON(cJSON *ezsigndocumentlog_response_compoundJSON){

    ezsigndocumentlog_response_compound_t *ezsigndocumentlog_response_compound_local_var = NULL;

    // define the local variable for ezsigndocumentlog_response_compound->e_ezsigndocumentlog_type
    field_e_ezsigndocumentlog_type_t *e_ezsigndocumentlog_type_local_nonprim = NULL;

    // ezsigndocumentlog_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsigndocumentlog_response_compoundJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // ezsigndocumentlog_response_compound->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(ezsigndocumentlog_response_compoundJSON, "fkiEzsignsignerID");
    if (!fki_ezsignsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }

    // ezsigndocumentlog_response_compound->dt_ezsigndocumentlog_datetime
    cJSON *dt_ezsigndocumentlog_datetime = cJSON_GetObjectItemCaseSensitive(ezsigndocumentlog_response_compoundJSON, "dtEzsigndocumentlogDatetime");
    if (!dt_ezsigndocumentlog_datetime) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocumentlog_datetime))
    {
    goto end; //String
    }

    // ezsigndocumentlog_response_compound->e_ezsigndocumentlog_type
    cJSON *e_ezsigndocumentlog_type = cJSON_GetObjectItemCaseSensitive(ezsigndocumentlog_response_compoundJSON, "eEzsigndocumentlogType");
    if (!e_ezsigndocumentlog_type) {
        goto end;
    }

    
    e_ezsigndocumentlog_type_local_nonprim = field_e_ezsigndocumentlog_type_parseFromJSON(e_ezsigndocumentlog_type); //custom

    // ezsigndocumentlog_response_compound->s_ezsigndocumentlog_detail
    cJSON *s_ezsigndocumentlog_detail = cJSON_GetObjectItemCaseSensitive(ezsigndocumentlog_response_compoundJSON, "sEzsigndocumentlogDetail");
    if (!s_ezsigndocumentlog_detail) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocumentlog_detail))
    {
    goto end; //String
    }

    // ezsigndocumentlog_response_compound->s_ezsigndocumentlog_lastname
    cJSON *s_ezsigndocumentlog_lastname = cJSON_GetObjectItemCaseSensitive(ezsigndocumentlog_response_compoundJSON, "sEzsigndocumentlogLastname");
    if (!s_ezsigndocumentlog_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocumentlog_lastname))
    {
    goto end; //String
    }

    // ezsigndocumentlog_response_compound->s_ezsigndocumentlog_firstname
    cJSON *s_ezsigndocumentlog_firstname = cJSON_GetObjectItemCaseSensitive(ezsigndocumentlog_response_compoundJSON, "sEzsigndocumentlogFirstname");
    if (!s_ezsigndocumentlog_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocumentlog_firstname))
    {
    goto end; //String
    }

    // ezsigndocumentlog_response_compound->s_ezsigndocumentlog_ip
    cJSON *s_ezsigndocumentlog_ip = cJSON_GetObjectItemCaseSensitive(ezsigndocumentlog_response_compoundJSON, "sEzsigndocumentlogIP");
    if (!s_ezsigndocumentlog_ip) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocumentlog_ip))
    {
    goto end; //String
    }


    ezsigndocumentlog_response_compound_local_var = ezsigndocumentlog_response_compound_create (
        fki_user_id->valuedouble,
        fki_ezsignsigner_id->valuedouble,
        strdup(dt_ezsigndocumentlog_datetime->valuestring),
        e_ezsigndocumentlog_type_local_nonprim,
        strdup(s_ezsigndocumentlog_detail->valuestring),
        strdup(s_ezsigndocumentlog_lastname->valuestring),
        strdup(s_ezsigndocumentlog_firstname->valuestring),
        strdup(s_ezsigndocumentlog_ip->valuestring)
        );

    return ezsigndocumentlog_response_compound_local_var;
end:
    if (e_ezsigndocumentlog_type_local_nonprim) {
        field_e_ezsigndocumentlog_type_free(e_ezsigndocumentlog_type_local_nonprim);
        e_ezsigndocumentlog_type_local_nonprim = NULL;
    }
    return NULL;

}
