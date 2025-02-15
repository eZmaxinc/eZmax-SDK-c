#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_communicationsender_request.h"



static custom_communicationsender_request_t *custom_communicationsender_request_create_internal(
    int fki_agent_id,
    int fki_broker_id,
    int fki_mailboxshared_id,
    int fki_phonelineshared_id,
    int fki_user_id
    ) {
    custom_communicationsender_request_t *custom_communicationsender_request_local_var = malloc(sizeof(custom_communicationsender_request_t));
    if (!custom_communicationsender_request_local_var) {
        return NULL;
    }
    custom_communicationsender_request_local_var->fki_agent_id = fki_agent_id;
    custom_communicationsender_request_local_var->fki_broker_id = fki_broker_id;
    custom_communicationsender_request_local_var->fki_mailboxshared_id = fki_mailboxshared_id;
    custom_communicationsender_request_local_var->fki_phonelineshared_id = fki_phonelineshared_id;
    custom_communicationsender_request_local_var->fki_user_id = fki_user_id;

    custom_communicationsender_request_local_var->_library_owned = 1;
    return custom_communicationsender_request_local_var;
}

__attribute__((deprecated)) custom_communicationsender_request_t *custom_communicationsender_request_create(
    int fki_agent_id,
    int fki_broker_id,
    int fki_mailboxshared_id,
    int fki_phonelineshared_id,
    int fki_user_id
    ) {
    return custom_communicationsender_request_create_internal (
        fki_agent_id,
        fki_broker_id,
        fki_mailboxshared_id,
        fki_phonelineshared_id,
        fki_user_id
        );
}

void custom_communicationsender_request_free(custom_communicationsender_request_t *custom_communicationsender_request) {
    if(NULL == custom_communicationsender_request){
        return ;
    }
    if(custom_communicationsender_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_communicationsender_request_free");
        return ;
    }
    listEntry_t *listEntry;
    free(custom_communicationsender_request);
}

cJSON *custom_communicationsender_request_convertToJSON(custom_communicationsender_request_t *custom_communicationsender_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_communicationsender_request->fki_agent_id
    if(custom_communicationsender_request->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", custom_communicationsender_request->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationsender_request->fki_broker_id
    if(custom_communicationsender_request->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", custom_communicationsender_request->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationsender_request->fki_mailboxshared_id
    if(custom_communicationsender_request->fki_mailboxshared_id) {
    if(cJSON_AddNumberToObject(item, "fkiMailboxsharedID", custom_communicationsender_request->fki_mailboxshared_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationsender_request->fki_phonelineshared_id
    if(custom_communicationsender_request->fki_phonelineshared_id) {
    if(cJSON_AddNumberToObject(item, "fkiPhonelinesharedID", custom_communicationsender_request->fki_phonelineshared_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationsender_request->fki_user_id
    if(custom_communicationsender_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", custom_communicationsender_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_communicationsender_request_t *custom_communicationsender_request_parseFromJSON(cJSON *custom_communicationsender_requestJSON){

    custom_communicationsender_request_t *custom_communicationsender_request_local_var = NULL;

    // custom_communicationsender_request->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_requestJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_request->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_requestJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_request->fki_mailboxshared_id
    cJSON *fki_mailboxshared_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_requestJSON, "fkiMailboxsharedID");
    if (cJSON_IsNull(fki_mailboxshared_id)) {
        fki_mailboxshared_id = NULL;
    }
    if (fki_mailboxshared_id) { 
    if(!cJSON_IsNumber(fki_mailboxshared_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_request->fki_phonelineshared_id
    cJSON *fki_phonelineshared_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_requestJSON, "fkiPhonelinesharedID");
    if (cJSON_IsNull(fki_phonelineshared_id)) {
        fki_phonelineshared_id = NULL;
    }
    if (fki_phonelineshared_id) { 
    if(!cJSON_IsNumber(fki_phonelineshared_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_requestJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }


    custom_communicationsender_request_local_var = custom_communicationsender_request_create_internal (
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_mailboxshared_id ? fki_mailboxshared_id->valuedouble : 0,
        fki_phonelineshared_id ? fki_phonelineshared_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0
        );

    return custom_communicationsender_request_local_var;
end:
    return NULL;

}
