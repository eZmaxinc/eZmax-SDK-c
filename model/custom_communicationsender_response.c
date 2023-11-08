#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_communicationsender_response.h"


char* e_communicationsender_objecttypecustom_communicationsender_response_ToString(ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttype) {
    char* e_communicationsender_objecttypeArray[] =  { "NULL", "Agent", "Broker", "User", "Mailboxshared" };
	return e_communicationsender_objecttypeArray[e_communicationsender_objecttype];
}

ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttypecustom_communicationsender_response_FromString(char* e_communicationsender_objecttype){
    int stringToReturn = 0;
    char *e_communicationsender_objecttypeArray[] =  { "NULL", "Agent", "Broker", "User", "Mailboxshared" };
    size_t sizeofArray = sizeof(e_communicationsender_objecttypeArray) / sizeof(e_communicationsender_objecttypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communicationsender_objecttype, e_communicationsender_objecttypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_communicationsender_response_t *custom_communicationsender_response_create(
    int fki_agent_id,
    int fki_broker_id,
    int fki_user_id,
    int fki_mailboxshared_id,
    ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttype,
    custom_contact_name_response_t *obj_contact_name,
    char *s_email_address,
    char *s_phone_e164
    ) {
    custom_communicationsender_response_t *custom_communicationsender_response_local_var = malloc(sizeof(custom_communicationsender_response_t));
    if (!custom_communicationsender_response_local_var) {
        return NULL;
    }
    custom_communicationsender_response_local_var->fki_agent_id = fki_agent_id;
    custom_communicationsender_response_local_var->fki_broker_id = fki_broker_id;
    custom_communicationsender_response_local_var->fki_user_id = fki_user_id;
    custom_communicationsender_response_local_var->fki_mailboxshared_id = fki_mailboxshared_id;
    custom_communicationsender_response_local_var->e_communicationsender_objecttype = e_communicationsender_objecttype;
    custom_communicationsender_response_local_var->obj_contact_name = obj_contact_name;
    custom_communicationsender_response_local_var->s_email_address = s_email_address;
    custom_communicationsender_response_local_var->s_phone_e164 = s_phone_e164;

    return custom_communicationsender_response_local_var;
}


void custom_communicationsender_response_free(custom_communicationsender_response_t *custom_communicationsender_response) {
    if(NULL == custom_communicationsender_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_communicationsender_response->obj_contact_name) {
        custom_contact_name_response_free(custom_communicationsender_response->obj_contact_name);
        custom_communicationsender_response->obj_contact_name = NULL;
    }
    if (custom_communicationsender_response->s_email_address) {
        free(custom_communicationsender_response->s_email_address);
        custom_communicationsender_response->s_email_address = NULL;
    }
    if (custom_communicationsender_response->s_phone_e164) {
        free(custom_communicationsender_response->s_phone_e164);
        custom_communicationsender_response->s_phone_e164 = NULL;
    }
    free(custom_communicationsender_response);
}

cJSON *custom_communicationsender_response_convertToJSON(custom_communicationsender_response_t *custom_communicationsender_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_communicationsender_response->fki_agent_id
    if(custom_communicationsender_response->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", custom_communicationsender_response->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationsender_response->fki_broker_id
    if(custom_communicationsender_response->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", custom_communicationsender_response->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationsender_response->fki_user_id
    if(custom_communicationsender_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", custom_communicationsender_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationsender_response->fki_mailboxshared_id
    if(custom_communicationsender_response->fki_mailboxshared_id) {
    if(cJSON_AddNumberToObject(item, "fkiMailboxsharedID", custom_communicationsender_response->fki_mailboxshared_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationsender_response->e_communicationsender_objecttype
    if (ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_NULL == custom_communicationsender_response->e_communicationsender_objecttype) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eCommunicationsenderObjecttype", e_communicationsender_objecttypecustom_communicationsender_response_ToString(custom_communicationsender_response->e_communicationsender_objecttype)) == NULL)
    {
    goto fail; //Enum
    }


    // custom_communicationsender_response->obj_contact_name
    if (!custom_communicationsender_response->obj_contact_name) {
        goto fail;
    }
    cJSON *obj_contact_name_local_JSON = custom_contact_name_response_convertToJSON(custom_communicationsender_response->obj_contact_name);
    if(obj_contact_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactName", obj_contact_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // custom_communicationsender_response->s_email_address
    if(custom_communicationsender_response->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", custom_communicationsender_response->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // custom_communicationsender_response->s_phone_e164
    if(custom_communicationsender_response->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", custom_communicationsender_response->s_phone_e164) == NULL) {
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

custom_communicationsender_response_t *custom_communicationsender_response_parseFromJSON(cJSON *custom_communicationsender_responseJSON){

    custom_communicationsender_response_t *custom_communicationsender_response_local_var = NULL;

    // define the local variable for custom_communicationsender_response->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // custom_communicationsender_response->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "fkiAgentID");
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_response->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "fkiBrokerID");
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_response->fki_mailboxshared_id
    cJSON *fki_mailboxshared_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "fkiMailboxsharedID");
    if (fki_mailboxshared_id) { 
    if(!cJSON_IsNumber(fki_mailboxshared_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_response->e_communicationsender_objecttype
    cJSON *e_communicationsender_objecttype = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "eCommunicationsenderObjecttype");
    if (!e_communicationsender_objecttype) {
        goto end;
    }

    ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttypeVariable;
    
    if(!cJSON_IsString(e_communicationsender_objecttype))
    {
    goto end; //Enum
    }
    e_communicationsender_objecttypeVariable = e_communicationsender_objecttypecustom_communicationsender_response_FromString(e_communicationsender_objecttype->valuestring);

    // custom_communicationsender_response->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "objContactName");
    if (!obj_contact_name) {
        goto end;
    }

    
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive

    // custom_communicationsender_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // custom_communicationsender_response->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "sPhoneE164");
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }


    custom_communicationsender_response_local_var = custom_communicationsender_response_create (
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_mailboxshared_id ? fki_mailboxshared_id->valuedouble : 0,
        e_communicationsender_objecttypeVariable,
        obj_contact_name_local_nonprim,
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        s_phone_e164 && !cJSON_IsNull(s_phone_e164) ? strdup(s_phone_e164->valuestring) : NULL
        );

    return custom_communicationsender_response_local_var;
end:
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    return NULL;

}
