#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_request.h"


char* e_ezsigndocument_sourceezsigndocument_request_ToString(ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source) {
    char* e_ezsigndocument_sourceArray[] =  { "NULL", "Base64", "Ezsigntemplate", "Url" };
	return e_ezsigndocument_sourceArray[e_ezsigndocument_source];
}

ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_sourceezsigndocument_request_FromString(char* e_ezsigndocument_source){
    int stringToReturn = 0;
    char *e_ezsigndocument_sourceArray[] =  { "NULL", "Base64", "Ezsigntemplate", "Url" };
    size_t sizeofArray = sizeof(e_ezsigndocument_sourceArray) / sizeof(e_ezsigndocument_sourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocument_source, e_ezsigndocument_sourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigndocument_formatezsigndocument_request_ToString(ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format) {
    char* e_ezsigndocument_formatArray[] =  { "NULL", "Pdf", "Doc", "Docx", "Xls", "Xlsx", "Ppt", "Pptx" };
	return e_ezsigndocument_formatArray[e_ezsigndocument_format];
}

ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_formatezsigndocument_request_FromString(char* e_ezsigndocument_format){
    int stringToReturn = 0;
    char *e_ezsigndocument_formatArray[] =  { "NULL", "Pdf", "Doc", "Docx", "Xls", "Xlsx", "Ppt", "Pptx" };
    size_t sizeofArray = sizeof(e_ezsigndocument_formatArray) / sizeof(e_ezsigndocument_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocument_format, e_ezsigndocument_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsigndocument_formezsigndocument_request_ToString(ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_e e_ezsigndocument_form) {
    char* e_ezsigndocument_formArray[] =  { "NULL", "Keep", "Convert" };
	return e_ezsigndocument_formArray[e_ezsigndocument_form];
}

ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_e e_ezsigndocument_formezsigndocument_request_FromString(char* e_ezsigndocument_form){
    int stringToReturn = 0;
    char *e_ezsigndocument_formArray[] =  { "NULL", "Keep", "Convert" };
    size_t sizeofArray = sizeof(e_ezsigndocument_formArray) / sizeof(e_ezsigndocument_formArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocument_form, e_ezsigndocument_formArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigndocument_request_t *ezsigndocument_request_create(
    int pki_ezsigndocument_id,
    int fki_ezsignfolder_id,
    int fki_ezsigntemplate_id,
    int fki_ezsignfoldersignerassociation_id,
    int fki_language_id,
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source,
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format,
    char *s_ezsigndocument_base64,
    char *s_ezsigndocument_url,
    int b_ezsigndocument_forcerepair,
    char *s_ezsigndocument_password,
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_e e_ezsigndocument_form,
    char *dt_ezsigndocument_duedate,
    char *s_ezsigndocument_name,
    char *s_ezsigndocument_externalid
    ) {
    ezsigndocument_request_t *ezsigndocument_request_local_var = malloc(sizeof(ezsigndocument_request_t));
    if (!ezsigndocument_request_local_var) {
        return NULL;
    }
    ezsigndocument_request_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    ezsigndocument_request_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsigndocument_request_local_var->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    ezsigndocument_request_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    ezsigndocument_request_local_var->fki_language_id = fki_language_id;
    ezsigndocument_request_local_var->e_ezsigndocument_source = e_ezsigndocument_source;
    ezsigndocument_request_local_var->e_ezsigndocument_format = e_ezsigndocument_format;
    ezsigndocument_request_local_var->s_ezsigndocument_base64 = s_ezsigndocument_base64;
    ezsigndocument_request_local_var->s_ezsigndocument_url = s_ezsigndocument_url;
    ezsigndocument_request_local_var->b_ezsigndocument_forcerepair = b_ezsigndocument_forcerepair;
    ezsigndocument_request_local_var->s_ezsigndocument_password = s_ezsigndocument_password;
    ezsigndocument_request_local_var->e_ezsigndocument_form = e_ezsigndocument_form;
    ezsigndocument_request_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsigndocument_request_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    ezsigndocument_request_local_var->s_ezsigndocument_externalid = s_ezsigndocument_externalid;

    return ezsigndocument_request_local_var;
}


void ezsigndocument_request_free(ezsigndocument_request_t *ezsigndocument_request) {
    if(NULL == ezsigndocument_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_request->s_ezsigndocument_base64) {
        free(ezsigndocument_request->s_ezsigndocument_base64);
        ezsigndocument_request->s_ezsigndocument_base64 = NULL;
    }
    if (ezsigndocument_request->s_ezsigndocument_url) {
        free(ezsigndocument_request->s_ezsigndocument_url);
        ezsigndocument_request->s_ezsigndocument_url = NULL;
    }
    if (ezsigndocument_request->s_ezsigndocument_password) {
        free(ezsigndocument_request->s_ezsigndocument_password);
        ezsigndocument_request->s_ezsigndocument_password = NULL;
    }
    if (ezsigndocument_request->dt_ezsigndocument_duedate) {
        free(ezsigndocument_request->dt_ezsigndocument_duedate);
        ezsigndocument_request->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsigndocument_request->s_ezsigndocument_name) {
        free(ezsigndocument_request->s_ezsigndocument_name);
        ezsigndocument_request->s_ezsigndocument_name = NULL;
    }
    if (ezsigndocument_request->s_ezsigndocument_externalid) {
        free(ezsigndocument_request->s_ezsigndocument_externalid);
        ezsigndocument_request->s_ezsigndocument_externalid = NULL;
    }
    free(ezsigndocument_request);
}

cJSON *ezsigndocument_request_convertToJSON(ezsigndocument_request_t *ezsigndocument_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_request->pki_ezsigndocument_id
    if(ezsigndocument_request->pki_ezsigndocument_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", ezsigndocument_request->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_request->fki_ezsignfolder_id
    if (!ezsigndocument_request->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsigndocument_request->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_request->fki_ezsigntemplate_id
    if(ezsigndocument_request->fki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplateID", ezsigndocument_request->fki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_request->fki_ezsignfoldersignerassociation_id
    if(ezsigndocument_request->fki_ezsignfoldersignerassociation_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", ezsigndocument_request->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_request->fki_language_id
    if (!ezsigndocument_request->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigndocument_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_request->e_ezsigndocument_source
    if (ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_NULL == ezsigndocument_request->e_ezsigndocument_source) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eEzsigndocumentSource", e_ezsigndocument_sourceezsigndocument_request_ToString(ezsigndocument_request->e_ezsigndocument_source)) == NULL)
    {
    goto fail; //Enum
    }


    // ezsigndocument_request->e_ezsigndocument_format
    if(ezsigndocument_request->e_ezsigndocument_format != ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "eEzsigndocumentFormat", e_ezsigndocument_formatezsigndocument_request_ToString(ezsigndocument_request->e_ezsigndocument_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezsigndocument_request->s_ezsigndocument_base64
    if(ezsigndocument_request->s_ezsigndocument_base64) {
    if(cJSON_AddStringToObject(item, "sEzsigndocumentBase64", ezsigndocument_request->s_ezsigndocument_base64) == NULL) {
    goto fail; //ByteArray
    }
    }


    // ezsigndocument_request->s_ezsigndocument_url
    if(ezsigndocument_request->s_ezsigndocument_url) {
    if(cJSON_AddStringToObject(item, "sEzsigndocumentUrl", ezsigndocument_request->s_ezsigndocument_url) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_request->b_ezsigndocument_forcerepair
    if(ezsigndocument_request->b_ezsigndocument_forcerepair) {
    if(cJSON_AddBoolToObject(item, "bEzsigndocumentForcerepair", ezsigndocument_request->b_ezsigndocument_forcerepair) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigndocument_request->s_ezsigndocument_password
    if(ezsigndocument_request->s_ezsigndocument_password) {
    if(cJSON_AddStringToObject(item, "sEzsigndocumentPassword", ezsigndocument_request->s_ezsigndocument_password) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_request->e_ezsigndocument_form
    if(ezsigndocument_request->e_ezsigndocument_form != ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_NULL) {
    if(cJSON_AddStringToObject(item, "eEzsigndocumentForm", e_ezsigndocument_formezsigndocument_request_ToString(ezsigndocument_request->e_ezsigndocument_form)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezsigndocument_request->dt_ezsigndocument_duedate
    if (!ezsigndocument_request->dt_ezsigndocument_duedate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsigndocument_request->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_request->s_ezsigndocument_name
    if (!ezsigndocument_request->s_ezsigndocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", ezsigndocument_request->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_request->s_ezsigndocument_externalid
    if(ezsigndocument_request->s_ezsigndocument_externalid) {
    if(cJSON_AddStringToObject(item, "sEzsigndocumentExternalid", ezsigndocument_request->s_ezsigndocument_externalid) == NULL) {
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

ezsigndocument_request_t *ezsigndocument_request_parseFromJSON(cJSON *ezsigndocument_requestJSON){

    ezsigndocument_request_t *ezsigndocument_request_local_var = NULL;

    // ezsigndocument_request->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "pkiEzsigndocumentID");
    if (pki_ezsigndocument_id) { 
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigndocument_request->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_request->fki_ezsigntemplate_id
    cJSON *fki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "fkiEzsigntemplateID");
    if (fki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigndocument_request->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "fkiEzsignfoldersignerassociationID");
    if (fki_ezsignfoldersignerassociation_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigndocument_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_request->e_ezsigndocument_source
    cJSON *e_ezsigndocument_source = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "eEzsigndocumentSource");
    if (!e_ezsigndocument_source) {
        goto end;
    }

    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_sourceVariable;
    
    if(!cJSON_IsString(e_ezsigndocument_source))
    {
    goto end; //Enum
    }
    e_ezsigndocument_sourceVariable = e_ezsigndocument_sourceezsigndocument_request_FromString(e_ezsigndocument_source->valuestring);

    // ezsigndocument_request->e_ezsigndocument_format
    cJSON *e_ezsigndocument_format = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "eEzsigndocumentFormat");
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_formatVariable;
    if (e_ezsigndocument_format) { 
    if(!cJSON_IsString(e_ezsigndocument_format))
    {
    goto end; //Enum
    }
    e_ezsigndocument_formatVariable = e_ezsigndocument_formatezsigndocument_request_FromString(e_ezsigndocument_format->valuestring);
    }

    // ezsigndocument_request->s_ezsigndocument_base64
    cJSON *s_ezsigndocument_base64 = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "sEzsigndocumentBase64");
    if (s_ezsigndocument_base64) { 
    if(!cJSON_IsString(s_ezsigndocument_base64))
    {
    goto end; //ByteArray
    }
    }

    // ezsigndocument_request->s_ezsigndocument_url
    cJSON *s_ezsigndocument_url = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "sEzsigndocumentUrl");
    if (s_ezsigndocument_url) { 
    if(!cJSON_IsString(s_ezsigndocument_url) && !cJSON_IsNull(s_ezsigndocument_url))
    {
    goto end; //String
    }
    }

    // ezsigndocument_request->b_ezsigndocument_forcerepair
    cJSON *b_ezsigndocument_forcerepair = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "bEzsigndocumentForcerepair");
    if (b_ezsigndocument_forcerepair) { 
    if(!cJSON_IsBool(b_ezsigndocument_forcerepair))
    {
    goto end; //Bool
    }
    }

    // ezsigndocument_request->s_ezsigndocument_password
    cJSON *s_ezsigndocument_password = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "sEzsigndocumentPassword");
    if (s_ezsigndocument_password) { 
    if(!cJSON_IsString(s_ezsigndocument_password) && !cJSON_IsNull(s_ezsigndocument_password))
    {
    goto end; //String
    }
    }

    // ezsigndocument_request->e_ezsigndocument_form
    cJSON *e_ezsigndocument_form = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "eEzsigndocumentForm");
    ezmax_api_definition__full_ezsigndocument_request_EEZSIGNDOCUMENTFORM_e e_ezsigndocument_formVariable;
    if (e_ezsigndocument_form) { 
    if(!cJSON_IsString(e_ezsigndocument_form))
    {
    goto end; //Enum
    }
    e_ezsigndocument_formVariable = e_ezsigndocument_formezsigndocument_request_FromString(e_ezsigndocument_form->valuestring);
    }

    // ezsigndocument_request->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "dtEzsigndocumentDuedate");
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsigndocument_request->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "sEzsigndocumentName");
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // ezsigndocument_request->s_ezsigndocument_externalid
    cJSON *s_ezsigndocument_externalid = cJSON_GetObjectItemCaseSensitive(ezsigndocument_requestJSON, "sEzsigndocumentExternalid");
    if (s_ezsigndocument_externalid) { 
    if(!cJSON_IsString(s_ezsigndocument_externalid) && !cJSON_IsNull(s_ezsigndocument_externalid))
    {
    goto end; //String
    }
    }


    ezsigndocument_request_local_var = ezsigndocument_request_create (
        pki_ezsigndocument_id ? pki_ezsigndocument_id->valuedouble : 0,
        fki_ezsignfolder_id->valuedouble,
        fki_ezsigntemplate_id ? fki_ezsigntemplate_id->valuedouble : 0,
        fki_ezsignfoldersignerassociation_id ? fki_ezsignfoldersignerassociation_id->valuedouble : 0,
        fki_language_id->valuedouble,
        e_ezsigndocument_sourceVariable,
        e_ezsigndocument_format ? e_ezsigndocument_formatVariable : -1,
        s_ezsigndocument_base64 ? strdup(s_ezsigndocument_base64->valuestring) : NULL,
        s_ezsigndocument_url && !cJSON_IsNull(s_ezsigndocument_url) ? strdup(s_ezsigndocument_url->valuestring) : NULL,
        b_ezsigndocument_forcerepair ? b_ezsigndocument_forcerepair->valueint : 0,
        s_ezsigndocument_password && !cJSON_IsNull(s_ezsigndocument_password) ? strdup(s_ezsigndocument_password->valuestring) : NULL,
        e_ezsigndocument_form ? e_ezsigndocument_formVariable : -1,
        strdup(dt_ezsigndocument_duedate->valuestring),
        strdup(s_ezsigndocument_name->valuestring),
        s_ezsigndocument_externalid && !cJSON_IsNull(s_ezsigndocument_externalid) ? strdup(s_ezsigndocument_externalid->valuestring) : NULL
        );

    return ezsigndocument_request_local_var;
end:
    return NULL;

}
