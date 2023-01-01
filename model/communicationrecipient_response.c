#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationrecipient_response.h"


char* e_communicationrecipient_typecommunicationrecipient_response_ToString(ezmax_api_definition__full_communicationrecipient_response__e e_communicationrecipient_type) {
    char* e_communicationrecipient_typeArray[] =  { "NULL", "To", "Cc", "Bcc" };
	return e_communicationrecipient_typeArray[e_communicationrecipient_type];
}

ezmax_api_definition__full_communicationrecipient_response__e e_communicationrecipient_typecommunicationrecipient_response_FromString(char* e_communicationrecipient_type){
    int stringToReturn = 0;
    char *e_communicationrecipient_typeArray[] =  { "NULL", "To", "Cc", "Bcc" };
    size_t sizeofArray = sizeof(e_communicationrecipient_typeArray) / sizeof(e_communicationrecipient_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_communicationrecipient_type, e_communicationrecipient_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

communicationrecipient_response_t *communicationrecipient_response_create(
    int pki_communicationrecipient_id,
    int fki_agent_id,
    int fki_broker_id,
    int fki_contact_id,
    int fki_customer_id,
    int fki_employee_id,
    int fki_ezsignsigner_id,
    int fki_franchiseoffice_id,
    int fki_user_id,
    char *s_email_address,
    field_e_communicationrecipient_type_t *e_communicationrecipient_type,
    int fki_agentincorporation_id,
    int fki_assistant_id,
    int fki_externalbroker_id,
    int fki_ezcomagent_id,
    int fki_notary_id,
    int fki_rewardmember_id,
    int fki_supplier_id,
    phone_response_compound_t *obj_phone_sms
    ) {
    communicationrecipient_response_t *communicationrecipient_response_local_var = malloc(sizeof(communicationrecipient_response_t));
    if (!communicationrecipient_response_local_var) {
        return NULL;
    }
    communicationrecipient_response_local_var->pki_communicationrecipient_id = pki_communicationrecipient_id;
    communicationrecipient_response_local_var->fki_agent_id = fki_agent_id;
    communicationrecipient_response_local_var->fki_broker_id = fki_broker_id;
    communicationrecipient_response_local_var->fki_contact_id = fki_contact_id;
    communicationrecipient_response_local_var->fki_customer_id = fki_customer_id;
    communicationrecipient_response_local_var->fki_employee_id = fki_employee_id;
    communicationrecipient_response_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    communicationrecipient_response_local_var->fki_franchiseoffice_id = fki_franchiseoffice_id;
    communicationrecipient_response_local_var->fki_user_id = fki_user_id;
    communicationrecipient_response_local_var->s_email_address = s_email_address;
    communicationrecipient_response_local_var->e_communicationrecipient_type = e_communicationrecipient_type;
    communicationrecipient_response_local_var->fki_agentincorporation_id = fki_agentincorporation_id;
    communicationrecipient_response_local_var->fki_assistant_id = fki_assistant_id;
    communicationrecipient_response_local_var->fki_externalbroker_id = fki_externalbroker_id;
    communicationrecipient_response_local_var->fki_ezcomagent_id = fki_ezcomagent_id;
    communicationrecipient_response_local_var->fki_notary_id = fki_notary_id;
    communicationrecipient_response_local_var->fki_rewardmember_id = fki_rewardmember_id;
    communicationrecipient_response_local_var->fki_supplier_id = fki_supplier_id;
    communicationrecipient_response_local_var->obj_phone_sms = obj_phone_sms;

    return communicationrecipient_response_local_var;
}


void communicationrecipient_response_free(communicationrecipient_response_t *communicationrecipient_response) {
    if(NULL == communicationrecipient_response){
        return ;
    }
    listEntry_t *listEntry;
    if (communicationrecipient_response->s_email_address) {
        free(communicationrecipient_response->s_email_address);
        communicationrecipient_response->s_email_address = NULL;
    }
    if (communicationrecipient_response->e_communicationrecipient_type) {
        field_e_communicationrecipient_type_free(communicationrecipient_response->e_communicationrecipient_type);
        communicationrecipient_response->e_communicationrecipient_type = NULL;
    }
    if (communicationrecipient_response->obj_phone_sms) {
        phone_response_compound_free(communicationrecipient_response->obj_phone_sms);
        communicationrecipient_response->obj_phone_sms = NULL;
    }
    free(communicationrecipient_response);
}

cJSON *communicationrecipient_response_convertToJSON(communicationrecipient_response_t *communicationrecipient_response) {
    cJSON *item = cJSON_CreateObject();

    // communicationrecipient_response->pki_communicationrecipient_id
    if (!communicationrecipient_response->pki_communicationrecipient_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationrecipientID", communicationrecipient_response->pki_communicationrecipient_id) == NULL) {
    goto fail; //Numeric
    }


    // communicationrecipient_response->fki_agent_id
    if(communicationrecipient_response->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", communicationrecipient_response->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_broker_id
    if(communicationrecipient_response->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", communicationrecipient_response->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_contact_id
    if(communicationrecipient_response->fki_contact_id) {
    if(cJSON_AddNumberToObject(item, "fkiContactID", communicationrecipient_response->fki_contact_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_customer_id
    if(communicationrecipient_response->fki_customer_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomerID", communicationrecipient_response->fki_customer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_employee_id
    if(communicationrecipient_response->fki_employee_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmployeeID", communicationrecipient_response->fki_employee_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_ezsignsigner_id
    if(communicationrecipient_response->fki_ezsignsigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", communicationrecipient_response->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_franchiseoffice_id
    if(communicationrecipient_response->fki_franchiseoffice_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchiseofficeID", communicationrecipient_response->fki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_user_id
    if(communicationrecipient_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", communicationrecipient_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->s_email_address
    if(communicationrecipient_response->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", communicationrecipient_response->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // communicationrecipient_response->e_communicationrecipient_type
    if(communicationrecipient_response->e_communicationrecipient_type != ezmax_api_definition__full_communicationrecipient_response__NULL) {
    cJSON *e_communicationrecipient_type_local_JSON = field_e_communicationrecipient_type_convertToJSON(communicationrecipient_response->e_communicationrecipient_type);
    if(e_communicationrecipient_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationrecipientType", e_communicationrecipient_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // communicationrecipient_response->fki_agentincorporation_id
    if(communicationrecipient_response->fki_agentincorporation_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentincorporationID", communicationrecipient_response->fki_agentincorporation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_assistant_id
    if(communicationrecipient_response->fki_assistant_id) {
    if(cJSON_AddNumberToObject(item, "fkiAssistantID", communicationrecipient_response->fki_assistant_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_externalbroker_id
    if(communicationrecipient_response->fki_externalbroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiExternalbrokerID", communicationrecipient_response->fki_externalbroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_ezcomagent_id
    if(communicationrecipient_response->fki_ezcomagent_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzcomagentID", communicationrecipient_response->fki_ezcomagent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_notary_id
    if(communicationrecipient_response->fki_notary_id) {
    if(cJSON_AddNumberToObject(item, "fkiNotaryID", communicationrecipient_response->fki_notary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_rewardmember_id
    if(communicationrecipient_response->fki_rewardmember_id) {
    if(cJSON_AddNumberToObject(item, "fkiRewardmemberID", communicationrecipient_response->fki_rewardmember_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->fki_supplier_id
    if(communicationrecipient_response->fki_supplier_id) {
    if(cJSON_AddNumberToObject(item, "fkiSupplierID", communicationrecipient_response->fki_supplier_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_response->obj_phone_sms
    if(communicationrecipient_response->obj_phone_sms) {
    cJSON *obj_phone_sms_local_JSON = phone_response_compound_convertToJSON(communicationrecipient_response->obj_phone_sms);
    if(obj_phone_sms_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPhoneSms", obj_phone_sms_local_JSON);
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

communicationrecipient_response_t *communicationrecipient_response_parseFromJSON(cJSON *communicationrecipient_responseJSON){

    communicationrecipient_response_t *communicationrecipient_response_local_var = NULL;

    // define the local variable for communicationrecipient_response->e_communicationrecipient_type
    field_e_communicationrecipient_type_t *e_communicationrecipient_type_local_nonprim = NULL;

    // define the local variable for communicationrecipient_response->obj_phone_sms
    phone_response_compound_t *obj_phone_sms_local_nonprim = NULL;

    // communicationrecipient_response->pki_communicationrecipient_id
    cJSON *pki_communicationrecipient_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "pkiCommunicationrecipientID");
    if (!pki_communicationrecipient_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communicationrecipient_id))
    {
    goto end; //Numeric
    }

    // communicationrecipient_response->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiAgentID");
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiBrokerID");
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_contact_id
    cJSON *fki_contact_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiContactID");
    if (fki_contact_id) { 
    if(!cJSON_IsNumber(fki_contact_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_customer_id
    cJSON *fki_customer_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiCustomerID");
    if (fki_customer_id) { 
    if(!cJSON_IsNumber(fki_customer_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_employee_id
    cJSON *fki_employee_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiEmployeeID");
    if (fki_employee_id) { 
    if(!cJSON_IsNumber(fki_employee_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiEzsignsignerID");
    if (fki_ezsignsigner_id) { 
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiFranchiseofficeID");
    if (fki_franchiseoffice_id) { 
    if(!cJSON_IsNumber(fki_franchiseoffice_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "sEmailAddress");
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address))
    {
    goto end; //String
    }
    }

    // communicationrecipient_response->e_communicationrecipient_type
    cJSON *e_communicationrecipient_type = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "eCommunicationrecipientType");
    if (e_communicationrecipient_type) { 
    e_communicationrecipient_type_local_nonprim = field_e_communicationrecipient_type_parseFromJSON(e_communicationrecipient_type); //custom
    }

    // communicationrecipient_response->fki_agentincorporation_id
    cJSON *fki_agentincorporation_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiAgentincorporationID");
    if (fki_agentincorporation_id) { 
    if(!cJSON_IsNumber(fki_agentincorporation_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_assistant_id
    cJSON *fki_assistant_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiAssistantID");
    if (fki_assistant_id) { 
    if(!cJSON_IsNumber(fki_assistant_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_externalbroker_id
    cJSON *fki_externalbroker_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiExternalbrokerID");
    if (fki_externalbroker_id) { 
    if(!cJSON_IsNumber(fki_externalbroker_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_ezcomagent_id
    cJSON *fki_ezcomagent_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiEzcomagentID");
    if (fki_ezcomagent_id) { 
    if(!cJSON_IsNumber(fki_ezcomagent_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_notary_id
    cJSON *fki_notary_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiNotaryID");
    if (fki_notary_id) { 
    if(!cJSON_IsNumber(fki_notary_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_rewardmember_id
    cJSON *fki_rewardmember_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiRewardmemberID");
    if (fki_rewardmember_id) { 
    if(!cJSON_IsNumber(fki_rewardmember_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->fki_supplier_id
    cJSON *fki_supplier_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "fkiSupplierID");
    if (fki_supplier_id) { 
    if(!cJSON_IsNumber(fki_supplier_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_response->obj_phone_sms
    cJSON *obj_phone_sms = cJSON_GetObjectItemCaseSensitive(communicationrecipient_responseJSON, "objPhoneSms");
    if (obj_phone_sms) { 
    obj_phone_sms_local_nonprim = phone_response_compound_parseFromJSON(obj_phone_sms); //nonprimitive
    }


    communicationrecipient_response_local_var = communicationrecipient_response_create (
        pki_communicationrecipient_id->valuedouble,
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_contact_id ? fki_contact_id->valuedouble : 0,
        fki_customer_id ? fki_customer_id->valuedouble : 0,
        fki_employee_id ? fki_employee_id->valuedouble : 0,
        fki_ezsignsigner_id ? fki_ezsignsigner_id->valuedouble : 0,
        fki_franchiseoffice_id ? fki_franchiseoffice_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        s_email_address ? strdup(s_email_address->valuestring) : NULL,
        e_communicationrecipient_type ? e_communicationrecipient_type_local_nonprim : NULL,
        fki_agentincorporation_id ? fki_agentincorporation_id->valuedouble : 0,
        fki_assistant_id ? fki_assistant_id->valuedouble : 0,
        fki_externalbroker_id ? fki_externalbroker_id->valuedouble : 0,
        fki_ezcomagent_id ? fki_ezcomagent_id->valuedouble : 0,
        fki_notary_id ? fki_notary_id->valuedouble : 0,
        fki_rewardmember_id ? fki_rewardmember_id->valuedouble : 0,
        fki_supplier_id ? fki_supplier_id->valuedouble : 0,
        obj_phone_sms ? obj_phone_sms_local_nonprim : NULL
        );

    return communicationrecipient_response_local_var;
end:
    if (e_communicationrecipient_type_local_nonprim) {
        field_e_communicationrecipient_type_free(e_communicationrecipient_type_local_nonprim);
        e_communicationrecipient_type_local_nonprim = NULL;
    }
    if (obj_phone_sms_local_nonprim) {
        phone_response_compound_free(obj_phone_sms_local_nonprim);
        obj_phone_sms_local_nonprim = NULL;
    }
    return NULL;

}
