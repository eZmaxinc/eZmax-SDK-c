#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_request_compound.h"


char* e_ezsigndocument_sourceezsigndocument_request_compound_ToString(ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source) {
    char* e_ezsigndocument_sourceArray[] =  { "NULL", "Base64" };
	return e_ezsigndocument_sourceArray[e_ezsigndocument_source];
}

ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_sourceezsigndocument_request_compound_FromString(char* e_ezsigndocument_source){
    int stringToReturn = 0;
    char *e_ezsigndocument_sourceArray[] =  { "NULL", "Base64" };
    size_t sizeofArray = sizeof(e_ezsigndocument_sourceArray) / sizeof(e_ezsigndocument_sourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocument_source, e_ezsigndocument_sourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigndocument_formatezsigndocument_request_compound_ToString(ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format) {
    char* e_ezsigndocument_formatArray[] =  { "NULL", "Pdf" };
	return e_ezsigndocument_formatArray[e_ezsigndocument_format];
}

ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_formatezsigndocument_request_compound_FromString(char* e_ezsigndocument_format){
    int stringToReturn = 0;
    char *e_ezsigndocument_formatArray[] =  { "NULL", "Pdf" };
    size_t sizeofArray = sizeof(e_ezsigndocument_formatArray) / sizeof(e_ezsigndocument_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocument_format, e_ezsigndocument_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigndocument_request_compound_t *ezsigndocument_request_compound_create(
    ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source,
    ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format,
    char s_ezsigndocument_base64,
    int fki_ezsignfolder_id,
    char *dt_ezsigndocument_duedate,
    int fki_language_id,
    char *s_ezsigndocument_name
    ) {
    ezsigndocument_request_compound_t *ezsigndocument_request_compound_local_var = malloc(sizeof(ezsigndocument_request_compound_t));
    if (!ezsigndocument_request_compound_local_var) {
        return NULL;
    }
    ezsigndocument_request_compound_local_var->e_ezsigndocument_source = e_ezsigndocument_source;
    ezsigndocument_request_compound_local_var->e_ezsigndocument_format = e_ezsigndocument_format;
    ezsigndocument_request_compound_local_var->s_ezsigndocument_base64 = s_ezsigndocument_base64;
    ezsigndocument_request_compound_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsigndocument_request_compound_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsigndocument_request_compound_local_var->fki_language_id = fki_language_id;
    ezsigndocument_request_compound_local_var->s_ezsigndocument_name = s_ezsigndocument_name;

    return ezsigndocument_request_compound_local_var;
}


void ezsigndocument_request_compound_free(ezsigndocument_request_compound_t *ezsigndocument_request_compound) {
    if(NULL == ezsigndocument_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_request_compound->dt_ezsigndocument_duedate) {
        free(ezsigndocument_request_compound->dt_ezsigndocument_duedate);
        ezsigndocument_request_compound->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsigndocument_request_compound->s_ezsigndocument_name) {
        free(ezsigndocument_request_compound->s_ezsigndocument_name);
        ezsigndocument_request_compound->s_ezsigndocument_name = NULL;
    }
    free(ezsigndocument_request_compound);
}

cJSON *ezsigndocument_request_compound_convertToJSON(ezsigndocument_request_compound_t *ezsigndocument_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_request_compound->e_ezsigndocument_source
    
    if(cJSON_AddStringToObject(item, "eEzsigndocumentSource", e_ezsigndocument_sourceezsigndocument_request_compound_ToString(ezsigndocument_request_compound->e_ezsigndocument_source)) == NULL)
    {
    goto fail; //Enum
    }


    // ezsigndocument_request_compound->e_ezsigndocument_format
    
    if(cJSON_AddStringToObject(item, "eEzsigndocumentFormat", e_ezsigndocument_formatezsigndocument_request_compound_ToString(ezsigndocument_request_compound->e_ezsigndocument_format)) == NULL)
    {
    goto fail; //Enum
    }


    // ezsigndocument_request_compound->s_ezsigndocument_base64
    if(ezsigndocument_request_compound->s_ezsigndocument_base64) { 
    if(cJSON_AddNumberToObject(item, "sEzsigndocumentBase64", ezsigndocument_request_compound->s_ezsigndocument_base64) == NULL) {
    goto fail; //Byte
    }
     } 


    // ezsigndocument_request_compound->fki_ezsignfolder_id
    if (!ezsigndocument_request_compound->fki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsigndocument_request_compound->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_request_compound->dt_ezsigndocument_duedate
    if (!ezsigndocument_request_compound->dt_ezsigndocument_duedate) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsigndocument_request_compound->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_request_compound->fki_language_id
    if (!ezsigndocument_request_compound->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigndocument_request_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_request_compound->s_ezsigndocument_name
    if (!ezsigndocument_request_compound->s_ezsigndocument_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", ezsigndocument_request_compound->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_request_compound_t *ezsigndocument_request_compound_parseFromJSON(cJSON *ezsigndocument_request_compoundJSON){

    ezsigndocument_request_compound_t *ezsigndocument_request_compound_local_var = NULL;

    // ezsigndocument_request_compound->e_ezsigndocument_source
    cJSON *e_ezsigndocument_source = cJSON_GetObjectItemCaseSensitive(ezsigndocument_request_compoundJSON, "eEzsigndocumentSource");
    if (!e_ezsigndocument_source) {
        goto end;
    }

    ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_sourceVariable;
    
    if(!cJSON_IsString(e_ezsigndocument_source))
    {
    goto end; //Enum
    }
    e_ezsigndocument_sourceVariable = e_ezsigndocument_sourceezsigndocument_request_compound_FromString(e_ezsigndocument_source->valuestring);

    // ezsigndocument_request_compound->e_ezsigndocument_format
    cJSON *e_ezsigndocument_format = cJSON_GetObjectItemCaseSensitive(ezsigndocument_request_compoundJSON, "eEzsigndocumentFormat");
    if (!e_ezsigndocument_format) {
        goto end;
    }

    ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_formatVariable;
    
    if(!cJSON_IsString(e_ezsigndocument_format))
    {
    goto end; //Enum
    }
    e_ezsigndocument_formatVariable = e_ezsigndocument_formatezsigndocument_request_compound_FromString(e_ezsigndocument_format->valuestring);

    // ezsigndocument_request_compound->s_ezsigndocument_base64
    cJSON *s_ezsigndocument_base64 = cJSON_GetObjectItemCaseSensitive(ezsigndocument_request_compoundJSON, "sEzsigndocumentBase64");
    if (s_ezsigndocument_base64) { 
    if(!cJSON_IsNumber(s_ezsigndocument_base64))
    {
    goto end; //Byte
    }
    }

    // ezsigndocument_request_compound->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_request_compoundJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_request_compound->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsigndocument_request_compoundJSON, "dtEzsigndocumentDuedate");
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsigndocument_request_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_request_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_request_compound->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(ezsigndocument_request_compoundJSON, "sEzsigndocumentName");
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }


    ezsigndocument_request_compound_local_var = ezsigndocument_request_compound_create (
        e_ezsigndocument_sourceVariable,
        e_ezsigndocument_formatVariable,
        s_ezsigndocument_base64 ? s_ezsigndocument_base64->valueint : 0,
        fki_ezsignfolder_id->valuedouble,
        strdup(dt_ezsigndocument_duedate->valuestring),
        fki_language_id->valuedouble,
        strdup(s_ezsigndocument_name->valuestring)
        );

    return ezsigndocument_request_compound_local_var;
end:
    return NULL;

}
