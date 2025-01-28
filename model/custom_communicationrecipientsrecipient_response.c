#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_communicationrecipientsrecipient_response.h"


char* custom_communicationrecipientsrecipient_response_e_communicationrecipientsrecipient_objecttype_ToString(ezmax_api_definition__full_custom_communicationrecipientsrecipient_response_ECOMMUNICATIONRECIPIENTSRECIPIENTOBJECTTYPE_e e_communicationrecipientsrecipient_objecttype) {
    char* e_communicationrecipientsrecipient_objecttypeArray[] =  { "NULL", "Agent", "Agentincorporation", "Assistant", "Broker", "Contact", "Customer", "Employee", "Externalbroker", "Ezcomagent", "Ezcomcompany", "Ezsignsigner", "Franchiseoffice", "Notary", "Rewardmember", "Supplier", "User" };
    return e_communicationrecipientsrecipient_objecttypeArray[e_communicationrecipientsrecipient_objecttype];
}

ezmax_api_definition__full_custom_communicationrecipientsrecipient_response_ECOMMUNICATIONRECIPIENTSRECIPIENTOBJECTTYPE_e custom_communicationrecipientsrecipient_response_e_communicationrecipientsrecipient_objecttype_FromString(char* e_communicationrecipientsrecipient_objecttype){
    int stringToReturn = 0;
    char *e_communicationrecipientsrecipient_objecttypeArray[] =  { "NULL", "Agent", "Agentincorporation", "Assistant", "Broker", "Contact", "Customer", "Employee", "Externalbroker", "Ezcomagent", "Ezcomcompany", "Ezsignsigner", "Franchiseoffice", "Notary", "Rewardmember", "Supplier", "User" };
    size_t sizeofArray = sizeof(e_communicationrecipientsrecipient_objecttypeArray) / sizeof(e_communicationrecipientsrecipient_objecttypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communicationrecipientsrecipient_objecttype, e_communicationrecipientsrecipient_objecttypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static custom_communicationrecipientsrecipient_response_t *custom_communicationrecipientsrecipient_response_create_internal(
    int fki_agent_id,
    int fki_broker_id,
    int fki_contact_id,
    int fki_customer_id,
    int fki_employee_id,
    int fki_ezsignsigner_id,
    int fki_franchiseoffice_id,
    int fki_user_id,
    int fki_agentincorporation_id,
    int fki_assistant_id,
    int fki_externalbroker_id,
    int fki_ezcomagent_id,
    int fki_notary_id,
    int fki_rewardmember_id,
    int fki_supplier_id,
    ezmax_api_definition__full_custom_communicationrecipientsrecipient_response_ECOMMUNICATIONRECIPIENTSRECIPIENTOBJECTTYPE_e e_communicationrecipientsrecipient_objecttype,
    custom_contact_name_response_t *obj_contact_name,
    email_response_compound_t *obj_email,
    phone_response_compound_t *obj_phone_fax,
    phone_response_compound_t *obj_phone_sms
    ) {
    custom_communicationrecipientsrecipient_response_t *custom_communicationrecipientsrecipient_response_local_var = malloc(sizeof(custom_communicationrecipientsrecipient_response_t));
    if (!custom_communicationrecipientsrecipient_response_local_var) {
        return NULL;
    }
    custom_communicationrecipientsrecipient_response_local_var->fki_agent_id = fki_agent_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_broker_id = fki_broker_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_contact_id = fki_contact_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_customer_id = fki_customer_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_employee_id = fki_employee_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_franchiseoffice_id = fki_franchiseoffice_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_user_id = fki_user_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_agentincorporation_id = fki_agentincorporation_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_assistant_id = fki_assistant_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_externalbroker_id = fki_externalbroker_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_ezcomagent_id = fki_ezcomagent_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_notary_id = fki_notary_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_rewardmember_id = fki_rewardmember_id;
    custom_communicationrecipientsrecipient_response_local_var->fki_supplier_id = fki_supplier_id;
    custom_communicationrecipientsrecipient_response_local_var->e_communicationrecipientsrecipient_objecttype = e_communicationrecipientsrecipient_objecttype;
    custom_communicationrecipientsrecipient_response_local_var->obj_contact_name = obj_contact_name;
    custom_communicationrecipientsrecipient_response_local_var->obj_email = obj_email;
    custom_communicationrecipientsrecipient_response_local_var->obj_phone_fax = obj_phone_fax;
    custom_communicationrecipientsrecipient_response_local_var->obj_phone_sms = obj_phone_sms;

    custom_communicationrecipientsrecipient_response_local_var->_library_owned = 1;
    return custom_communicationrecipientsrecipient_response_local_var;
}

__attribute__((deprecated)) custom_communicationrecipientsrecipient_response_t *custom_communicationrecipientsrecipient_response_create(
    int fki_agent_id,
    int fki_broker_id,
    int fki_contact_id,
    int fki_customer_id,
    int fki_employee_id,
    int fki_ezsignsigner_id,
    int fki_franchiseoffice_id,
    int fki_user_id,
    int fki_agentincorporation_id,
    int fki_assistant_id,
    int fki_externalbroker_id,
    int fki_ezcomagent_id,
    int fki_notary_id,
    int fki_rewardmember_id,
    int fki_supplier_id,
    ezmax_api_definition__full_custom_communicationrecipientsrecipient_response_ECOMMUNICATIONRECIPIENTSRECIPIENTOBJECTTYPE_e e_communicationrecipientsrecipient_objecttype,
    custom_contact_name_response_t *obj_contact_name,
    email_response_compound_t *obj_email,
    phone_response_compound_t *obj_phone_fax,
    phone_response_compound_t *obj_phone_sms
    ) {
    return custom_communicationrecipientsrecipient_response_create_internal (
        fki_agent_id,
        fki_broker_id,
        fki_contact_id,
        fki_customer_id,
        fki_employee_id,
        fki_ezsignsigner_id,
        fki_franchiseoffice_id,
        fki_user_id,
        fki_agentincorporation_id,
        fki_assistant_id,
        fki_externalbroker_id,
        fki_ezcomagent_id,
        fki_notary_id,
        fki_rewardmember_id,
        fki_supplier_id,
        e_communicationrecipientsrecipient_objecttype,
        obj_contact_name,
        obj_email,
        obj_phone_fax,
        obj_phone_sms
        );
}

void custom_communicationrecipientsrecipient_response_free(custom_communicationrecipientsrecipient_response_t *custom_communicationrecipientsrecipient_response) {
    if(NULL == custom_communicationrecipientsrecipient_response){
        return ;
    }
    if(custom_communicationrecipientsrecipient_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_communicationrecipientsrecipient_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_communicationrecipientsrecipient_response->obj_contact_name) {
        custom_contact_name_response_free(custom_communicationrecipientsrecipient_response->obj_contact_name);
        custom_communicationrecipientsrecipient_response->obj_contact_name = NULL;
    }
    if (custom_communicationrecipientsrecipient_response->obj_email) {
        email_response_compound_free(custom_communicationrecipientsrecipient_response->obj_email);
        custom_communicationrecipientsrecipient_response->obj_email = NULL;
    }
    if (custom_communicationrecipientsrecipient_response->obj_phone_fax) {
        phone_response_compound_free(custom_communicationrecipientsrecipient_response->obj_phone_fax);
        custom_communicationrecipientsrecipient_response->obj_phone_fax = NULL;
    }
    if (custom_communicationrecipientsrecipient_response->obj_phone_sms) {
        phone_response_compound_free(custom_communicationrecipientsrecipient_response->obj_phone_sms);
        custom_communicationrecipientsrecipient_response->obj_phone_sms = NULL;
    }
    free(custom_communicationrecipientsrecipient_response);
}

cJSON *custom_communicationrecipientsrecipient_response_convertToJSON(custom_communicationrecipientsrecipient_response_t *custom_communicationrecipientsrecipient_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_communicationrecipientsrecipient_response->fki_agent_id
    if(custom_communicationrecipientsrecipient_response->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", custom_communicationrecipientsrecipient_response->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_broker_id
    if(custom_communicationrecipientsrecipient_response->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", custom_communicationrecipientsrecipient_response->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_contact_id
    if(custom_communicationrecipientsrecipient_response->fki_contact_id) {
    if(cJSON_AddNumberToObject(item, "fkiContactID", custom_communicationrecipientsrecipient_response->fki_contact_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_customer_id
    if(custom_communicationrecipientsrecipient_response->fki_customer_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomerID", custom_communicationrecipientsrecipient_response->fki_customer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_employee_id
    if(custom_communicationrecipientsrecipient_response->fki_employee_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmployeeID", custom_communicationrecipientsrecipient_response->fki_employee_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_ezsignsigner_id
    if(custom_communicationrecipientsrecipient_response->fki_ezsignsigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", custom_communicationrecipientsrecipient_response->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_franchiseoffice_id
    if(custom_communicationrecipientsrecipient_response->fki_franchiseoffice_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchiseofficeID", custom_communicationrecipientsrecipient_response->fki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_user_id
    if(custom_communicationrecipientsrecipient_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", custom_communicationrecipientsrecipient_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_agentincorporation_id
    if(custom_communicationrecipientsrecipient_response->fki_agentincorporation_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentincorporationID", custom_communicationrecipientsrecipient_response->fki_agentincorporation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_assistant_id
    if(custom_communicationrecipientsrecipient_response->fki_assistant_id) {
    if(cJSON_AddNumberToObject(item, "fkiAssistantID", custom_communicationrecipientsrecipient_response->fki_assistant_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_externalbroker_id
    if(custom_communicationrecipientsrecipient_response->fki_externalbroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiExternalbrokerID", custom_communicationrecipientsrecipient_response->fki_externalbroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_ezcomagent_id
    if(custom_communicationrecipientsrecipient_response->fki_ezcomagent_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzcomagentID", custom_communicationrecipientsrecipient_response->fki_ezcomagent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_notary_id
    if(custom_communicationrecipientsrecipient_response->fki_notary_id) {
    if(cJSON_AddNumberToObject(item, "fkiNotaryID", custom_communicationrecipientsrecipient_response->fki_notary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_rewardmember_id
    if(custom_communicationrecipientsrecipient_response->fki_rewardmember_id) {
    if(cJSON_AddNumberToObject(item, "fkiRewardmemberID", custom_communicationrecipientsrecipient_response->fki_rewardmember_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->fki_supplier_id
    if(custom_communicationrecipientsrecipient_response->fki_supplier_id) {
    if(cJSON_AddNumberToObject(item, "fkiSupplierID", custom_communicationrecipientsrecipient_response->fki_supplier_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_communicationrecipientsrecipient_response->e_communicationrecipientsrecipient_objecttype
    if (ezmax_api_definition__full_custom_communicationrecipientsrecipient_response_ECOMMUNICATIONRECIPIENTSRECIPIENTOBJECTTYPE_NULL == custom_communicationrecipientsrecipient_response->e_communicationrecipientsrecipient_objecttype) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eCommunicationrecipientsrecipientObjecttype", custom_communicationrecipientsrecipient_response_e_communicationrecipientsrecipient_objecttype_ToString(custom_communicationrecipientsrecipient_response->e_communicationrecipientsrecipient_objecttype)) == NULL)
    {
    goto fail; //Enum
    }


    // custom_communicationrecipientsrecipient_response->obj_contact_name
    if (!custom_communicationrecipientsrecipient_response->obj_contact_name) {
        goto fail;
    }
    cJSON *obj_contact_name_local_JSON = custom_contact_name_response_convertToJSON(custom_communicationrecipientsrecipient_response->obj_contact_name);
    if(obj_contact_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactName", obj_contact_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // custom_communicationrecipientsrecipient_response->obj_email
    if(custom_communicationrecipientsrecipient_response->obj_email) {
    cJSON *obj_email_local_JSON = email_response_compound_convertToJSON(custom_communicationrecipientsrecipient_response->obj_email);
    if(obj_email_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmail", obj_email_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_communicationrecipientsrecipient_response->obj_phone_fax
    if(custom_communicationrecipientsrecipient_response->obj_phone_fax) {
    cJSON *obj_phone_fax_local_JSON = phone_response_compound_convertToJSON(custom_communicationrecipientsrecipient_response->obj_phone_fax);
    if(obj_phone_fax_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneFax", obj_phone_fax_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_communicationrecipientsrecipient_response->obj_phone_sms
    if(custom_communicationrecipientsrecipient_response->obj_phone_sms) {
    cJSON *obj_phone_sms_local_JSON = phone_response_compound_convertToJSON(custom_communicationrecipientsrecipient_response->obj_phone_sms);
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

custom_communicationrecipientsrecipient_response_t *custom_communicationrecipientsrecipient_response_parseFromJSON(cJSON *custom_communicationrecipientsrecipient_responseJSON){

    custom_communicationrecipientsrecipient_response_t *custom_communicationrecipientsrecipient_response_local_var = NULL;

    // define the local variable for custom_communicationrecipientsrecipient_response->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // define the local variable for custom_communicationrecipientsrecipient_response->obj_email
    email_response_compound_t *obj_email_local_nonprim = NULL;

    // define the local variable for custom_communicationrecipientsrecipient_response->obj_phone_fax
    phone_response_compound_t *obj_phone_fax_local_nonprim = NULL;

    // define the local variable for custom_communicationrecipientsrecipient_response->obj_phone_sms
    phone_response_compound_t *obj_phone_sms_local_nonprim = NULL;

    // custom_communicationrecipientsrecipient_response->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_contact_id
    cJSON *fki_contact_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiContactID");
    if (cJSON_IsNull(fki_contact_id)) {
        fki_contact_id = NULL;
    }
    if (fki_contact_id) { 
    if(!cJSON_IsNumber(fki_contact_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_customer_id
    cJSON *fki_customer_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiCustomerID");
    if (cJSON_IsNull(fki_customer_id)) {
        fki_customer_id = NULL;
    }
    if (fki_customer_id) { 
    if(!cJSON_IsNumber(fki_customer_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_employee_id
    cJSON *fki_employee_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiEmployeeID");
    if (cJSON_IsNull(fki_employee_id)) {
        fki_employee_id = NULL;
    }
    if (fki_employee_id) { 
    if(!cJSON_IsNumber(fki_employee_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiEzsignsignerID");
    if (cJSON_IsNull(fki_ezsignsigner_id)) {
        fki_ezsignsigner_id = NULL;
    }
    if (fki_ezsignsigner_id) { 
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiFranchiseofficeID");
    if (cJSON_IsNull(fki_franchiseoffice_id)) {
        fki_franchiseoffice_id = NULL;
    }
    if (fki_franchiseoffice_id) { 
    if(!cJSON_IsNumber(fki_franchiseoffice_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_agentincorporation_id
    cJSON *fki_agentincorporation_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiAgentincorporationID");
    if (cJSON_IsNull(fki_agentincorporation_id)) {
        fki_agentincorporation_id = NULL;
    }
    if (fki_agentincorporation_id) { 
    if(!cJSON_IsNumber(fki_agentincorporation_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_assistant_id
    cJSON *fki_assistant_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiAssistantID");
    if (cJSON_IsNull(fki_assistant_id)) {
        fki_assistant_id = NULL;
    }
    if (fki_assistant_id) { 
    if(!cJSON_IsNumber(fki_assistant_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_externalbroker_id
    cJSON *fki_externalbroker_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiExternalbrokerID");
    if (cJSON_IsNull(fki_externalbroker_id)) {
        fki_externalbroker_id = NULL;
    }
    if (fki_externalbroker_id) { 
    if(!cJSON_IsNumber(fki_externalbroker_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_ezcomagent_id
    cJSON *fki_ezcomagent_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiEzcomagentID");
    if (cJSON_IsNull(fki_ezcomagent_id)) {
        fki_ezcomagent_id = NULL;
    }
    if (fki_ezcomagent_id) { 
    if(!cJSON_IsNumber(fki_ezcomagent_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_notary_id
    cJSON *fki_notary_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiNotaryID");
    if (cJSON_IsNull(fki_notary_id)) {
        fki_notary_id = NULL;
    }
    if (fki_notary_id) { 
    if(!cJSON_IsNumber(fki_notary_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_rewardmember_id
    cJSON *fki_rewardmember_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiRewardmemberID");
    if (cJSON_IsNull(fki_rewardmember_id)) {
        fki_rewardmember_id = NULL;
    }
    if (fki_rewardmember_id) { 
    if(!cJSON_IsNumber(fki_rewardmember_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->fki_supplier_id
    cJSON *fki_supplier_id = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "fkiSupplierID");
    if (cJSON_IsNull(fki_supplier_id)) {
        fki_supplier_id = NULL;
    }
    if (fki_supplier_id) { 
    if(!cJSON_IsNumber(fki_supplier_id))
    {
    goto end; //Numeric
    }
    }

    // custom_communicationrecipientsrecipient_response->e_communicationrecipientsrecipient_objecttype
    cJSON *e_communicationrecipientsrecipient_objecttype = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "eCommunicationrecipientsrecipientObjecttype");
    if (cJSON_IsNull(e_communicationrecipientsrecipient_objecttype)) {
        e_communicationrecipientsrecipient_objecttype = NULL;
    }
    if (!e_communicationrecipientsrecipient_objecttype) {
        goto end;
    }

    ezmax_api_definition__full_custom_communicationrecipientsrecipient_response_ECOMMUNICATIONRECIPIENTSRECIPIENTOBJECTTYPE_e e_communicationrecipientsrecipient_objecttypeVariable;
    
    if(!cJSON_IsString(e_communicationrecipientsrecipient_objecttype))
    {
    goto end; //Enum
    }
    e_communicationrecipientsrecipient_objecttypeVariable = custom_communicationrecipientsrecipient_response_e_communicationrecipientsrecipient_objecttype_FromString(e_communicationrecipientsrecipient_objecttype->valuestring);

    // custom_communicationrecipientsrecipient_response->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "objContactName");
    if (cJSON_IsNull(obj_contact_name)) {
        obj_contact_name = NULL;
    }
    if (!obj_contact_name) {
        goto end;
    }

    
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive

    // custom_communicationrecipientsrecipient_response->obj_email
    cJSON *obj_email = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "objEmail");
    if (cJSON_IsNull(obj_email)) {
        obj_email = NULL;
    }
    if (obj_email) { 
    obj_email_local_nonprim = email_response_compound_parseFromJSON(obj_email); //nonprimitive
    }

    // custom_communicationrecipientsrecipient_response->obj_phone_fax
    cJSON *obj_phone_fax = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "objPhoneFax");
    if (cJSON_IsNull(obj_phone_fax)) {
        obj_phone_fax = NULL;
    }
    if (obj_phone_fax) { 
    obj_phone_fax_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_fax); //nonprimitive
    }

    // custom_communicationrecipientsrecipient_response->obj_phone_sms
    cJSON *obj_phone_sms = cJSON_GetObjectItemCaseSensitive(custom_communicationrecipientsrecipient_responseJSON, "objPhoneSMS");
    if (cJSON_IsNull(obj_phone_sms)) {
        obj_phone_sms = NULL;
    }
    if (obj_phone_sms) { 
    obj_phone_sms_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_sms); //nonprimitive
    }


    custom_communicationrecipientsrecipient_response_local_var = custom_communicationrecipientsrecipient_response_create_internal (
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_contact_id ? fki_contact_id->valuedouble : 0,
        fki_customer_id ? fki_customer_id->valuedouble : 0,
        fki_employee_id ? fki_employee_id->valuedouble : 0,
        fki_ezsignsigner_id ? fki_ezsignsigner_id->valuedouble : 0,
        fki_franchiseoffice_id ? fki_franchiseoffice_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_agentincorporation_id ? fki_agentincorporation_id->valuedouble : 0,
        fki_assistant_id ? fki_assistant_id->valuedouble : 0,
        fki_externalbroker_id ? fki_externalbroker_id->valuedouble : 0,
        fki_ezcomagent_id ? fki_ezcomagent_id->valuedouble : 0,
        fki_notary_id ? fki_notary_id->valuedouble : 0,
        fki_rewardmember_id ? fki_rewardmember_id->valuedouble : 0,
        fki_supplier_id ? fki_supplier_id->valuedouble : 0,
        e_communicationrecipientsrecipient_objecttypeVariable,
        obj_contact_name_local_nonprim,
        obj_email ? obj_email_local_nonprim : NULL,
        obj_phone_fax ? obj_phone_fax_local_nonprim : NULL,
        obj_phone_sms ? obj_phone_sms_local_nonprim : NULL
        );

    return custom_communicationrecipientsrecipient_response_local_var;
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
