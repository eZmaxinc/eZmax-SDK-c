#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_communicationsender_request.h"



custom_communicationsender_request_t *custom_communicationsender_request_create(
    int fki_agent_id,
    int fki_broker_id,
    int fki_mailboxshared_id,
    int fki_user_id
    ) {
    custom_communicationsender_request_t *custom_communicationsender_request_local_var = malloc(sizeof(custom_communicationsender_request_t));
    if (!custom_communicationsender_request_local_var) {
        return NULL;
    }
    custom_communicationsender_request_local_var->fki_agent_id = fki_agent_id;
    custom_communicationsender_request_local_var->fki_broker_id = fki_broker_id;
    custom_communicationsender_request_local_var->fki_mailboxshared_id = fki_mailboxshared_id;
    custom_communicationsender_request_local_var->fki_user_id = fki_user_id;

    return custom_communicationsender_request_local_var;
}


void custom_communicationsender_request_free(custom_communicationsender_request_t *custom_communicationsender_request) {
    if(NULL == custom_communicationsender_request){
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
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_request->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_requestJSON, "fkiBrokerID");
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_request->fki_mailboxshared_id
    cJSON *fki_mailboxshared_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_requestJSON, "fkiMailboxsharedID");
    if (fki_mailboxshared_id) { 
    if(!cJSON_IsNumber(fki_mailboxshared_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_requestJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }


    custom_communicationsender_request_local_var = custom_communicationsender_request_create (
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_mailboxshared_id ? fki_mailboxshared_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0
        );

    return custom_communicationsender_request_local_var;
end:
    return NULL;

}
