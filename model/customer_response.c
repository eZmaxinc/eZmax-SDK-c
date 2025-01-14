#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_response.h"


char* customer_response_e_customer_type_ToString(ezmax_api_definition__full_customer_response__e e_customer_type) {
    char* e_customer_typeArray[] =  { "NULL", "Normal", "Vetrx-Server", "Reward-Administration", "Reward-Representative", "Reward-Server" };
    return e_customer_typeArray[e_customer_type];
}

ezmax_api_definition__full_customer_response__e customer_response_e_customer_type_FromString(char* e_customer_type){
    int stringToReturn = 0;
    char *e_customer_typeArray[] =  { "NULL", "Normal", "Vetrx-Server", "Reward-Administration", "Reward-Representative", "Reward-Server" };
    size_t sizeofArray = sizeof(e_customer_typeArray) / sizeof(e_customer_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_customer_type, e_customer_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* customer_response_e_customer_marketingcorrespondence_ToString(ezmax_api_definition__full_customer_response__e e_customer_marketingcorrespondence) {
    char* e_customer_marketingcorrespondenceArray[] =  { "NULL", "No", "Email", "Mail", "Any" };
    return e_customer_marketingcorrespondenceArray[e_customer_marketingcorrespondence];
}

ezmax_api_definition__full_customer_response__e customer_response_e_customer_marketingcorrespondence_FromString(char* e_customer_marketingcorrespondence){
    int stringToReturn = 0;
    char *e_customer_marketingcorrespondenceArray[] =  { "NULL", "No", "Email", "Mail", "Any" };
    size_t sizeofArray = sizeof(e_customer_marketingcorrespondenceArray) / sizeof(e_customer_marketingcorrespondenceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_customer_marketingcorrespondence, e_customer_marketingcorrespondenceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

customer_response_t *customer_response_create(
    int pki_customer_id,
    int fki_company_id,
    int fki_customergroup_id,
    char *s_customer_name,
    int fki_contactinformations_id,
    int fki_contactcontainer_id,
    int fki_image_id,
    int fki_glaccountcontainer_id,
    int fki_language_id,
    int fki_department_id,
    int fki_paymentmethod_id,
    int fki_electronicfundstransferbankaccount_id,
    int fki_electronicfundstransferbankaccount_id_directdebit,
    int fki_sendingmethod_id,
    int fki_taxassignment_id,
    int fki_attendancestatus_id,
    int fki_agent_id_variableexpensechargeto,
    int fki_broker_id_variableexpensechargeto,
    int fki_customer_id_variableexpensechargeto,
    int fki_glaccountcontainer_id_variableexpensechargeto,
    int fki_agent_id_supplychargechargeto,
    int fki_broker_id_supplychargechargeto,
    int fki_customer_id_supplychargechargeto,
    int fki_glaccountcontainer_id_supplychargechargeto,
    int fki_invoicealternatelogo_id,
    int fki_synchronizationlinkserver_id,
    int efki_user_id,
    char *efks_customer_code,
    char *s_customer_code,
    char *d_customer_fulltimeequivalent,
    int i_customer_photocopiercode,
    int i_customer_longdistancecode,
    int i_customer_timewindowstart,
    int i_customer_timewindowend,
    char *d_customer_minimumchargeableinterests,
    char *dt_customer_birthdate,
    char *dt_customer_transfer,
    char *dt_customer_transferappointment,
    char *dt_customer_transfersurvey,
    int b_customer_isactive,
    int b_customer_variableexpensefinanced,
    int b_customer_variableexpensefinancedtaxes,
    int b_customer_supplychargefinanced,
    int b_customer_supplychargefinancedtaxes,
    int b_customer_attendance,
    field_e_customer_type_t *e_customer_type,
    field_e_customer_marketingcorrespondence_t *e_customer_marketingcorrespondence,
    int b_customer_blackcopycarbon,
    int b_customer_unsubscribeinfo,
    char *t_customer_comment,
    char *importid
    ) {
    customer_response_t *customer_response_local_var = malloc(sizeof(customer_response_t));
    if (!customer_response_local_var) {
        return NULL;
    }
    customer_response_local_var->pki_customer_id = pki_customer_id;
    customer_response_local_var->fki_company_id = fki_company_id;
    customer_response_local_var->fki_customergroup_id = fki_customergroup_id;
    customer_response_local_var->s_customer_name = s_customer_name;
    customer_response_local_var->fki_contactinformations_id = fki_contactinformations_id;
    customer_response_local_var->fki_contactcontainer_id = fki_contactcontainer_id;
    customer_response_local_var->fki_image_id = fki_image_id;
    customer_response_local_var->fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    customer_response_local_var->fki_language_id = fki_language_id;
    customer_response_local_var->fki_department_id = fki_department_id;
    customer_response_local_var->fki_paymentmethod_id = fki_paymentmethod_id;
    customer_response_local_var->fki_electronicfundstransferbankaccount_id = fki_electronicfundstransferbankaccount_id;
    customer_response_local_var->fki_electronicfundstransferbankaccount_id_directdebit = fki_electronicfundstransferbankaccount_id_directdebit;
    customer_response_local_var->fki_sendingmethod_id = fki_sendingmethod_id;
    customer_response_local_var->fki_taxassignment_id = fki_taxassignment_id;
    customer_response_local_var->fki_attendancestatus_id = fki_attendancestatus_id;
    customer_response_local_var->fki_agent_id_variableexpensechargeto = fki_agent_id_variableexpensechargeto;
    customer_response_local_var->fki_broker_id_variableexpensechargeto = fki_broker_id_variableexpensechargeto;
    customer_response_local_var->fki_customer_id_variableexpensechargeto = fki_customer_id_variableexpensechargeto;
    customer_response_local_var->fki_glaccountcontainer_id_variableexpensechargeto = fki_glaccountcontainer_id_variableexpensechargeto;
    customer_response_local_var->fki_agent_id_supplychargechargeto = fki_agent_id_supplychargechargeto;
    customer_response_local_var->fki_broker_id_supplychargechargeto = fki_broker_id_supplychargechargeto;
    customer_response_local_var->fki_customer_id_supplychargechargeto = fki_customer_id_supplychargechargeto;
    customer_response_local_var->fki_glaccountcontainer_id_supplychargechargeto = fki_glaccountcontainer_id_supplychargechargeto;
    customer_response_local_var->fki_invoicealternatelogo_id = fki_invoicealternatelogo_id;
    customer_response_local_var->fki_synchronizationlinkserver_id = fki_synchronizationlinkserver_id;
    customer_response_local_var->efki_user_id = efki_user_id;
    customer_response_local_var->efks_customer_code = efks_customer_code;
    customer_response_local_var->s_customer_code = s_customer_code;
    customer_response_local_var->d_customer_fulltimeequivalent = d_customer_fulltimeequivalent;
    customer_response_local_var->i_customer_photocopiercode = i_customer_photocopiercode;
    customer_response_local_var->i_customer_longdistancecode = i_customer_longdistancecode;
    customer_response_local_var->i_customer_timewindowstart = i_customer_timewindowstart;
    customer_response_local_var->i_customer_timewindowend = i_customer_timewindowend;
    customer_response_local_var->d_customer_minimumchargeableinterests = d_customer_minimumchargeableinterests;
    customer_response_local_var->dt_customer_birthdate = dt_customer_birthdate;
    customer_response_local_var->dt_customer_transfer = dt_customer_transfer;
    customer_response_local_var->dt_customer_transferappointment = dt_customer_transferappointment;
    customer_response_local_var->dt_customer_transfersurvey = dt_customer_transfersurvey;
    customer_response_local_var->b_customer_isactive = b_customer_isactive;
    customer_response_local_var->b_customer_variableexpensefinanced = b_customer_variableexpensefinanced;
    customer_response_local_var->b_customer_variableexpensefinancedtaxes = b_customer_variableexpensefinancedtaxes;
    customer_response_local_var->b_customer_supplychargefinanced = b_customer_supplychargefinanced;
    customer_response_local_var->b_customer_supplychargefinancedtaxes = b_customer_supplychargefinancedtaxes;
    customer_response_local_var->b_customer_attendance = b_customer_attendance;
    customer_response_local_var->e_customer_type = e_customer_type;
    customer_response_local_var->e_customer_marketingcorrespondence = e_customer_marketingcorrespondence;
    customer_response_local_var->b_customer_blackcopycarbon = b_customer_blackcopycarbon;
    customer_response_local_var->b_customer_unsubscribeinfo = b_customer_unsubscribeinfo;
    customer_response_local_var->t_customer_comment = t_customer_comment;
    customer_response_local_var->importid = importid;

    return customer_response_local_var;
}


void customer_response_free(customer_response_t *customer_response) {
    if(NULL == customer_response){
        return ;
    }
    listEntry_t *listEntry;
    if (customer_response->s_customer_name) {
        free(customer_response->s_customer_name);
        customer_response->s_customer_name = NULL;
    }
    if (customer_response->efks_customer_code) {
        free(customer_response->efks_customer_code);
        customer_response->efks_customer_code = NULL;
    }
    if (customer_response->s_customer_code) {
        free(customer_response->s_customer_code);
        customer_response->s_customer_code = NULL;
    }
    if (customer_response->d_customer_fulltimeequivalent) {
        free(customer_response->d_customer_fulltimeequivalent);
        customer_response->d_customer_fulltimeequivalent = NULL;
    }
    if (customer_response->d_customer_minimumchargeableinterests) {
        free(customer_response->d_customer_minimumchargeableinterests);
        customer_response->d_customer_minimumchargeableinterests = NULL;
    }
    if (customer_response->dt_customer_birthdate) {
        free(customer_response->dt_customer_birthdate);
        customer_response->dt_customer_birthdate = NULL;
    }
    if (customer_response->dt_customer_transfer) {
        free(customer_response->dt_customer_transfer);
        customer_response->dt_customer_transfer = NULL;
    }
    if (customer_response->dt_customer_transferappointment) {
        free(customer_response->dt_customer_transferappointment);
        customer_response->dt_customer_transferappointment = NULL;
    }
    if (customer_response->dt_customer_transfersurvey) {
        free(customer_response->dt_customer_transfersurvey);
        customer_response->dt_customer_transfersurvey = NULL;
    }
    if (customer_response->e_customer_type) {
        field_e_customer_type_free(customer_response->e_customer_type);
        customer_response->e_customer_type = NULL;
    }
    if (customer_response->e_customer_marketingcorrespondence) {
        field_e_customer_marketingcorrespondence_free(customer_response->e_customer_marketingcorrespondence);
        customer_response->e_customer_marketingcorrespondence = NULL;
    }
    if (customer_response->t_customer_comment) {
        free(customer_response->t_customer_comment);
        customer_response->t_customer_comment = NULL;
    }
    if (customer_response->importid) {
        free(customer_response->importid);
        customer_response->importid = NULL;
    }
    free(customer_response);
}

cJSON *customer_response_convertToJSON(customer_response_t *customer_response) {
    cJSON *item = cJSON_CreateObject();

    // customer_response->pki_customer_id
    if (!customer_response->pki_customer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCustomerID", customer_response->pki_customer_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_company_id
    if (!customer_response->fki_company_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCompanyID", customer_response->fki_company_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_customergroup_id
    if (!customer_response->fki_customergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCustomergroupID", customer_response->fki_customergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->s_customer_name
    if (!customer_response->s_customer_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCustomerName", customer_response->s_customer_name) == NULL) {
    goto fail; //String
    }


    // customer_response->fki_contactinformations_id
    if (!customer_response->fki_contactinformations_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContactinformationsID", customer_response->fki_contactinformations_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_contactcontainer_id
    if (!customer_response->fki_contactcontainer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContactcontainerID", customer_response->fki_contactcontainer_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_image_id
    if (!customer_response->fki_image_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiImageID", customer_response->fki_image_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_glaccountcontainer_id
    if (!customer_response->fki_glaccountcontainer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerID", customer_response->fki_glaccountcontainer_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_language_id
    if (!customer_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", customer_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_department_id
    if (!customer_response->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", customer_response->fki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_paymentmethod_id
    if (!customer_response->fki_paymentmethod_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPaymentmethodID", customer_response->fki_paymentmethod_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_electronicfundstransferbankaccount_id
    if (!customer_response->fki_electronicfundstransferbankaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiElectronicfundstransferbankaccountID", customer_response->fki_electronicfundstransferbankaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_electronicfundstransferbankaccount_id_directdebit
    if (!customer_response->fki_electronicfundstransferbankaccount_id_directdebit) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiElectronicfundstransferbankaccountIDDirectdebit", customer_response->fki_electronicfundstransferbankaccount_id_directdebit) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_sendingmethod_id
    if (!customer_response->fki_sendingmethod_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSendingmethodID", customer_response->fki_sendingmethod_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_taxassignment_id
    if (!customer_response->fki_taxassignment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTaxassignmentID", customer_response->fki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_attendancestatus_id
    if (!customer_response->fki_attendancestatus_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAttendancestatusID", customer_response->fki_attendancestatus_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_agent_id_variableexpensechargeto
    if (!customer_response->fki_agent_id_variableexpensechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAgentIDVariableexpensechargeto", customer_response->fki_agent_id_variableexpensechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_broker_id_variableexpensechargeto
    if (!customer_response->fki_broker_id_variableexpensechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrokerIDVariableexpensechargeto", customer_response->fki_broker_id_variableexpensechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_customer_id_variableexpensechargeto
    if (!customer_response->fki_customer_id_variableexpensechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCustomerIDVariableexpensechargeto", customer_response->fki_customer_id_variableexpensechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_glaccountcontainer_id_variableexpensechargeto
    if (!customer_response->fki_glaccountcontainer_id_variableexpensechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerIDVariableexpensechargeto", customer_response->fki_glaccountcontainer_id_variableexpensechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_agent_id_supplychargechargeto
    if (!customer_response->fki_agent_id_supplychargechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAgentIDSupplychargechargeto", customer_response->fki_agent_id_supplychargechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_broker_id_supplychargechargeto
    if (!customer_response->fki_broker_id_supplychargechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrokerIDSupplychargechargeto", customer_response->fki_broker_id_supplychargechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_customer_id_supplychargechargeto
    if (!customer_response->fki_customer_id_supplychargechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCustomerIDSupplychargechargeto", customer_response->fki_customer_id_supplychargechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_glaccountcontainer_id_supplychargechargeto
    if (!customer_response->fki_glaccountcontainer_id_supplychargechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerIDSupplychargechargeto", customer_response->fki_glaccountcontainer_id_supplychargechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_invoicealternatelogo_id
    if (!customer_response->fki_invoicealternatelogo_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInvoicealternatelogoID", customer_response->fki_invoicealternatelogo_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->fki_synchronizationlinkserver_id
    if (!customer_response->fki_synchronizationlinkserver_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSynchronizationlinkserverID", customer_response->fki_synchronizationlinkserver_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->efki_user_id
    if(customer_response->efki_user_id) {
    if(cJSON_AddNumberToObject(item, "efkiUserID", customer_response->efki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // customer_response->efks_customer_code
    if(customer_response->efks_customer_code) {
    if(cJSON_AddStringToObject(item, "efksCustomerCode", customer_response->efks_customer_code) == NULL) {
    goto fail; //String
    }
    }


    // customer_response->s_customer_code
    if (!customer_response->s_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCustomerCode", customer_response->s_customer_code) == NULL) {
    goto fail; //String
    }


    // customer_response->d_customer_fulltimeequivalent
    if (!customer_response->d_customer_fulltimeequivalent) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dCustomerFulltimeequivalent", customer_response->d_customer_fulltimeequivalent) == NULL) {
    goto fail; //String
    }


    // customer_response->i_customer_photocopiercode
    if (!customer_response->i_customer_photocopiercode) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCustomerPhotocopiercode", customer_response->i_customer_photocopiercode) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->i_customer_longdistancecode
    if (!customer_response->i_customer_longdistancecode) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCustomerLongdistancecode", customer_response->i_customer_longdistancecode) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->i_customer_timewindowstart
    if (!customer_response->i_customer_timewindowstart) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCustomerTimewindowstart", customer_response->i_customer_timewindowstart) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->i_customer_timewindowend
    if (!customer_response->i_customer_timewindowend) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCustomerTimewindowend", customer_response->i_customer_timewindowend) == NULL) {
    goto fail; //Numeric
    }


    // customer_response->d_customer_minimumchargeableinterests
    if (!customer_response->d_customer_minimumchargeableinterests) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dCustomerMinimumchargeableinterests", customer_response->d_customer_minimumchargeableinterests) == NULL) {
    goto fail; //String
    }


    // customer_response->dt_customer_birthdate
    if (!customer_response->dt_customer_birthdate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCustomerBirthdate", customer_response->dt_customer_birthdate) == NULL) {
    goto fail; //String
    }


    // customer_response->dt_customer_transfer
    if (!customer_response->dt_customer_transfer) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCustomerTransfer", customer_response->dt_customer_transfer) == NULL) {
    goto fail; //String
    }


    // customer_response->dt_customer_transferappointment
    if (!customer_response->dt_customer_transferappointment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCustomerTransferappointment", customer_response->dt_customer_transferappointment) == NULL) {
    goto fail; //String
    }


    // customer_response->dt_customer_transfersurvey
    if (!customer_response->dt_customer_transfersurvey) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCustomerTransfersurvey", customer_response->dt_customer_transfersurvey) == NULL) {
    goto fail; //String
    }


    // customer_response->b_customer_isactive
    if (!customer_response->b_customer_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerIsactive", customer_response->b_customer_isactive) == NULL) {
    goto fail; //Bool
    }


    // customer_response->b_customer_variableexpensefinanced
    if (!customer_response->b_customer_variableexpensefinanced) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerVariableexpensefinanced", customer_response->b_customer_variableexpensefinanced) == NULL) {
    goto fail; //Bool
    }


    // customer_response->b_customer_variableexpensefinancedtaxes
    if (!customer_response->b_customer_variableexpensefinancedtaxes) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerVariableexpensefinancedtaxes", customer_response->b_customer_variableexpensefinancedtaxes) == NULL) {
    goto fail; //Bool
    }


    // customer_response->b_customer_supplychargefinanced
    if (!customer_response->b_customer_supplychargefinanced) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerSupplychargefinanced", customer_response->b_customer_supplychargefinanced) == NULL) {
    goto fail; //Bool
    }


    // customer_response->b_customer_supplychargefinancedtaxes
    if (!customer_response->b_customer_supplychargefinancedtaxes) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerSupplychargefinancedtaxes", customer_response->b_customer_supplychargefinancedtaxes) == NULL) {
    goto fail; //Bool
    }


    // customer_response->b_customer_attendance
    if (!customer_response->b_customer_attendance) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerAttendance", customer_response->b_customer_attendance) == NULL) {
    goto fail; //Bool
    }


    // customer_response->e_customer_type
    if (ezmax_api_definition__full_customer_response__NULL == customer_response->e_customer_type) {
        goto fail;
    }
    cJSON *e_customer_type_local_JSON = field_e_customer_type_convertToJSON(customer_response->e_customer_type);
    if(e_customer_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCustomerType", e_customer_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // customer_response->e_customer_marketingcorrespondence
    if (ezmax_api_definition__full_customer_response__NULL == customer_response->e_customer_marketingcorrespondence) {
        goto fail;
    }
    cJSON *e_customer_marketingcorrespondence_local_JSON = field_e_customer_marketingcorrespondence_convertToJSON(customer_response->e_customer_marketingcorrespondence);
    if(e_customer_marketingcorrespondence_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCustomerMarketingcorrespondence", e_customer_marketingcorrespondence_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // customer_response->b_customer_blackcopycarbon
    if (!customer_response->b_customer_blackcopycarbon) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerBlackcopycarbon", customer_response->b_customer_blackcopycarbon) == NULL) {
    goto fail; //Bool
    }


    // customer_response->b_customer_unsubscribeinfo
    if (!customer_response->b_customer_unsubscribeinfo) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerUnsubscribeinfo", customer_response->b_customer_unsubscribeinfo) == NULL) {
    goto fail; //Bool
    }


    // customer_response->t_customer_comment
    if (!customer_response->t_customer_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tCustomerComment", customer_response->t_customer_comment) == NULL) {
    goto fail; //String
    }


    // customer_response->importid
    if(customer_response->importid) {
    if(cJSON_AddStringToObject(item, "IMPORTID", customer_response->importid) == NULL) {
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

customer_response_t *customer_response_parseFromJSON(cJSON *customer_responseJSON){

    customer_response_t *customer_response_local_var = NULL;

    // define the local variable for customer_response->e_customer_type
    field_e_customer_type_t *e_customer_type_local_nonprim = NULL;

    // define the local variable for customer_response->e_customer_marketingcorrespondence
    field_e_customer_marketingcorrespondence_t *e_customer_marketingcorrespondence_local_nonprim = NULL;

    // customer_response->pki_customer_id
    cJSON *pki_customer_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "pkiCustomerID");
    if (!pki_customer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_customer_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_company_id
    cJSON *fki_company_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiCompanyID");
    if (!fki_company_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_company_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_customergroup_id
    cJSON *fki_customergroup_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiCustomergroupID");
    if (!fki_customergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_customergroup_id))
    {
    goto end; //Numeric
    }

    // customer_response->s_customer_name
    cJSON *s_customer_name = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "sCustomerName");
    if (!s_customer_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_name))
    {
    goto end; //String
    }

    // customer_response->fki_contactinformations_id
    cJSON *fki_contactinformations_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiContactinformationsID");
    if (!fki_contactinformations_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contactinformations_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_contactcontainer_id
    cJSON *fki_contactcontainer_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiContactcontainerID");
    if (!fki_contactcontainer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contactcontainer_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_image_id
    cJSON *fki_image_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiImageID");
    if (!fki_image_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_image_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_glaccountcontainer_id
    cJSON *fki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiGlaccountcontainerID");
    if (!fki_glaccountcontainer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiDepartmentID");
    if (!fki_department_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_department_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_paymentmethod_id
    cJSON *fki_paymentmethod_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiPaymentmethodID");
    if (!fki_paymentmethod_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_paymentmethod_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_electronicfundstransferbankaccount_id
    cJSON *fki_electronicfundstransferbankaccount_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiElectronicfundstransferbankaccountID");
    if (!fki_electronicfundstransferbankaccount_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_electronicfundstransferbankaccount_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_electronicfundstransferbankaccount_id_directdebit
    cJSON *fki_electronicfundstransferbankaccount_id_directdebit = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiElectronicfundstransferbankaccountIDDirectdebit");
    if (!fki_electronicfundstransferbankaccount_id_directdebit) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_electronicfundstransferbankaccount_id_directdebit))
    {
    goto end; //Numeric
    }

    // customer_response->fki_sendingmethod_id
    cJSON *fki_sendingmethod_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiSendingmethodID");
    if (!fki_sendingmethod_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_sendingmethod_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_taxassignment_id
    cJSON *fki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiTaxassignmentID");
    if (!fki_taxassignment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_taxassignment_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_attendancestatus_id
    cJSON *fki_attendancestatus_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiAttendancestatusID");
    if (!fki_attendancestatus_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_attendancestatus_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_agent_id_variableexpensechargeto
    cJSON *fki_agent_id_variableexpensechargeto = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiAgentIDVariableexpensechargeto");
    if (!fki_agent_id_variableexpensechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_agent_id_variableexpensechargeto))
    {
    goto end; //Numeric
    }

    // customer_response->fki_broker_id_variableexpensechargeto
    cJSON *fki_broker_id_variableexpensechargeto = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiBrokerIDVariableexpensechargeto");
    if (!fki_broker_id_variableexpensechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_broker_id_variableexpensechargeto))
    {
    goto end; //Numeric
    }

    // customer_response->fki_customer_id_variableexpensechargeto
    cJSON *fki_customer_id_variableexpensechargeto = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiCustomerIDVariableexpensechargeto");
    if (!fki_customer_id_variableexpensechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_customer_id_variableexpensechargeto))
    {
    goto end; //Numeric
    }

    // customer_response->fki_glaccountcontainer_id_variableexpensechargeto
    cJSON *fki_glaccountcontainer_id_variableexpensechargeto = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiGlaccountcontainerIDVariableexpensechargeto");
    if (!fki_glaccountcontainer_id_variableexpensechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_glaccountcontainer_id_variableexpensechargeto))
    {
    goto end; //Numeric
    }

    // customer_response->fki_agent_id_supplychargechargeto
    cJSON *fki_agent_id_supplychargechargeto = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiAgentIDSupplychargechargeto");
    if (!fki_agent_id_supplychargechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_agent_id_supplychargechargeto))
    {
    goto end; //Numeric
    }

    // customer_response->fki_broker_id_supplychargechargeto
    cJSON *fki_broker_id_supplychargechargeto = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiBrokerIDSupplychargechargeto");
    if (!fki_broker_id_supplychargechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_broker_id_supplychargechargeto))
    {
    goto end; //Numeric
    }

    // customer_response->fki_customer_id_supplychargechargeto
    cJSON *fki_customer_id_supplychargechargeto = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiCustomerIDSupplychargechargeto");
    if (!fki_customer_id_supplychargechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_customer_id_supplychargechargeto))
    {
    goto end; //Numeric
    }

    // customer_response->fki_glaccountcontainer_id_supplychargechargeto
    cJSON *fki_glaccountcontainer_id_supplychargechargeto = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiGlaccountcontainerIDSupplychargechargeto");
    if (!fki_glaccountcontainer_id_supplychargechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_glaccountcontainer_id_supplychargechargeto))
    {
    goto end; //Numeric
    }

    // customer_response->fki_invoicealternatelogo_id
    cJSON *fki_invoicealternatelogo_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiInvoicealternatelogoID");
    if (!fki_invoicealternatelogo_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_invoicealternatelogo_id))
    {
    goto end; //Numeric
    }

    // customer_response->fki_synchronizationlinkserver_id
    cJSON *fki_synchronizationlinkserver_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "fkiSynchronizationlinkserverID");
    if (!fki_synchronizationlinkserver_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_synchronizationlinkserver_id))
    {
    goto end; //Numeric
    }

    // customer_response->efki_user_id
    cJSON *efki_user_id = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "efkiUserID");
    if (efki_user_id) { 
    if(!cJSON_IsNumber(efki_user_id))
    {
    goto end; //Numeric
    }
    }

    // customer_response->efks_customer_code
    cJSON *efks_customer_code = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "efksCustomerCode");
    if (efks_customer_code) { 
    if(!cJSON_IsString(efks_customer_code) && !cJSON_IsNull(efks_customer_code))
    {
    goto end; //String
    }
    }

    // customer_response->s_customer_code
    cJSON *s_customer_code = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "sCustomerCode");
    if (!s_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_code))
    {
    goto end; //String
    }

    // customer_response->d_customer_fulltimeequivalent
    cJSON *d_customer_fulltimeequivalent = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "dCustomerFulltimeequivalent");
    if (!d_customer_fulltimeequivalent) {
        goto end;
    }

    
    if(!cJSON_IsString(d_customer_fulltimeequivalent))
    {
    goto end; //String
    }

    // customer_response->i_customer_photocopiercode
    cJSON *i_customer_photocopiercode = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "iCustomerPhotocopiercode");
    if (!i_customer_photocopiercode) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_customer_photocopiercode))
    {
    goto end; //Numeric
    }

    // customer_response->i_customer_longdistancecode
    cJSON *i_customer_longdistancecode = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "iCustomerLongdistancecode");
    if (!i_customer_longdistancecode) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_customer_longdistancecode))
    {
    goto end; //Numeric
    }

    // customer_response->i_customer_timewindowstart
    cJSON *i_customer_timewindowstart = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "iCustomerTimewindowstart");
    if (!i_customer_timewindowstart) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_customer_timewindowstart))
    {
    goto end; //Numeric
    }

    // customer_response->i_customer_timewindowend
    cJSON *i_customer_timewindowend = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "iCustomerTimewindowend");
    if (!i_customer_timewindowend) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_customer_timewindowend))
    {
    goto end; //Numeric
    }

    // customer_response->d_customer_minimumchargeableinterests
    cJSON *d_customer_minimumchargeableinterests = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "dCustomerMinimumchargeableinterests");
    if (!d_customer_minimumchargeableinterests) {
        goto end;
    }

    
    if(!cJSON_IsString(d_customer_minimumchargeableinterests))
    {
    goto end; //String
    }

    // customer_response->dt_customer_birthdate
    cJSON *dt_customer_birthdate = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "dtCustomerBirthdate");
    if (!dt_customer_birthdate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_customer_birthdate))
    {
    goto end; //String
    }

    // customer_response->dt_customer_transfer
    cJSON *dt_customer_transfer = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "dtCustomerTransfer");
    if (!dt_customer_transfer) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_customer_transfer))
    {
    goto end; //String
    }

    // customer_response->dt_customer_transferappointment
    cJSON *dt_customer_transferappointment = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "dtCustomerTransferappointment");
    if (!dt_customer_transferappointment) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_customer_transferappointment))
    {
    goto end; //String
    }

    // customer_response->dt_customer_transfersurvey
    cJSON *dt_customer_transfersurvey = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "dtCustomerTransfersurvey");
    if (!dt_customer_transfersurvey) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_customer_transfersurvey))
    {
    goto end; //String
    }

    // customer_response->b_customer_isactive
    cJSON *b_customer_isactive = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "bCustomerIsactive");
    if (!b_customer_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_isactive))
    {
    goto end; //Bool
    }

    // customer_response->b_customer_variableexpensefinanced
    cJSON *b_customer_variableexpensefinanced = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "bCustomerVariableexpensefinanced");
    if (!b_customer_variableexpensefinanced) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_variableexpensefinanced))
    {
    goto end; //Bool
    }

    // customer_response->b_customer_variableexpensefinancedtaxes
    cJSON *b_customer_variableexpensefinancedtaxes = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "bCustomerVariableexpensefinancedtaxes");
    if (!b_customer_variableexpensefinancedtaxes) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_variableexpensefinancedtaxes))
    {
    goto end; //Bool
    }

    // customer_response->b_customer_supplychargefinanced
    cJSON *b_customer_supplychargefinanced = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "bCustomerSupplychargefinanced");
    if (!b_customer_supplychargefinanced) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_supplychargefinanced))
    {
    goto end; //Bool
    }

    // customer_response->b_customer_supplychargefinancedtaxes
    cJSON *b_customer_supplychargefinancedtaxes = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "bCustomerSupplychargefinancedtaxes");
    if (!b_customer_supplychargefinancedtaxes) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_supplychargefinancedtaxes))
    {
    goto end; //Bool
    }

    // customer_response->b_customer_attendance
    cJSON *b_customer_attendance = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "bCustomerAttendance");
    if (!b_customer_attendance) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_attendance))
    {
    goto end; //Bool
    }

    // customer_response->e_customer_type
    cJSON *e_customer_type = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "eCustomerType");
    if (!e_customer_type) {
        goto end;
    }

    
    e_customer_type_local_nonprim = field_e_customer_type_parseFromJSON(e_customer_type); //custom

    // customer_response->e_customer_marketingcorrespondence
    cJSON *e_customer_marketingcorrespondence = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "eCustomerMarketingcorrespondence");
    if (!e_customer_marketingcorrespondence) {
        goto end;
    }

    
    e_customer_marketingcorrespondence_local_nonprim = field_e_customer_marketingcorrespondence_parseFromJSON(e_customer_marketingcorrespondence); //custom

    // customer_response->b_customer_blackcopycarbon
    cJSON *b_customer_blackcopycarbon = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "bCustomerBlackcopycarbon");
    if (!b_customer_blackcopycarbon) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_blackcopycarbon))
    {
    goto end; //Bool
    }

    // customer_response->b_customer_unsubscribeinfo
    cJSON *b_customer_unsubscribeinfo = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "bCustomerUnsubscribeinfo");
    if (!b_customer_unsubscribeinfo) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_unsubscribeinfo))
    {
    goto end; //Bool
    }

    // customer_response->t_customer_comment
    cJSON *t_customer_comment = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "tCustomerComment");
    if (!t_customer_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(t_customer_comment))
    {
    goto end; //String
    }

    // customer_response->importid
    cJSON *importid = cJSON_GetObjectItemCaseSensitive(customer_responseJSON, "IMPORTID");
    if (importid) { 
    if(!cJSON_IsString(importid) && !cJSON_IsNull(importid))
    {
    goto end; //String
    }
    }


    customer_response_local_var = customer_response_create (
        pki_customer_id->valuedouble,
        fki_company_id->valuedouble,
        fki_customergroup_id->valuedouble,
        strdup(s_customer_name->valuestring),
        fki_contactinformations_id->valuedouble,
        fki_contactcontainer_id->valuedouble,
        fki_image_id->valuedouble,
        fki_glaccountcontainer_id->valuedouble,
        fki_language_id->valuedouble,
        fki_department_id->valuedouble,
        fki_paymentmethod_id->valuedouble,
        fki_electronicfundstransferbankaccount_id->valuedouble,
        fki_electronicfundstransferbankaccount_id_directdebit->valuedouble,
        fki_sendingmethod_id->valuedouble,
        fki_taxassignment_id->valuedouble,
        fki_attendancestatus_id->valuedouble,
        fki_agent_id_variableexpensechargeto->valuedouble,
        fki_broker_id_variableexpensechargeto->valuedouble,
        fki_customer_id_variableexpensechargeto->valuedouble,
        fki_glaccountcontainer_id_variableexpensechargeto->valuedouble,
        fki_agent_id_supplychargechargeto->valuedouble,
        fki_broker_id_supplychargechargeto->valuedouble,
        fki_customer_id_supplychargechargeto->valuedouble,
        fki_glaccountcontainer_id_supplychargechargeto->valuedouble,
        fki_invoicealternatelogo_id->valuedouble,
        fki_synchronizationlinkserver_id->valuedouble,
        efki_user_id ? efki_user_id->valuedouble : 0,
        efks_customer_code && !cJSON_IsNull(efks_customer_code) ? strdup(efks_customer_code->valuestring) : NULL,
        strdup(s_customer_code->valuestring),
        strdup(d_customer_fulltimeequivalent->valuestring),
        i_customer_photocopiercode->valuedouble,
        i_customer_longdistancecode->valuedouble,
        i_customer_timewindowstart->valuedouble,
        i_customer_timewindowend->valuedouble,
        strdup(d_customer_minimumchargeableinterests->valuestring),
        strdup(dt_customer_birthdate->valuestring),
        strdup(dt_customer_transfer->valuestring),
        strdup(dt_customer_transferappointment->valuestring),
        strdup(dt_customer_transfersurvey->valuestring),
        b_customer_isactive->valueint,
        b_customer_variableexpensefinanced->valueint,
        b_customer_variableexpensefinancedtaxes->valueint,
        b_customer_supplychargefinanced->valueint,
        b_customer_supplychargefinancedtaxes->valueint,
        b_customer_attendance->valueint,
        e_customer_type_local_nonprim,
        e_customer_marketingcorrespondence_local_nonprim,
        b_customer_blackcopycarbon->valueint,
        b_customer_unsubscribeinfo->valueint,
        strdup(t_customer_comment->valuestring),
        importid && !cJSON_IsNull(importid) ? strdup(importid->valuestring) : NULL
        );

    return customer_response_local_var;
end:
    if (e_customer_type_local_nonprim) {
        field_e_customer_type_free(e_customer_type_local_nonprim);
        e_customer_type_local_nonprim = NULL;
    }
    if (e_customer_marketingcorrespondence_local_nonprim) {
        field_e_customer_marketingcorrespondence_free(e_customer_marketingcorrespondence_local_nonprim);
        e_customer_marketingcorrespondence_local_nonprim = NULL;
    }
    return NULL;

}
