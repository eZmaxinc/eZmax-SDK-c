#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationrecipient_request_compound.h"


char* communicationrecipient_request_compound_e_communicationrecipient_type_ToString(ezmax_api_definition__full_communicationrecipient_request_compound__e e_communicationrecipient_type) {
    char* e_communicationrecipient_typeArray[] =  { "NULL", "To", "Cc", "Bcc" };
    return e_communicationrecipient_typeArray[e_communicationrecipient_type];
}

ezmax_api_definition__full_communicationrecipient_request_compound__e communicationrecipient_request_compound_e_communicationrecipient_type_FromString(char* e_communicationrecipient_type){
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

communicationrecipient_request_compound_t *communicationrecipient_request_compound_create(
    int pki_communicationrecipient_id,
    int fki_agent_id,
    int fki_broker_id,
    int fki_contact_id,
    int fki_customer_id,
    int fki_employee_id,
    int fki_assistant_id,
    int fki_externalbroker_id,
    int fki_ezsignsigner_id,
    int fki_notary_id,
    int fki_supplier_id,
    int fki_user_id,
    int fki_mailboxshared_id,
    int fki_phonelineshared_id,
    field_e_communicationrecipient_type_t *e_communicationrecipient_type
    ) {
    communicationrecipient_request_compound_t *communicationrecipient_request_compound_local_var = malloc(sizeof(communicationrecipient_request_compound_t));
    if (!communicationrecipient_request_compound_local_var) {
        return NULL;
    }
    communicationrecipient_request_compound_local_var->pki_communicationrecipient_id = pki_communicationrecipient_id;
    communicationrecipient_request_compound_local_var->fki_agent_id = fki_agent_id;
    communicationrecipient_request_compound_local_var->fki_broker_id = fki_broker_id;
    communicationrecipient_request_compound_local_var->fki_contact_id = fki_contact_id;
    communicationrecipient_request_compound_local_var->fki_customer_id = fki_customer_id;
    communicationrecipient_request_compound_local_var->fki_employee_id = fki_employee_id;
    communicationrecipient_request_compound_local_var->fki_assistant_id = fki_assistant_id;
    communicationrecipient_request_compound_local_var->fki_externalbroker_id = fki_externalbroker_id;
    communicationrecipient_request_compound_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    communicationrecipient_request_compound_local_var->fki_notary_id = fki_notary_id;
    communicationrecipient_request_compound_local_var->fki_supplier_id = fki_supplier_id;
    communicationrecipient_request_compound_local_var->fki_user_id = fki_user_id;
    communicationrecipient_request_compound_local_var->fki_mailboxshared_id = fki_mailboxshared_id;
    communicationrecipient_request_compound_local_var->fki_phonelineshared_id = fki_phonelineshared_id;
    communicationrecipient_request_compound_local_var->e_communicationrecipient_type = e_communicationrecipient_type;

    return communicationrecipient_request_compound_local_var;
}


void communicationrecipient_request_compound_free(communicationrecipient_request_compound_t *communicationrecipient_request_compound) {
    if(NULL == communicationrecipient_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (communicationrecipient_request_compound->e_communicationrecipient_type) {
        field_e_communicationrecipient_type_free(communicationrecipient_request_compound->e_communicationrecipient_type);
        communicationrecipient_request_compound->e_communicationrecipient_type = NULL;
    }
    free(communicationrecipient_request_compound);
}

cJSON *communicationrecipient_request_compound_convertToJSON(communicationrecipient_request_compound_t *communicationrecipient_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // communicationrecipient_request_compound->pki_communicationrecipient_id
    if(communicationrecipient_request_compound->pki_communicationrecipient_id) {
    if(cJSON_AddNumberToObject(item, "pkiCommunicationrecipientID", communicationrecipient_request_compound->pki_communicationrecipient_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_agent_id
    if(communicationrecipient_request_compound->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", communicationrecipient_request_compound->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_broker_id
    if(communicationrecipient_request_compound->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", communicationrecipient_request_compound->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_contact_id
    if(communicationrecipient_request_compound->fki_contact_id) {
    if(cJSON_AddNumberToObject(item, "fkiContactID", communicationrecipient_request_compound->fki_contact_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_customer_id
    if(communicationrecipient_request_compound->fki_customer_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomerID", communicationrecipient_request_compound->fki_customer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_employee_id
    if(communicationrecipient_request_compound->fki_employee_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmployeeID", communicationrecipient_request_compound->fki_employee_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_assistant_id
    if(communicationrecipient_request_compound->fki_assistant_id) {
    if(cJSON_AddNumberToObject(item, "fkiAssistantID", communicationrecipient_request_compound->fki_assistant_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_externalbroker_id
    if(communicationrecipient_request_compound->fki_externalbroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiExternalbrokerID", communicationrecipient_request_compound->fki_externalbroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_ezsignsigner_id
    if(communicationrecipient_request_compound->fki_ezsignsigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", communicationrecipient_request_compound->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_notary_id
    if(communicationrecipient_request_compound->fki_notary_id) {
    if(cJSON_AddNumberToObject(item, "fkiNotaryID", communicationrecipient_request_compound->fki_notary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_supplier_id
    if(communicationrecipient_request_compound->fki_supplier_id) {
    if(cJSON_AddNumberToObject(item, "fkiSupplierID", communicationrecipient_request_compound->fki_supplier_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_user_id
    if(communicationrecipient_request_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", communicationrecipient_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_mailboxshared_id
    if(communicationrecipient_request_compound->fki_mailboxshared_id) {
    if(cJSON_AddNumberToObject(item, "fkiMailboxsharedID", communicationrecipient_request_compound->fki_mailboxshared_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_phonelineshared_id
    if(communicationrecipient_request_compound->fki_phonelineshared_id) {
    if(cJSON_AddNumberToObject(item, "fkiPhonelinesharedID", communicationrecipient_request_compound->fki_phonelineshared_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->e_communicationrecipient_type
    if(communicationrecipient_request_compound->e_communicationrecipient_type != ezmax_api_definition__full_communicationrecipient_request_compound__NULL) {
    cJSON *e_communicationrecipient_type_local_JSON = field_e_communicationrecipient_type_convertToJSON(communicationrecipient_request_compound->e_communicationrecipient_type);
    if(e_communicationrecipient_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCommunicationrecipientType", e_communicationrecipient_type_local_JSON);
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

communicationrecipient_request_compound_t *communicationrecipient_request_compound_parseFromJSON(cJSON *communicationrecipient_request_compoundJSON){

    communicationrecipient_request_compound_t *communicationrecipient_request_compound_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->e_communicationrecipient_type
    field_e_communicationrecipient_type_t *e_communicationrecipient_type_local_nonprim = NULL;

    // communicationrecipient_request_compound->pki_communicationrecipient_id
    cJSON *pki_communicationrecipient_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "pkiCommunicationrecipientID");
    if (pki_communicationrecipient_id) { 
    if(!cJSON_IsNumber(pki_communicationrecipient_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiAgentID");
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiBrokerID");
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_contact_id
    cJSON *fki_contact_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiContactID");
    if (fki_contact_id) { 
    if(!cJSON_IsNumber(fki_contact_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_customer_id
    cJSON *fki_customer_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiCustomerID");
    if (fki_customer_id) { 
    if(!cJSON_IsNumber(fki_customer_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_employee_id
    cJSON *fki_employee_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiEmployeeID");
    if (fki_employee_id) { 
    if(!cJSON_IsNumber(fki_employee_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_assistant_id
    cJSON *fki_assistant_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiAssistantID");
    if (fki_assistant_id) { 
    if(!cJSON_IsNumber(fki_assistant_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_externalbroker_id
    cJSON *fki_externalbroker_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiExternalbrokerID");
    if (fki_externalbroker_id) { 
    if(!cJSON_IsNumber(fki_externalbroker_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiEzsignsignerID");
    if (fki_ezsignsigner_id) { 
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_notary_id
    cJSON *fki_notary_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiNotaryID");
    if (fki_notary_id) { 
    if(!cJSON_IsNumber(fki_notary_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_supplier_id
    cJSON *fki_supplier_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiSupplierID");
    if (fki_supplier_id) { 
    if(!cJSON_IsNumber(fki_supplier_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_mailboxshared_id
    cJSON *fki_mailboxshared_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiMailboxsharedID");
    if (fki_mailboxshared_id) { 
    if(!cJSON_IsNumber(fki_mailboxshared_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->fki_phonelineshared_id
    cJSON *fki_phonelineshared_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiPhonelinesharedID");
    if (fki_phonelineshared_id) { 
    if(!cJSON_IsNumber(fki_phonelineshared_id))
    {
    goto end; //Numeric
    }
    }

    // communicationrecipient_request_compound->e_communicationrecipient_type
    cJSON *e_communicationrecipient_type = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "eCommunicationrecipientType");
    if (e_communicationrecipient_type) { 
    e_communicationrecipient_type_local_nonprim = field_e_communicationrecipient_type_parseFromJSON(e_communicationrecipient_type); //custom
    }


    communicationrecipient_request_compound_local_var = communicationrecipient_request_compound_create (
        pki_communicationrecipient_id ? pki_communicationrecipient_id->valuedouble : 0,
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_contact_id ? fki_contact_id->valuedouble : 0,
        fki_customer_id ? fki_customer_id->valuedouble : 0,
        fki_employee_id ? fki_employee_id->valuedouble : 0,
        fki_assistant_id ? fki_assistant_id->valuedouble : 0,
        fki_externalbroker_id ? fki_externalbroker_id->valuedouble : 0,
        fki_ezsignsigner_id ? fki_ezsignsigner_id->valuedouble : 0,
        fki_notary_id ? fki_notary_id->valuedouble : 0,
        fki_supplier_id ? fki_supplier_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_mailboxshared_id ? fki_mailboxshared_id->valuedouble : 0,
        fki_phonelineshared_id ? fki_phonelineshared_id->valuedouble : 0,
        e_communicationrecipient_type ? e_communicationrecipient_type_local_nonprim : NULL
        );

    return communicationrecipient_request_compound_local_var;
end:
    if (e_communicationrecipient_type_local_nonprim) {
        field_e_communicationrecipient_type_free(e_communicationrecipient_type_local_nonprim);
        e_communicationrecipient_type_local_nonprim = NULL;
    }
    return NULL;

}