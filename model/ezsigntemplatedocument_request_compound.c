#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_request_compound.h"


char* e_ezsigntemplatedocument_sourceezsigntemplatedocument_request_compound_ToString(ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTSOURCE_e e_ezsigntemplatedocument_source) {
    char* e_ezsigntemplatedocument_sourceArray[] =  { "NULL", "Base64", "Url", "Ezsigndocument" };
	return e_ezsigntemplatedocument_sourceArray[e_ezsigntemplatedocument_source];
}

ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTSOURCE_e e_ezsigntemplatedocument_sourceezsigntemplatedocument_request_compound_FromString(char* e_ezsigntemplatedocument_source){
    int stringToReturn = 0;
    char *e_ezsigntemplatedocument_sourceArray[] =  { "NULL", "Base64", "Url", "Ezsigndocument" };
    size_t sizeofArray = sizeof(e_ezsigntemplatedocument_sourceArray) / sizeof(e_ezsigntemplatedocument_sourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatedocument_source, e_ezsigntemplatedocument_sourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplatedocument_formatezsigntemplatedocument_request_compound_ToString(ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORMAT_e e_ezsigntemplatedocument_format) {
    char* e_ezsigntemplatedocument_formatArray[] =  { "NULL", "Pdf", "Doc", "Docx", "Xls", "Xlsx", "Ppt", "Pptx" };
	return e_ezsigntemplatedocument_formatArray[e_ezsigntemplatedocument_format];
}

ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORMAT_e e_ezsigntemplatedocument_formatezsigntemplatedocument_request_compound_FromString(char* e_ezsigntemplatedocument_format){
    int stringToReturn = 0;
    char *e_ezsigntemplatedocument_formatArray[] =  { "NULL", "Pdf", "Doc", "Docx", "Xls", "Xlsx", "Ppt", "Pptx" };
    size_t sizeofArray = sizeof(e_ezsigntemplatedocument_formatArray) / sizeof(e_ezsigntemplatedocument_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatedocument_format, e_ezsigntemplatedocument_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigntemplatedocument_formezsigntemplatedocument_request_compound_ToString(ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORM_e e_ezsigntemplatedocument_form) {
    char* e_ezsigntemplatedocument_formArray[] =  { "NULL", "Keep", "Convert" };
	return e_ezsigntemplatedocument_formArray[e_ezsigntemplatedocument_form];
}

ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORM_e e_ezsigntemplatedocument_formezsigntemplatedocument_request_compound_FromString(char* e_ezsigntemplatedocument_form){
    int stringToReturn = 0;
    char *e_ezsigntemplatedocument_formArray[] =  { "NULL", "Keep", "Convert" };
    size_t sizeofArray = sizeof(e_ezsigntemplatedocument_formArray) / sizeof(e_ezsigntemplatedocument_formArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplatedocument_form, e_ezsigntemplatedocument_formArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplatedocument_request_compound_t *ezsigntemplatedocument_request_compound_create(
    int pki_ezsigntemplatedocument_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigndocument_id,
    int fki_ezsigntemplatesigner_id,
    char *s_ezsigntemplatedocument_name,
    ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTSOURCE_e e_ezsigntemplatedocument_source,
    ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORMAT_e e_ezsigntemplatedocument_format,
    char *s_ezsigntemplatedocument_base64,
    char *s_ezsigntemplatedocument_url,
    int b_ezsigntemplatedocument_forcerepair,
    ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORM_e e_ezsigntemplatedocument_form,
    char *s_ezsigntemplatedocument_password
    ) {
    ezsigntemplatedocument_request_compound_t *ezsigntemplatedocument_request_compound_local_var = malloc(sizeof(ezsigntemplatedocument_request_compound_t));
    if (!ezsigntemplatedocument_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_request_compound_local_var->pki_ezsigntemplatedocument_id = pki_ezsigntemplatedocument_id;
    ezsigntemplatedocument_request_compound_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigntemplatedocument_request_compound_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsigntemplatedocument_request_compound_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    ezsigntemplatedocument_request_compound_local_var->s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    ezsigntemplatedocument_request_compound_local_var->e_ezsigntemplatedocument_source = e_ezsigntemplatedocument_source;
    ezsigntemplatedocument_request_compound_local_var->e_ezsigntemplatedocument_format = e_ezsigntemplatedocument_format;
    ezsigntemplatedocument_request_compound_local_var->s_ezsigntemplatedocument_base64 = s_ezsigntemplatedocument_base64;
    ezsigntemplatedocument_request_compound_local_var->s_ezsigntemplatedocument_url = s_ezsigntemplatedocument_url;
    ezsigntemplatedocument_request_compound_local_var->b_ezsigntemplatedocument_forcerepair = b_ezsigntemplatedocument_forcerepair;
    ezsigntemplatedocument_request_compound_local_var->e_ezsigntemplatedocument_form = e_ezsigntemplatedocument_form;
    ezsigntemplatedocument_request_compound_local_var->s_ezsigntemplatedocument_password = s_ezsigntemplatedocument_password;

    return ezsigntemplatedocument_request_compound_local_var;
}


void ezsigntemplatedocument_request_compound_free(ezsigntemplatedocument_request_compound_t *ezsigntemplatedocument_request_compound) {
    if(NULL == ezsigntemplatedocument_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_name) {
        free(ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_name);
        ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_name = NULL;
    }
    if (ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_base64) {
        free(ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_base64);
        ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_base64 = NULL;
    }
    if (ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_url) {
        free(ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_url);
        ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_url = NULL;
    }
    if (ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_password) {
        free(ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_password);
        ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_password = NULL;
    }
    free(ezsigntemplatedocument_request_compound);
}

cJSON *ezsigntemplatedocument_request_compound_convertToJSON(ezsigntemplatedocument_request_compound_t *ezsigntemplatedocument_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_request_compound->pki_ezsigntemplatedocument_id
    if(ezsigntemplatedocument_request_compound->pki_ezsigntemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatedocumentID", ezsigntemplatedocument_request_compound->pki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocument_request_compound->fki_ezsigntemplate_id
    if (!ezsigntemplatedocument_request_compound->fki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigntemplatedocument_request_compound->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatedocument_request_compound->fki_ezsigndocument_id
    if(ezsigntemplatedocument_request_compound->fki_ezsigndocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsigntemplatedocument_request_compound->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocument_request_compound->fki_ezsigntemplatesigner_id
    if(ezsigntemplatedocument_request_compound->fki_ezsigntemplatesigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", ezsigntemplatedocument_request_compound->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_name
    if (!ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatedocumentName", ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_source
    if (ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTSOURCE_NULL == ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_source) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eEzsigntemplatedocumentSource", e_ezsigntemplatedocument_sourceezsigntemplatedocument_request_compound_ToString(ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_source)) == NULL)
    {
    goto fail; //Enum
    }


    // ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_format
    if(ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_format != ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "eEzsigntemplatedocumentFormat", e_ezsigntemplatedocument_formatezsigntemplatedocument_request_compound_ToString(ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_base64
    if(ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_base64) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatedocumentBase64", ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_base64) == NULL) {
    goto fail; //ByteArray
    }
    }


    // ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_url
    if(ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_url) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatedocumentUrl", ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_url) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatedocument_request_compound->b_ezsigntemplatedocument_forcerepair
    if(ezsigntemplatedocument_request_compound->b_ezsigntemplatedocument_forcerepair) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatedocumentForcerepair", ezsigntemplatedocument_request_compound->b_ezsigntemplatedocument_forcerepair) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_form
    if(ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_form != ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORM_NULL) {
    if(cJSON_AddStringToObject(item, "eEzsigntemplatedocumentForm", e_ezsigntemplatedocument_formezsigntemplatedocument_request_compound_ToString(ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_form)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_password
    if(ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_password) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatedocumentPassword", ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_password) == NULL) {
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

ezsigntemplatedocument_request_compound_t *ezsigntemplatedocument_request_compound_parseFromJSON(cJSON *ezsigntemplatedocument_request_compoundJSON){

    ezsigntemplatedocument_request_compound_t *ezsigntemplatedocument_request_compound_local_var = NULL;

    // ezsigntemplatedocument_request_compound->pki_ezsigntemplatedocument_id
    cJSON *pki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "pkiEzsigntemplatedocumentID");
    if (pki_ezsigntemplatedocument_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocument_request_compound->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "fkiEzsigntemplateID");
    if (!fki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatedocument_request_compound->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "fkiEzsigndocumentID");
    if (fki_ezsigndocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocument_request_compound->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "fkiEzsigntemplatesignerID");
    if (fki_ezsigntemplatesigner_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_name
    cJSON *s_ezsigntemplatedocument_name = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "sEzsigntemplatedocumentName");
    if (!s_ezsigntemplatedocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatedocument_name))
    {
    goto end; //String
    }

    // ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_source
    cJSON *e_ezsigntemplatedocument_source = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "eEzsigntemplatedocumentSource");
    if (!e_ezsigntemplatedocument_source) {
        goto end;
    }

    ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTSOURCE_e e_ezsigntemplatedocument_sourceVariable;
    
    if(!cJSON_IsString(e_ezsigntemplatedocument_source))
    {
    goto end; //Enum
    }
    e_ezsigntemplatedocument_sourceVariable = e_ezsigntemplatedocument_sourceezsigntemplatedocument_request_compound_FromString(e_ezsigntemplatedocument_source->valuestring);

    // ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_format
    cJSON *e_ezsigntemplatedocument_format = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "eEzsigntemplatedocumentFormat");
    ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORMAT_e e_ezsigntemplatedocument_formatVariable;
    if (e_ezsigntemplatedocument_format) { 
    if(!cJSON_IsString(e_ezsigntemplatedocument_format))
    {
    goto end; //Enum
    }
    e_ezsigntemplatedocument_formatVariable = e_ezsigntemplatedocument_formatezsigntemplatedocument_request_compound_FromString(e_ezsigntemplatedocument_format->valuestring);
    }

    // ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_base64
    cJSON *s_ezsigntemplatedocument_base64 = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "sEzsigntemplatedocumentBase64");
    if (s_ezsigntemplatedocument_base64) { 
    if(!cJSON_IsString(s_ezsigntemplatedocument_base64))
    {
    goto end; //ByteArray
    }
    }

    // ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_url
    cJSON *s_ezsigntemplatedocument_url = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "sEzsigntemplatedocumentUrl");
    if (s_ezsigntemplatedocument_url) { 
    if(!cJSON_IsString(s_ezsigntemplatedocument_url) && !cJSON_IsNull(s_ezsigntemplatedocument_url))
    {
    goto end; //String
    }
    }

    // ezsigntemplatedocument_request_compound->b_ezsigntemplatedocument_forcerepair
    cJSON *b_ezsigntemplatedocument_forcerepair = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "bEzsigntemplatedocumentForcerepair");
    if (b_ezsigntemplatedocument_forcerepair) { 
    if(!cJSON_IsBool(b_ezsigntemplatedocument_forcerepair))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplatedocument_request_compound->e_ezsigntemplatedocument_form
    cJSON *e_ezsigntemplatedocument_form = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "eEzsigntemplatedocumentForm");
    ezmax_api_definition__full_ezsigntemplatedocument_request_compound_EEZSIGNTEMPLATEDOCUMENTFORM_e e_ezsigntemplatedocument_formVariable;
    if (e_ezsigntemplatedocument_form) { 
    if(!cJSON_IsString(e_ezsigntemplatedocument_form))
    {
    goto end; //Enum
    }
    e_ezsigntemplatedocument_formVariable = e_ezsigntemplatedocument_formezsigntemplatedocument_request_compound_FromString(e_ezsigntemplatedocument_form->valuestring);
    }

    // ezsigntemplatedocument_request_compound->s_ezsigntemplatedocument_password
    cJSON *s_ezsigntemplatedocument_password = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_request_compoundJSON, "sEzsigntemplatedocumentPassword");
    if (s_ezsigntemplatedocument_password) { 
    if(!cJSON_IsString(s_ezsigntemplatedocument_password) && !cJSON_IsNull(s_ezsigntemplatedocument_password))
    {
    goto end; //String
    }
    }


    ezsigntemplatedocument_request_compound_local_var = ezsigntemplatedocument_request_compound_create (
        pki_ezsigntemplatedocument_id ? pki_ezsigntemplatedocument_id->valuedouble : 0,
        fki_ezsigntemplate_id->valuedouble,
        fki_ezsigndocument_id ? fki_ezsigndocument_id->valuedouble : 0,
        fki_ezsigntemplatesigner_id ? fki_ezsigntemplatesigner_id->valuedouble : 0,
        strdup(s_ezsigntemplatedocument_name->valuestring),
        e_ezsigntemplatedocument_sourceVariable,
        e_ezsigntemplatedocument_format ? e_ezsigntemplatedocument_formatVariable : -1,
        s_ezsigntemplatedocument_base64 ? strdup(s_ezsigntemplatedocument_base64->valuestring) : NULL,
        s_ezsigntemplatedocument_url && !cJSON_IsNull(s_ezsigntemplatedocument_url) ? strdup(s_ezsigntemplatedocument_url->valuestring) : NULL,
        b_ezsigntemplatedocument_forcerepair ? b_ezsigntemplatedocument_forcerepair->valueint : 0,
        e_ezsigntemplatedocument_form ? e_ezsigntemplatedocument_formVariable : -1,
        s_ezsigntemplatedocument_password && !cJSON_IsNull(s_ezsigntemplatedocument_password) ? strdup(s_ezsigntemplatedocument_password->valuestring) : NULL
        );

    return ezsigntemplatedocument_request_compound_local_var;
end:
    return NULL;

}
