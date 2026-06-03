#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_request.h"


char* ezsignsigner_request_e_ezsignsigner_logintype_ToString(ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype) {
    char* e_ezsignsigner_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion", "InPersonPhone", "InPerson" };
    return e_ezsignsigner_logintypeArray[e_ezsignsigner_logintype];
}

ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e ezsignsigner_request_e_ezsignsigner_logintype_FromString(char* e_ezsignsigner_logintype){
    int stringToReturn = 0;
    char *e_ezsignsigner_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion", "InPersonPhone", "InPerson" };
    size_t sizeofArray = sizeof(e_ezsignsigner_logintypeArray) / sizeof(e_ezsignsigner_logintypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsigner_logintype, e_ezsignsigner_logintypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static ezsignsigner_request_t *ezsignsigner_request_create_internal(
    int *fki_userlogintype_id,
    int *fki_taxassignment_id,
    int *fki_secretquestion_id,
    ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype,
    char *s_ezsignsigner_secretanswer
    ) {
    ezsignsigner_request_t *ezsignsigner_request_local_var = malloc(sizeof(ezsignsigner_request_t));
    if (!ezsignsigner_request_local_var) {
        return NULL;
    }
    memset(ezsignsigner_request_local_var, 0, sizeof(ezsignsigner_request_t));
    ezsignsigner_request_local_var->_library_owned = 1;
    ezsignsigner_request_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsignsigner_request_local_var->fki_taxassignment_id = fki_taxassignment_id;
    ezsignsigner_request_local_var->fki_secretquestion_id = fki_secretquestion_id;
    ezsignsigner_request_local_var->e_ezsignsigner_logintype = e_ezsignsigner_logintype;
    ezsignsigner_request_local_var->s_ezsignsigner_secretanswer = s_ezsignsigner_secretanswer;
    return ezsignsigner_request_local_var;
}

__attribute__((deprecated)) ezsignsigner_request_t *ezsignsigner_request_create(
    int *fki_userlogintype_id,
    int *fki_taxassignment_id,
    int *fki_secretquestion_id,
    ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype,
    char *s_ezsignsigner_secretanswer
    ) {
    int *fki_userlogintype_id_copy = NULL;
    if (fki_userlogintype_id) {
        fki_userlogintype_id_copy = malloc(sizeof(int));
        if (fki_userlogintype_id_copy) *fki_userlogintype_id_copy = *fki_userlogintype_id;
    }
    int *fki_taxassignment_id_copy = NULL;
    if (fki_taxassignment_id) {
        fki_taxassignment_id_copy = malloc(sizeof(int));
        if (fki_taxassignment_id_copy) *fki_taxassignment_id_copy = *fki_taxassignment_id;
    }
    int *fki_secretquestion_id_copy = NULL;
    if (fki_secretquestion_id) {
        fki_secretquestion_id_copy = malloc(sizeof(int));
        if (fki_secretquestion_id_copy) *fki_secretquestion_id_copy = *fki_secretquestion_id;
    }
    ezsignsigner_request_t *result = ezsignsigner_request_create_internal (
        fki_userlogintype_id_copy,
        fki_taxassignment_id_copy,
        fki_secretquestion_id_copy,
        e_ezsignsigner_logintype,
        s_ezsignsigner_secretanswer
        );
    if (!result) {
        free(fki_userlogintype_id_copy);
        free(fki_taxassignment_id_copy);
        free(fki_secretquestion_id_copy);
    }
    return result;
}

void ezsignsigner_request_free(ezsignsigner_request_t *ezsignsigner_request) {
    if(NULL == ezsignsigner_request){
        return ;
    }
    if(ezsignsigner_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsigner_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_request->fki_userlogintype_id) {
        free(ezsignsigner_request->fki_userlogintype_id);
        ezsignsigner_request->fki_userlogintype_id = NULL;
    }
    if (ezsignsigner_request->fki_taxassignment_id) {
        free(ezsignsigner_request->fki_taxassignment_id);
        ezsignsigner_request->fki_taxassignment_id = NULL;
    }
    if (ezsignsigner_request->fki_secretquestion_id) {
        free(ezsignsigner_request->fki_secretquestion_id);
        ezsignsigner_request->fki_secretquestion_id = NULL;
    }
    if (ezsignsigner_request->s_ezsignsigner_secretanswer) {
        free(ezsignsigner_request->s_ezsignsigner_secretanswer);
        ezsignsigner_request->s_ezsignsigner_secretanswer = NULL;
    }
    free(ezsignsigner_request);
}

cJSON *ezsignsigner_request_convertToJSON(ezsignsigner_request_t *ezsignsigner_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigner_request->fki_userlogintype_id
    if(ezsignsigner_request->fki_userlogintype_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", *ezsignsigner_request->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsigner_request->fki_taxassignment_id
    if (!ezsignsigner_request->fki_taxassignment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTaxassignmentID", *ezsignsigner_request->fki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_request->fki_secretquestion_id
    if(ezsignsigner_request->fki_secretquestion_id) {
    if(cJSON_AddNumberToObject(item, "fkiSecretquestionID", *ezsignsigner_request->fki_secretquestion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsigner_request->e_ezsignsigner_logintype
    if(ezsignsigner_request->e_ezsignsigner_logintype != ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "eEzsignsignerLogintype", ezsignsigner_request_e_ezsignsigner_logintype_ToString(ezsignsigner_request->e_ezsignsigner_logintype)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezsignsigner_request->s_ezsignsigner_secretanswer
    if(ezsignsigner_request->s_ezsignsigner_secretanswer) {
    if(cJSON_AddStringToObject(item, "sEzsignsignerSecretanswer", ezsignsigner_request->s_ezsignsigner_secretanswer) == NULL) {
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

ezsignsigner_request_t *ezsignsigner_request_parseFromJSON(cJSON *ezsignsigner_requestJSON){

    ezsignsigner_request_t *ezsignsigner_request_local_var = NULL;

    // define the local variable for ezsignsigner_request->fki_userlogintype_id
    int *fki_userlogintype_id_local_var = NULL;

    // define the local variable for ezsignsigner_request->fki_taxassignment_id
    int *fki_taxassignment_id_local_var = NULL;

    // define the local variable for ezsignsigner_request->fki_secretquestion_id
    int *fki_secretquestion_id_local_var = NULL;

    char *s_ezsignsigner_secretanswer_local_str = NULL;

    // ezsignsigner_request->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_requestJSON, "fkiUserlogintypeID");
    if (cJSON_IsNull(fki_userlogintype_id)) {
        fki_userlogintype_id = NULL;
    }
    if (fki_userlogintype_id) { 
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
    }

    // ezsignsigner_request->fki_taxassignment_id
    cJSON *fki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_requestJSON, "fkiTaxassignmentID");
    if (cJSON_IsNull(fki_taxassignment_id)) {
        fki_taxassignment_id = NULL;
    }
    if (!fki_taxassignment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_taxassignment_id))
    {
    goto end; //Numeric
    }
    fki_taxassignment_id_local_var = malloc(sizeof(int));
    if(!fki_taxassignment_id_local_var)
    {
        goto end;
    }
    *fki_taxassignment_id_local_var = fki_taxassignment_id->valuedouble;

    // ezsignsigner_request->fki_secretquestion_id
    cJSON *fki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_requestJSON, "fkiSecretquestionID");
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

    // ezsignsigner_request->e_ezsignsigner_logintype
    cJSON *e_ezsignsigner_logintype = cJSON_GetObjectItemCaseSensitive(ezsignsigner_requestJSON, "eEzsignsignerLogintype");
    if (cJSON_IsNull(e_ezsignsigner_logintype)) {
        e_ezsignsigner_logintype = NULL;
    }
    ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintypeVariable;
    if (e_ezsignsigner_logintype) { 
    if(!cJSON_IsString(e_ezsignsigner_logintype))
    {
    goto end; //Enum
    }
    e_ezsignsigner_logintypeVariable = ezsignsigner_request_e_ezsignsigner_logintype_FromString(e_ezsignsigner_logintype->valuestring);
    }

    // ezsignsigner_request->s_ezsignsigner_secretanswer
    cJSON *s_ezsignsigner_secretanswer = cJSON_GetObjectItemCaseSensitive(ezsignsigner_requestJSON, "sEzsignsignerSecretanswer");
    if (cJSON_IsNull(s_ezsignsigner_secretanswer)) {
        s_ezsignsigner_secretanswer = NULL;
    }
    if (s_ezsignsigner_secretanswer) { 
    if(!cJSON_IsString(s_ezsignsigner_secretanswer) && !cJSON_IsNull(s_ezsignsigner_secretanswer))
    {
    goto end; //String
    }
    }


    if (s_ezsignsigner_secretanswer && !cJSON_IsNull(s_ezsignsigner_secretanswer)) s_ezsignsigner_secretanswer_local_str = strdup(s_ezsignsigner_secretanswer->valuestring);

    ezsignsigner_request_local_var = ezsignsigner_request_create_internal (
        fki_userlogintype_id_local_var,
        fki_taxassignment_id_local_var,
        fki_secretquestion_id_local_var,
        e_ezsignsigner_logintype ? e_ezsignsigner_logintypeVariable : ezmax_api_definition__full_ezsignsigner_request_EEZSIGNSIGNERLOGINTYPE_NULL,
        s_ezsignsigner_secretanswer_local_str
        );

    if (!ezsignsigner_request_local_var) {
        goto end;
    }

    return ezsignsigner_request_local_var;
end:
    if (fki_userlogintype_id_local_var) {
        free(fki_userlogintype_id_local_var);
        fki_userlogintype_id_local_var = NULL;
    }
    if (fki_taxassignment_id_local_var) {
        free(fki_taxassignment_id_local_var);
        fki_taxassignment_id_local_var = NULL;
    }
    if (fki_secretquestion_id_local_var) {
        free(fki_secretquestion_id_local_var);
        fki_secretquestion_id_local_var = NULL;
    }
    if (s_ezsignsigner_secretanswer_local_str) {
        free(s_ezsignsigner_secretanswer_local_str);
        s_ezsignsigner_secretanswer_local_str = NULL;
    }
    return NULL;

}
