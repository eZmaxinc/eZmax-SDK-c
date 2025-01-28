#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_communicationsender_response.h"


char* custom_communicationsender_response_e_communicationsender_objecttype_ToString(ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttype) {
    char* e_communicationsender_objecttypeArray[] =  { "NULL", "Agent", "Broker", "User", "Mailboxshared", "Phonelineshared" };
    return e_communicationsender_objecttypeArray[e_communicationsender_objecttype];
}

ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e custom_communicationsender_response_e_communicationsender_objecttype_FromString(char* e_communicationsender_objecttype){
    int stringToReturn = 0;
    char *e_communicationsender_objecttypeArray[] =  { "NULL", "Agent", "Broker", "User", "Mailboxshared", "Phonelineshared" };
    size_t sizeofArray = sizeof(e_communicationsender_objecttypeArray) / sizeof(e_communicationsender_objecttypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communicationsender_objecttype, e_communicationsender_objecttypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static custom_communicationsender_response_t *custom_communicationsender_response_create_internal(
    int fki_agent_id,
    int fki_broker_id,
    int fki_user_id,
    int fki_mailboxshared_id,
    int fki_phonelineshared_id,
    ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttype,
    custom_contact_name_response_t *obj_contact_name,
    email_response_compound_t *obj_email,
    phone_response_compound_t *obj_phone_fax,
    phone_response_compound_t *obj_phone_sms
    ) {
    custom_communicationsender_response_t *custom_communicationsender_response_local_var = malloc(sizeof(custom_communicationsender_response_t));
    if (!custom_communicationsender_response_local_var) {
        return NULL;
    }
    custom_communicationsender_response_local_var->fki_agent_id = fki_agent_id;
    custom_communicationsender_response_local_var->fki_broker_id = fki_broker_id;
    custom_communicationsender_response_local_var->fki_user_id = fki_user_id;
    custom_communicationsender_response_local_var->fki_mailboxshared_id = fki_mailboxshared_id;
    custom_communicationsender_response_local_var->fki_phonelineshared_id = fki_phonelineshared_id;
    custom_communicationsender_response_local_var->e_communicationsender_objecttype = e_communicationsender_objecttype;
    custom_communicationsender_response_local_var->obj_contact_name = obj_contact_name;
    custom_communicationsender_response_local_var->obj_email = obj_email;
    custom_communicationsender_response_local_var->obj_phone_fax = obj_phone_fax;
    custom_communicationsender_response_local_var->obj_phone_sms = obj_phone_sms;

    custom_communicationsender_response_local_var->_library_owned = 1;
    return custom_communicationsender_response_local_var;
}

__attribute__((deprecated)) custom_communicationsender_response_t *custom_communicationsender_response_create(
    int fki_agent_id,
    int fki_broker_id,
    int fki_user_id,
    int fki_mailboxshared_id,
    int fki_phonelineshared_id,
    ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttype,
    custom_contact_name_response_t *obj_contact_name,
    email_response_compound_t *obj_email,
    phone_response_compound_t *obj_phone_fax,
    phone_response_compound_t *obj_phone_sms
    ) {
    return custom_communicationsender_response_create_internal (
        fki_agent_id,
        fki_broker_id,
        fki_user_id,
        fki_mailboxshared_id,
        fki_phonelineshared_id,
        e_communicationsender_objecttype,
        obj_contact_name,
        obj_email,
        obj_phone_fax,
        obj_phone_sms
        );
}

void custom_communicationsender_response_free(custom_communicationsender_response_t *custom_communicationsender_response) {
    if(NULL == custom_communicationsender_response){
        return ;
    }
    if(custom_communicationsender_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_communicationsender_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_communicationsender_response->obj_contact_name) {
        custom_contact_name_response_free(custom_communicationsender_response->obj_contact_name);
        custom_communicationsender_response->obj_contact_name = NULL;
    }
    if (custom_communicationsender_response->obj_email) {
        email_response_compound_free(custom_communicationsender_response->obj_email);
        custom_communicationsender_response->obj_email = NULL;
    }
    if (custom_communicationsender_response->obj_phone_fax) {
        phone_response_compound_free(custom_communicationsender_response->obj_phone_fax);
        custom_communicationsender_response->obj_phone_fax = NULL;
    }
    if (custom_communicationsender_response->obj_phone_sms) {
        phone_response_compound_free(custom_communicationsender_response->obj_phone_sms);
        custom_communicationsender_response->obj_phone_sms = NULL;
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


    // custom_communicationsender_response->fki_phonelineshared_id
    if(custom_communicationsender_response->fki_phonelineshared_id) {
    if(cJSON_AddNumberToObject(item, "fkiPhonelinesharedID", custom_communicationsender_response->fki_phonelineshared_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationsender_response->e_communicationsender_objecttype
    if (ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_NULL == custom_communicationsender_response->e_communicationsender_objecttype) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eCommunicationsenderObjecttype", custom_communicationsender_response_e_communicationsender_objecttype_ToString(custom_communicationsender_response->e_communicationsender_objecttype)) == NULL)
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


    // custom_communicationsender_response->obj_email
    if(custom_communicationsender_response->obj_email) {
    cJSON *obj_email_local_JSON = email_response_compound_convertToJSON(custom_communicationsender_response->obj_email);
    if(obj_email_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmail", obj_email_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_communicationsender_response->obj_phone_fax
    if(custom_communicationsender_response->obj_phone_fax) {
    cJSON *obj_phone_fax_local_JSON = phone_response_compound_convertToJSON(custom_communicationsender_response->obj_phone_fax);
    if(obj_phone_fax_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneFax", obj_phone_fax_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_communicationsender_response->obj_phone_sms
    if(custom_communicationsender_response->obj_phone_sms) {
    cJSON *obj_phone_sms_local_JSON = phone_response_compound_convertToJSON(custom_communicationsender_response->obj_phone_sms);
    if(obj_phone_sms_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneSMS", obj_phone_sms_local_JSON);
    if(item->child == NULL) {
    goto fail;
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

    // define the local variable for custom_communicationsender_response->obj_email
    email_response_compound_t *obj_email_local_nonprim = NULL;

    // define the local variable for custom_communicationsender_response->obj_phone_fax
    phone_response_compound_t *obj_phone_fax_local_nonprim = NULL;

    // define the local variable for custom_communicationsender_response->obj_phone_sms
    phone_response_compound_t *obj_phone_sms_local_nonprim = NULL;

    // custom_communicationsender_response->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_response->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_response->fki_mailboxshared_id
    cJSON *fki_mailboxshared_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "fkiMailboxsharedID");
    if (cJSON_IsNull(fki_mailboxshared_id)) {
        fki_mailboxshared_id = NULL;
    }
    if (fki_mailboxshared_id) { 
    if(!cJSON_IsNumber(fki_mailboxshared_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_response->fki_phonelineshared_id
    cJSON *fki_phonelineshared_id = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "fkiPhonelinesharedID");
    if (cJSON_IsNull(fki_phonelineshared_id)) {
        fki_phonelineshared_id = NULL;
    }
    if (fki_phonelineshared_id) { 
    if(!cJSON_IsNumber(fki_phonelineshared_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationsender_response->e_communicationsender_objecttype
    cJSON *e_communicationsender_objecttype = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "eCommunicationsenderObjecttype");
    if (cJSON_IsNull(e_communicationsender_objecttype)) {
        e_communicationsender_objecttype = NULL;
    }
    if (!e_communicationsender_objecttype) {
        goto end;
    }

    ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttypeVariable;
    
    if(!cJSON_IsString(e_communicationsender_objecttype))
    {
    goto end; //Enum
    }
    e_communicationsender_objecttypeVariable = custom_communicationsender_response_e_communicationsender_objecttype_FromString(e_communicationsender_objecttype->valuestring);

    // custom_communicationsender_response->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "objContactName");
    if (cJSON_IsNull(obj_contact_name)) {
        obj_contact_name = NULL;
    }
    if (!obj_contact_name) {
        goto end;
    }

    
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive

    // custom_communicationsender_response->obj_email
    cJSON *obj_email = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "objEmail");
    if (cJSON_IsNull(obj_email)) {
        obj_email = NULL;
    }
    if (obj_email) { 
    obj_email_local_nonprim = email_response_compound_parseFromJSON(obj_email); //nonprimitive
    }

    // custom_communicationsender_response->obj_phone_fax
    cJSON *obj_phone_fax = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "objPhoneFax");
    if (cJSON_IsNull(obj_phone_fax)) {
        obj_phone_fax = NULL;
    }
    if (obj_phone_fax) { 
    obj_phone_fax_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_fax); //nonprimitive
    }

    // custom_communicationsender_response->obj_phone_sms
    cJSON *obj_phone_sms = cJSON_GetObjectItemCaseSensitive(custom_communicationsender_responseJSON, "objPhoneSMS");
    if (cJSON_IsNull(obj_phone_sms)) {
        obj_phone_sms = NULL;
    }
    if (obj_phone_sms) { 
    obj_phone_sms_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_sms); //nonprimitive
    }


    custom_communicationsender_response_local_var = custom_communicationsender_response_create_internal (
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_mailboxshared_id ? fki_mailboxshared_id->valuedouble : 0,
        fki_phonelineshared_id ? fki_phonelineshared_id->valuedouble : 0,
        e_communicationsender_objecttypeVariable,
        obj_contact_name_local_nonprim,
        obj_email ? obj_email_local_nonprim : NULL,
        obj_phone_fax ? obj_phone_fax_local_nonprim : NULL,
        obj_phone_sms ? obj_phone_sms_local_nonprim : NULL
        );

    return custom_communicationsender_response_local_var;
end:
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    if (obj_email_local_nonprim) {
        email_response_compound_free(obj_email_local_nonprim);
        obj_email_local_nonprim = NULL;
    }
    if (obj_phone_fax_local_nonprim) {
        phone_response_compound_free(obj_phone_fax_local_nonprim);
        obj_phone_fax_local_nonprim = NULL;
    }
    if (obj_phone_sms_local_nonprim) {
        phone_response_compound_free(obj_phone_sms_local_nonprim);
        obj_phone_sms_local_nonprim = NULL;
    }
    return NULL;

}
