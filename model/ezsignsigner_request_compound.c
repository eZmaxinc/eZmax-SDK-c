#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_request_compound.h"


char* ezsignsigner_request_compound_e_ezsignsigner_logintype_ToString(ezmax_api_definition__full_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype) {
    char* e_ezsignsigner_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion", "InPersonPhone", "InPerson" };
    return e_ezsignsigner_logintypeArray[e_ezsignsigner_logintype];
}

ezmax_api_definition__full_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e ezsignsigner_request_compound_e_ezsignsigner_logintype_FromString(char* e_ezsignsigner_logintype){
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

static ezsignsigner_request_compound_t *ezsignsigner_request_compound_create_internal(
    int fki_userlogintype_id,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    ezmax_api_definition__full_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype,
    char *s_ezsignsigner_secretanswer,
    ezsignsigner_request_compound_contact_t *obj_contact
    ) {
    ezsignsigner_request_compound_t *ezsignsigner_request_compound_local_var = malloc(sizeof(ezsignsigner_request_compound_t));
    if (!ezsignsigner_request_compound_local_var) {
        return NULL;
    }
    ezsignsigner_request_compound_local_var->fki_userlogintype_id = fki_userlogintype_id;
    ezsignsigner_request_compound_local_var->fki_taxassignment_id = fki_taxassignment_id;
    ezsignsigner_request_compound_local_var->fki_secretquestion_id = fki_secretquestion_id;
    ezsignsigner_request_compound_local_var->e_ezsignsigner_logintype = e_ezsignsigner_logintype;
    ezsignsigner_request_compound_local_var->s_ezsignsigner_secretanswer = s_ezsignsigner_secretanswer;
    ezsignsigner_request_compound_local_var->obj_contact = obj_contact;

    ezsignsigner_request_compound_local_var->_library_owned = 1;
    return ezsignsigner_request_compound_local_var;
}

__attribute__((deprecated)) ezsignsigner_request_compound_t *ezsignsigner_request_compound_create(
    int fki_userlogintype_id,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    ezmax_api_definition__full_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype,
    char *s_ezsignsigner_secretanswer,
    ezsignsigner_request_compound_contact_t *obj_contact
    ) {
    return ezsignsigner_request_compound_create_internal (
        fki_userlogintype_id,
        fki_taxassignment_id,
        fki_secretquestion_id,
        e_ezsignsigner_logintype,
        s_ezsignsigner_secretanswer,
        obj_contact
        );
}

void ezsignsigner_request_compound_free(ezsignsigner_request_compound_t *ezsignsigner_request_compound) {
    if(NULL == ezsignsigner_request_compound){
        return ;
    }
    if(ezsignsigner_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsigner_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_request_compound->s_ezsignsigner_secretanswer) {
        free(ezsignsigner_request_compound->s_ezsignsigner_secretanswer);
        ezsignsigner_request_compound->s_ezsignsigner_secretanswer = NULL;
    }
    if (ezsignsigner_request_compound->obj_contact) {
        ezsignsigner_request_compound_contact_free(ezsignsigner_request_compound->obj_contact);
        ezsignsigner_request_compound->obj_contact = NULL;
    }
    free(ezsignsigner_request_compound);
}

cJSON *ezsignsigner_request_compound_convertToJSON(ezsignsigner_request_compound_t *ezsignsigner_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigner_request_compound->fki_userlogintype_id
    if(ezsignsigner_request_compound->fki_userlogintype_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserlogintypeID", ezsignsigner_request_compound->fki_userlogintype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsigner_request_compound->fki_taxassignment_id
    if (!ezsignsigner_request_compound->fki_taxassignment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTaxassignmentID", ezsignsigner_request_compound->fki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_request_compound->fki_secretquestion_id
    if(ezsignsigner_request_compound->fki_secretquestion_id) {
    if(cJSON_AddNumberToObject(item, "fkiSecretquestionID", ezsignsigner_request_compound->fki_secretquestion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsigner_request_compound->e_ezsignsigner_logintype
    if(ezsignsigner_request_compound->e_ezsignsigner_logintype != ezmax_api_definition__full_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "eEzsignsignerLogintype", ezsignsigner_request_compound_e_ezsignsigner_logintype_ToString(ezsignsigner_request_compound->e_ezsignsigner_logintype)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ezsignsigner_request_compound->s_ezsignsigner_secretanswer
    if(ezsignsigner_request_compound->s_ezsignsigner_secretanswer) {
    if(cJSON_AddStringToObject(item, "sEzsignsignerSecretanswer", ezsignsigner_request_compound->s_ezsignsigner_secretanswer) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsigner_request_compound->obj_contact
    if (!ezsignsigner_request_compound->obj_contact) {
        goto fail;
    }
    cJSON *obj_contact_local_JSON = ezsignsigner_request_compound_contact_convertToJSON(ezsignsigner_request_compound->obj_contact);
    if(obj_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContact", obj_contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigner_request_compound_t *ezsignsigner_request_compound_parseFromJSON(cJSON *ezsignsigner_request_compoundJSON){

    ezsignsigner_request_compound_t *ezsignsigner_request_compound_local_var = NULL;

    // define the local variable for ezsignsigner_request_compound->obj_contact
    ezsignsigner_request_compound_contact_t *obj_contact_local_nonprim = NULL;

    // ezsignsigner_request_compound->fki_userlogintype_id
    cJSON *fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "fkiUserlogintypeID");
    if (cJSON_IsNull(fki_userlogintype_id)) {
        fki_userlogintype_id = NULL;
    }
    if (fki_userlogintype_id) { 
    if(!cJSON_IsNumber(fki_userlogintype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsigner_request_compound->fki_taxassignment_id
    cJSON *fki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "fkiTaxassignmentID");
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

    // ezsignsigner_request_compound->fki_secretquestion_id
    cJSON *fki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "fkiSecretquestionID");
    if (cJSON_IsNull(fki_secretquestion_id)) {
        fki_secretquestion_id = NULL;
    }
    if (fki_secretquestion_id) { 
    if(!cJSON_IsNumber(fki_secretquestion_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsigner_request_compound->e_ezsignsigner_logintype
    cJSON *e_ezsignsigner_logintype = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "eEzsignsignerLogintype");
    if (cJSON_IsNull(e_ezsignsigner_logintype)) {
        e_ezsignsigner_logintype = NULL;
    }
    ezmax_api_definition__full_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintypeVariable;
    if (e_ezsignsigner_logintype) { 
    if(!cJSON_IsString(e_ezsignsigner_logintype))
    {
    goto end; //Enum
    }
    e_ezsignsigner_logintypeVariable = ezsignsigner_request_compound_e_ezsignsigner_logintype_FromString(e_ezsignsigner_logintype->valuestring);
    }

    // ezsignsigner_request_compound->s_ezsignsigner_secretanswer
    cJSON *s_ezsignsigner_secretanswer = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "sEzsignsignerSecretanswer");
    if (cJSON_IsNull(s_ezsignsigner_secretanswer)) {
        s_ezsignsigner_secretanswer = NULL;
    }
    if (s_ezsignsigner_secretanswer) { 
    if(!cJSON_IsString(s_ezsignsigner_secretanswer) && !cJSON_IsNull(s_ezsignsigner_secretanswer))
    {
    goto end; //String
    }
    }

    // ezsignsigner_request_compound->obj_contact
    cJSON *obj_contact = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "objContact");
    if (cJSON_IsNull(obj_contact)) {
        obj_contact = NULL;
    }
    if (!obj_contact) {
        goto end;
    }

    
    obj_contact_local_nonprim = ezsignsigner_request_compound_contact_parseFromJSON(obj_contact); //nonprimitive


    ezsignsigner_request_compound_local_var = ezsignsigner_request_compound_create_internal (
        fki_userlogintype_id ? fki_userlogintype_id->valuedouble : 0,
        fki_taxassignment_id->valuedouble,
        fki_secretquestion_id ? fki_secretquestion_id->valuedouble : 0,
        e_ezsignsigner_logintype ? e_ezsignsigner_logintypeVariable : ezmax_api_definition__full_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_NULL,
        s_ezsignsigner_secretanswer && !cJSON_IsNull(s_ezsignsigner_secretanswer) ? strdup(s_ezsignsigner_secretanswer->valuestring) : NULL,
        obj_contact_local_nonprim
        );

    return ezsignsigner_request_compound_local_var;
end:
    if (obj_contact_local_nonprim) {
        ezsignsigner_request_compound_contact_free(obj_contact_local_nonprim);
        obj_contact_local_nonprim = NULL;
    }
    return NULL;

}
