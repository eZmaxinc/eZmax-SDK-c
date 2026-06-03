#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationrecipient_request_compound.h"



static communicationrecipient_request_compound_t *communicationrecipient_request_compound_create_internal(
    int *pki_communicationrecipient_id,
    int *fki_agent_id,
    int *fki_broker_id,
    int *fki_contact_id,
    int *fki_customer_id,
    int *fki_employee_id,
    int *fki_assistant_id,
    int *fki_externalbroker_id,
    int *fki_ezsignsigner_id,
    int *fki_notary_id,
    int *fki_supplier_id,
    int *fki_user_id,
    int *fki_mailboxshared_id,
    int *fki_phonelineshared_id,
    ezmax_api_definition__full_field_e_communicationrecipient_type__e e_communicationrecipient_type
    ) {
    communicationrecipient_request_compound_t *communicationrecipient_request_compound_local_var = malloc(sizeof(communicationrecipient_request_compound_t));
    if (!communicationrecipient_request_compound_local_var) {
        return NULL;
    }
    memset(communicationrecipient_request_compound_local_var, 0, sizeof(communicationrecipient_request_compound_t));
    communicationrecipient_request_compound_local_var->_library_owned = 1;
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

__attribute__((deprecated)) communicationrecipient_request_compound_t *communicationrecipient_request_compound_create(
    int *pki_communicationrecipient_id,
    int *fki_agent_id,
    int *fki_broker_id,
    int *fki_contact_id,
    int *fki_customer_id,
    int *fki_employee_id,
    int *fki_assistant_id,
    int *fki_externalbroker_id,
    int *fki_ezsignsigner_id,
    int *fki_notary_id,
    int *fki_supplier_id,
    int *fki_user_id,
    int *fki_mailboxshared_id,
    int *fki_phonelineshared_id,
    ezmax_api_definition__full_field_e_communicationrecipient_type__e e_communicationrecipient_type
    ) {
    int *pki_communicationrecipient_id_copy = NULL;
    if (pki_communicationrecipient_id) {
        pki_communicationrecipient_id_copy = malloc(sizeof(int));
        if (pki_communicationrecipient_id_copy) *pki_communicationrecipient_id_copy = *pki_communicationrecipient_id;
    }
    int *fki_agent_id_copy = NULL;
    if (fki_agent_id) {
        fki_agent_id_copy = malloc(sizeof(int));
        if (fki_agent_id_copy) *fki_agent_id_copy = *fki_agent_id;
    }
    int *fki_broker_id_copy = NULL;
    if (fki_broker_id) {
        fki_broker_id_copy = malloc(sizeof(int));
        if (fki_broker_id_copy) *fki_broker_id_copy = *fki_broker_id;
    }
    int *fki_contact_id_copy = NULL;
    if (fki_contact_id) {
        fki_contact_id_copy = malloc(sizeof(int));
        if (fki_contact_id_copy) *fki_contact_id_copy = *fki_contact_id;
    }
    int *fki_customer_id_copy = NULL;
    if (fki_customer_id) {
        fki_customer_id_copy = malloc(sizeof(int));
        if (fki_customer_id_copy) *fki_customer_id_copy = *fki_customer_id;
    }
    int *fki_employee_id_copy = NULL;
    if (fki_employee_id) {
        fki_employee_id_copy = malloc(sizeof(int));
        if (fki_employee_id_copy) *fki_employee_id_copy = *fki_employee_id;
    }
    int *fki_assistant_id_copy = NULL;
    if (fki_assistant_id) {
        fki_assistant_id_copy = malloc(sizeof(int));
        if (fki_assistant_id_copy) *fki_assistant_id_copy = *fki_assistant_id;
    }
    int *fki_externalbroker_id_copy = NULL;
    if (fki_externalbroker_id) {
        fki_externalbroker_id_copy = malloc(sizeof(int));
        if (fki_externalbroker_id_copy) *fki_externalbroker_id_copy = *fki_externalbroker_id;
    }
    int *fki_ezsignsigner_id_copy = NULL;
    if (fki_ezsignsigner_id) {
        fki_ezsignsigner_id_copy = malloc(sizeof(int));
        if (fki_ezsignsigner_id_copy) *fki_ezsignsigner_id_copy = *fki_ezsignsigner_id;
    }
    int *fki_notary_id_copy = NULL;
    if (fki_notary_id) {
        fki_notary_id_copy = malloc(sizeof(int));
        if (fki_notary_id_copy) *fki_notary_id_copy = *fki_notary_id;
    }
    int *fki_supplier_id_copy = NULL;
    if (fki_supplier_id) {
        fki_supplier_id_copy = malloc(sizeof(int));
        if (fki_supplier_id_copy) *fki_supplier_id_copy = *fki_supplier_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_mailboxshared_id_copy = NULL;
    if (fki_mailboxshared_id) {
        fki_mailboxshared_id_copy = malloc(sizeof(int));
        if (fki_mailboxshared_id_copy) *fki_mailboxshared_id_copy = *fki_mailboxshared_id;
    }
    int *fki_phonelineshared_id_copy = NULL;
    if (fki_phonelineshared_id) {
        fki_phonelineshared_id_copy = malloc(sizeof(int));
        if (fki_phonelineshared_id_copy) *fki_phonelineshared_id_copy = *fki_phonelineshared_id;
    }
    communicationrecipient_request_compound_t *result = communicationrecipient_request_compound_create_internal (
        pki_communicationrecipient_id_copy,
        fki_agent_id_copy,
        fki_broker_id_copy,
        fki_contact_id_copy,
        fki_customer_id_copy,
        fki_employee_id_copy,
        fki_assistant_id_copy,
        fki_externalbroker_id_copy,
        fki_ezsignsigner_id_copy,
        fki_notary_id_copy,
        fki_supplier_id_copy,
        fki_user_id_copy,
        fki_mailboxshared_id_copy,
        fki_phonelineshared_id_copy,
        e_communicationrecipient_type
        );
    if (!result) {
        free(pki_communicationrecipient_id_copy);
        free(fki_agent_id_copy);
        free(fki_broker_id_copy);
        free(fki_contact_id_copy);
        free(fki_customer_id_copy);
        free(fki_employee_id_copy);
        free(fki_assistant_id_copy);
        free(fki_externalbroker_id_copy);
        free(fki_ezsignsigner_id_copy);
        free(fki_notary_id_copy);
        free(fki_supplier_id_copy);
        free(fki_user_id_copy);
        free(fki_mailboxshared_id_copy);
        free(fki_phonelineshared_id_copy);
    }
    return result;
}

void communicationrecipient_request_compound_free(communicationrecipient_request_compound_t *communicationrecipient_request_compound) {
    if(NULL == communicationrecipient_request_compound){
        return ;
    }
    if(communicationrecipient_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "communicationrecipient_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (communicationrecipient_request_compound->pki_communicationrecipient_id) {
        free(communicationrecipient_request_compound->pki_communicationrecipient_id);
        communicationrecipient_request_compound->pki_communicationrecipient_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_agent_id) {
        free(communicationrecipient_request_compound->fki_agent_id);
        communicationrecipient_request_compound->fki_agent_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_broker_id) {
        free(communicationrecipient_request_compound->fki_broker_id);
        communicationrecipient_request_compound->fki_broker_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_contact_id) {
        free(communicationrecipient_request_compound->fki_contact_id);
        communicationrecipient_request_compound->fki_contact_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_customer_id) {
        free(communicationrecipient_request_compound->fki_customer_id);
        communicationrecipient_request_compound->fki_customer_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_employee_id) {
        free(communicationrecipient_request_compound->fki_employee_id);
        communicationrecipient_request_compound->fki_employee_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_assistant_id) {
        free(communicationrecipient_request_compound->fki_assistant_id);
        communicationrecipient_request_compound->fki_assistant_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_externalbroker_id) {
        free(communicationrecipient_request_compound->fki_externalbroker_id);
        communicationrecipient_request_compound->fki_externalbroker_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_ezsignsigner_id) {
        free(communicationrecipient_request_compound->fki_ezsignsigner_id);
        communicationrecipient_request_compound->fki_ezsignsigner_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_notary_id) {
        free(communicationrecipient_request_compound->fki_notary_id);
        communicationrecipient_request_compound->fki_notary_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_supplier_id) {
        free(communicationrecipient_request_compound->fki_supplier_id);
        communicationrecipient_request_compound->fki_supplier_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_user_id) {
        free(communicationrecipient_request_compound->fki_user_id);
        communicationrecipient_request_compound->fki_user_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_mailboxshared_id) {
        free(communicationrecipient_request_compound->fki_mailboxshared_id);
        communicationrecipient_request_compound->fki_mailboxshared_id = NULL;
    }
    if (communicationrecipient_request_compound->fki_phonelineshared_id) {
        free(communicationrecipient_request_compound->fki_phonelineshared_id);
        communicationrecipient_request_compound->fki_phonelineshared_id = NULL;
    }
    free(communicationrecipient_request_compound);
}

cJSON *communicationrecipient_request_compound_convertToJSON(communicationrecipient_request_compound_t *communicationrecipient_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // communicationrecipient_request_compound->pki_communicationrecipient_id
    if(communicationrecipient_request_compound->pki_communicationrecipient_id) {
    if(cJSON_AddNumberToObject(item, "pkiCommunicationrecipientID", *communicationrecipient_request_compound->pki_communicationrecipient_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_agent_id
    if(communicationrecipient_request_compound->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", *communicationrecipient_request_compound->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_broker_id
    if(communicationrecipient_request_compound->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", *communicationrecipient_request_compound->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_contact_id
    if(communicationrecipient_request_compound->fki_contact_id) {
    if(cJSON_AddNumberToObject(item, "fkiContactID", *communicationrecipient_request_compound->fki_contact_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_customer_id
    if(communicationrecipient_request_compound->fki_customer_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomerID", *communicationrecipient_request_compound->fki_customer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_employee_id
    if(communicationrecipient_request_compound->fki_employee_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmployeeID", *communicationrecipient_request_compound->fki_employee_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_assistant_id
    if(communicationrecipient_request_compound->fki_assistant_id) {
    if(cJSON_AddNumberToObject(item, "fkiAssistantID", *communicationrecipient_request_compound->fki_assistant_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_externalbroker_id
    if(communicationrecipient_request_compound->fki_externalbroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiExternalbrokerID", *communicationrecipient_request_compound->fki_externalbroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_ezsignsigner_id
    if(communicationrecipient_request_compound->fki_ezsignsigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", *communicationrecipient_request_compound->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_notary_id
    if(communicationrecipient_request_compound->fki_notary_id) {
    if(cJSON_AddNumberToObject(item, "fkiNotaryID", *communicationrecipient_request_compound->fki_notary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_supplier_id
    if(communicationrecipient_request_compound->fki_supplier_id) {
    if(cJSON_AddNumberToObject(item, "fkiSupplierID", *communicationrecipient_request_compound->fki_supplier_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_user_id
    if(communicationrecipient_request_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *communicationrecipient_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_mailboxshared_id
    if(communicationrecipient_request_compound->fki_mailboxshared_id) {
    if(cJSON_AddNumberToObject(item, "fkiMailboxsharedID", *communicationrecipient_request_compound->fki_mailboxshared_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->fki_phonelineshared_id
    if(communicationrecipient_request_compound->fki_phonelineshared_id) {
    if(cJSON_AddNumberToObject(item, "fkiPhonelinesharedID", *communicationrecipient_request_compound->fki_phonelineshared_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationrecipient_request_compound->e_communicationrecipient_type
    if(communicationrecipient_request_compound->e_communicationrecipient_type != ezmax_api_definition__full_field_e_communicationrecipient_type__NULL) {
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

    // define the local variable for communicationrecipient_request_compound->pki_communicationrecipient_id
    int *pki_communicationrecipient_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_agent_id
    int *fki_agent_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_broker_id
    int *fki_broker_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_contact_id
    int *fki_contact_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_customer_id
    int *fki_customer_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_employee_id
    int *fki_employee_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_assistant_id
    int *fki_assistant_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_externalbroker_id
    int *fki_externalbroker_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_ezsignsigner_id
    int *fki_ezsignsigner_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_notary_id
    int *fki_notary_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_supplier_id
    int *fki_supplier_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_mailboxshared_id
    int *fki_mailboxshared_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->fki_phonelineshared_id
    int *fki_phonelineshared_id_local_var = NULL;

    // define the local variable for communicationrecipient_request_compound->e_communicationrecipient_type
    ezmax_api_definition__full_field_e_communicationrecipient_type__e e_communicationrecipient_type_local_nonprim = 0;

    // communicationrecipient_request_compound->pki_communicationrecipient_id
    cJSON *pki_communicationrecipient_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "pkiCommunicationrecipientID");
    if (cJSON_IsNull(pki_communicationrecipient_id)) {
        pki_communicationrecipient_id = NULL;
    }
    if (pki_communicationrecipient_id) { 
    if(!cJSON_IsNumber(pki_communicationrecipient_id))
    {
    goto end; //Numeric
    }
    pki_communicationrecipient_id_local_var = malloc(sizeof(int));
    if(!pki_communicationrecipient_id_local_var)
    {
        goto end;
    }
    *pki_communicationrecipient_id_local_var = pki_communicationrecipient_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    fki_agent_id_local_var = malloc(sizeof(int));
    if(!fki_agent_id_local_var)
    {
        goto end;
    }
    *fki_agent_id_local_var = fki_agent_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    fki_broker_id_local_var = malloc(sizeof(int));
    if(!fki_broker_id_local_var)
    {
        goto end;
    }
    *fki_broker_id_local_var = fki_broker_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_contact_id
    cJSON *fki_contact_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiContactID");
    if (cJSON_IsNull(fki_contact_id)) {
        fki_contact_id = NULL;
    }
    if (fki_contact_id) { 
    if(!cJSON_IsNumber(fki_contact_id))
    {
    goto end; //Numeric
    }
    fki_contact_id_local_var = malloc(sizeof(int));
    if(!fki_contact_id_local_var)
    {
        goto end;
    }
    *fki_contact_id_local_var = fki_contact_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_customer_id
    cJSON *fki_customer_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiCustomerID");
    if (cJSON_IsNull(fki_customer_id)) {
        fki_customer_id = NULL;
    }
    if (fki_customer_id) { 
    if(!cJSON_IsNumber(fki_customer_id))
    {
    goto end; //Numeric
    }
    fki_customer_id_local_var = malloc(sizeof(int));
    if(!fki_customer_id_local_var)
    {
        goto end;
    }
    *fki_customer_id_local_var = fki_customer_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_employee_id
    cJSON *fki_employee_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiEmployeeID");
    if (cJSON_IsNull(fki_employee_id)) {
        fki_employee_id = NULL;
    }
    if (fki_employee_id) { 
    if(!cJSON_IsNumber(fki_employee_id))
    {
    goto end; //Numeric
    }
    fki_employee_id_local_var = malloc(sizeof(int));
    if(!fki_employee_id_local_var)
    {
        goto end;
    }
    *fki_employee_id_local_var = fki_employee_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_assistant_id
    cJSON *fki_assistant_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiAssistantID");
    if (cJSON_IsNull(fki_assistant_id)) {
        fki_assistant_id = NULL;
    }
    if (fki_assistant_id) { 
    if(!cJSON_IsNumber(fki_assistant_id))
    {
    goto end; //Numeric
    }
    fki_assistant_id_local_var = malloc(sizeof(int));
    if(!fki_assistant_id_local_var)
    {
        goto end;
    }
    *fki_assistant_id_local_var = fki_assistant_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_externalbroker_id
    cJSON *fki_externalbroker_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiExternalbrokerID");
    if (cJSON_IsNull(fki_externalbroker_id)) {
        fki_externalbroker_id = NULL;
    }
    if (fki_externalbroker_id) { 
    if(!cJSON_IsNumber(fki_externalbroker_id))
    {
    goto end; //Numeric
    }
    fki_externalbroker_id_local_var = malloc(sizeof(int));
    if(!fki_externalbroker_id_local_var)
    {
        goto end;
    }
    *fki_externalbroker_id_local_var = fki_externalbroker_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiEzsignsignerID");
    if (cJSON_IsNull(fki_ezsignsigner_id)) {
        fki_ezsignsigner_id = NULL;
    }
    if (fki_ezsignsigner_id) { 
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }
    fki_ezsignsigner_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignsigner_id_local_var)
    {
        goto end;
    }
    *fki_ezsignsigner_id_local_var = fki_ezsignsigner_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_notary_id
    cJSON *fki_notary_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiNotaryID");
    if (cJSON_IsNull(fki_notary_id)) {
        fki_notary_id = NULL;
    }
    if (fki_notary_id) { 
    if(!cJSON_IsNumber(fki_notary_id))
    {
    goto end; //Numeric
    }
    fki_notary_id_local_var = malloc(sizeof(int));
    if(!fki_notary_id_local_var)
    {
        goto end;
    }
    *fki_notary_id_local_var = fki_notary_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_supplier_id
    cJSON *fki_supplier_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiSupplierID");
    if (cJSON_IsNull(fki_supplier_id)) {
        fki_supplier_id = NULL;
    }
    if (fki_supplier_id) { 
    if(!cJSON_IsNumber(fki_supplier_id))
    {
    goto end; //Numeric
    }
    fki_supplier_id_local_var = malloc(sizeof(int));
    if(!fki_supplier_id_local_var)
    {
        goto end;
    }
    *fki_supplier_id_local_var = fki_supplier_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_mailboxshared_id
    cJSON *fki_mailboxshared_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiMailboxsharedID");
    if (cJSON_IsNull(fki_mailboxshared_id)) {
        fki_mailboxshared_id = NULL;
    }
    if (fki_mailboxshared_id) { 
    if(!cJSON_IsNumber(fki_mailboxshared_id))
    {
    goto end; //Numeric
    }
    fki_mailboxshared_id_local_var = malloc(sizeof(int));
    if(!fki_mailboxshared_id_local_var)
    {
        goto end;
    }
    *fki_mailboxshared_id_local_var = fki_mailboxshared_id->valuedouble;
    }

    // communicationrecipient_request_compound->fki_phonelineshared_id
    cJSON *fki_phonelineshared_id = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "fkiPhonelinesharedID");
    if (cJSON_IsNull(fki_phonelineshared_id)) {
        fki_phonelineshared_id = NULL;
    }
    if (fki_phonelineshared_id) { 
    if(!cJSON_IsNumber(fki_phonelineshared_id))
    {
    goto end; //Numeric
    }
    fki_phonelineshared_id_local_var = malloc(sizeof(int));
    if(!fki_phonelineshared_id_local_var)
    {
        goto end;
    }
    *fki_phonelineshared_id_local_var = fki_phonelineshared_id->valuedouble;
    }

    // communicationrecipient_request_compound->e_communicationrecipient_type
    cJSON *e_communicationrecipient_type = cJSON_GetObjectItemCaseSensitive(communicationrecipient_request_compoundJSON, "eCommunicationrecipientType");
    if (cJSON_IsNull(e_communicationrecipient_type)) {
        e_communicationrecipient_type = NULL;
    }
    if (e_communicationrecipient_type) { 
    e_communicationrecipient_type_local_nonprim = field_e_communicationrecipient_type_parseFromJSON(e_communicationrecipient_type); //custom
    }



    communicationrecipient_request_compound_local_var = communicationrecipient_request_compound_create_internal (
        pki_communicationrecipient_id_local_var,
        fki_agent_id_local_var,
        fki_broker_id_local_var,
        fki_contact_id_local_var,
        fki_customer_id_local_var,
        fki_employee_id_local_var,
        fki_assistant_id_local_var,
        fki_externalbroker_id_local_var,
        fki_ezsignsigner_id_local_var,
        fki_notary_id_local_var,
        fki_supplier_id_local_var,
        fki_user_id_local_var,
        fki_mailboxshared_id_local_var,
        fki_phonelineshared_id_local_var,
        e_communicationrecipient_type ? e_communicationrecipient_type_local_nonprim : 0
        );

    if (!communicationrecipient_request_compound_local_var) {
        goto end;
    }

    return communicationrecipient_request_compound_local_var;
end:
    if (pki_communicationrecipient_id_local_var) {
        free(pki_communicationrecipient_id_local_var);
        pki_communicationrecipient_id_local_var = NULL;
    }
    if (fki_agent_id_local_var) {
        free(fki_agent_id_local_var);
        fki_agent_id_local_var = NULL;
    }
    if (fki_broker_id_local_var) {
        free(fki_broker_id_local_var);
        fki_broker_id_local_var = NULL;
    }
    if (fki_contact_id_local_var) {
        free(fki_contact_id_local_var);
        fki_contact_id_local_var = NULL;
    }
    if (fki_customer_id_local_var) {
        free(fki_customer_id_local_var);
        fki_customer_id_local_var = NULL;
    }
    if (fki_employee_id_local_var) {
        free(fki_employee_id_local_var);
        fki_employee_id_local_var = NULL;
    }
    if (fki_assistant_id_local_var) {
        free(fki_assistant_id_local_var);
        fki_assistant_id_local_var = NULL;
    }
    if (fki_externalbroker_id_local_var) {
        free(fki_externalbroker_id_local_var);
        fki_externalbroker_id_local_var = NULL;
    }
    if (fki_ezsignsigner_id_local_var) {
        free(fki_ezsignsigner_id_local_var);
        fki_ezsignsigner_id_local_var = NULL;
    }
    if (fki_notary_id_local_var) {
        free(fki_notary_id_local_var);
        fki_notary_id_local_var = NULL;
    }
    if (fki_supplier_id_local_var) {
        free(fki_supplier_id_local_var);
        fki_supplier_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_mailboxshared_id_local_var) {
        free(fki_mailboxshared_id_local_var);
        fki_mailboxshared_id_local_var = NULL;
    }
    if (fki_phonelineshared_id_local_var) {
        free(fki_phonelineshared_id_local_var);
        fki_phonelineshared_id_local_var = NULL;
    }
    if (e_communicationrecipient_type_local_nonprim) {
        e_communicationrecipient_type_local_nonprim = 0;
    }
    return NULL;

}
