#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_response_compound.h"



static customer_response_compound_t *customer_response_compound_create_internal(
    int *pki_customer_id,
    int *fki_company_id,
    int *fki_customergroup_id,
    char *s_customer_name,
    char *s_customer_note,
    int *fki_contactinformations_id,
    int *fki_contactcontainer_id,
    int *fki_image_id,
    int *fki_glaccountcontainer_id,
    int *fki_language_id,
    int *fki_department_id,
    int *fki_paymentmethod_id,
    int *fki_electronicfundstransferbankaccount_id,
    int *fki_electronicfundstransferbankaccount_id_directdebit,
    int *fki_sendingmethod_id,
    int *fki_taxassignment_id,
    int *fki_attendancestatus_id,
    int *fki_agent_id_variableexpensechargeto,
    int *fki_broker_id_variableexpensechargeto,
    int *fki_customer_id_variableexpensechargeto,
    int *fki_glaccountcontainer_id_variableexpensechargeto,
    int *fki_agent_id_supplychargechargeto,
    int *fki_broker_id_supplychargechargeto,
    int *fki_customer_id_supplychargechargeto,
    int *fki_glaccountcontainer_id_supplychargechargeto,
    int *fki_invoicealternatelogo_id,
    int *fki_synchronizationlinkserver_id,
    int *efki_user_id,
    char *efks_customer_code,
    char *s_customer_code,
    char *d_customer_fulltimeequivalent,
    int *i_customer_photocopiercode,
    int *i_customer_longdistancecode,
    int *i_customer_timewindowstart,
    int *i_customer_timewindowend,
    char *d_customer_minimumchargeableinterests,
    char *dt_customer_birthdate,
    char *dt_customer_transfer,
    char *dt_customer_transferappointment,
    char *dt_customer_transfersurvey,
    int *b_customer_isactive,
    int *b_customer_variableexpensefinanced,
    int *b_customer_variableexpensefinancedtaxes,
    int *b_customer_supplychargefinanced,
    int *b_customer_supplychargefinancedtaxes,
    int *b_customer_attendance,
    ezmax_api_definition__full_field_e_customer_type__e e_customer_type,
    ezmax_api_definition__full_field_e_customer_marketingcorrespondence__e e_customer_marketingcorrespondence,
    int *b_customer_blackcopycarbon,
    int *b_customer_unsubscribeinfo,
    char *t_customer_comment,
    char *importid
    ) {
    customer_response_compound_t *customer_response_compound_local_var = malloc(sizeof(customer_response_compound_t));
    if (!customer_response_compound_local_var) {
        return NULL;
    }
    memset(customer_response_compound_local_var, 0, sizeof(customer_response_compound_t));
    customer_response_compound_local_var->_library_owned = 1;
    customer_response_compound_local_var->pki_customer_id = pki_customer_id;
    customer_response_compound_local_var->fki_company_id = fki_company_id;
    customer_response_compound_local_var->fki_customergroup_id = fki_customergroup_id;
    customer_response_compound_local_var->s_customer_name = s_customer_name;
    customer_response_compound_local_var->s_customer_note = s_customer_note;
    customer_response_compound_local_var->fki_contactinformations_id = fki_contactinformations_id;
    customer_response_compound_local_var->fki_contactcontainer_id = fki_contactcontainer_id;
    customer_response_compound_local_var->fki_image_id = fki_image_id;
    customer_response_compound_local_var->fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    customer_response_compound_local_var->fki_language_id = fki_language_id;
    customer_response_compound_local_var->fki_department_id = fki_department_id;
    customer_response_compound_local_var->fki_paymentmethod_id = fki_paymentmethod_id;
    customer_response_compound_local_var->fki_electronicfundstransferbankaccount_id = fki_electronicfundstransferbankaccount_id;
    customer_response_compound_local_var->fki_electronicfundstransferbankaccount_id_directdebit = fki_electronicfundstransferbankaccount_id_directdebit;
    customer_response_compound_local_var->fki_sendingmethod_id = fki_sendingmethod_id;
    customer_response_compound_local_var->fki_taxassignment_id = fki_taxassignment_id;
    customer_response_compound_local_var->fki_attendancestatus_id = fki_attendancestatus_id;
    customer_response_compound_local_var->fki_agent_id_variableexpensechargeto = fki_agent_id_variableexpensechargeto;
    customer_response_compound_local_var->fki_broker_id_variableexpensechargeto = fki_broker_id_variableexpensechargeto;
    customer_response_compound_local_var->fki_customer_id_variableexpensechargeto = fki_customer_id_variableexpensechargeto;
    customer_response_compound_local_var->fki_glaccountcontainer_id_variableexpensechargeto = fki_glaccountcontainer_id_variableexpensechargeto;
    customer_response_compound_local_var->fki_agent_id_supplychargechargeto = fki_agent_id_supplychargechargeto;
    customer_response_compound_local_var->fki_broker_id_supplychargechargeto = fki_broker_id_supplychargechargeto;
    customer_response_compound_local_var->fki_customer_id_supplychargechargeto = fki_customer_id_supplychargechargeto;
    customer_response_compound_local_var->fki_glaccountcontainer_id_supplychargechargeto = fki_glaccountcontainer_id_supplychargechargeto;
    customer_response_compound_local_var->fki_invoicealternatelogo_id = fki_invoicealternatelogo_id;
    customer_response_compound_local_var->fki_synchronizationlinkserver_id = fki_synchronizationlinkserver_id;
    customer_response_compound_local_var->efki_user_id = efki_user_id;
    customer_response_compound_local_var->efks_customer_code = efks_customer_code;
    customer_response_compound_local_var->s_customer_code = s_customer_code;
    customer_response_compound_local_var->d_customer_fulltimeequivalent = d_customer_fulltimeequivalent;
    customer_response_compound_local_var->i_customer_photocopiercode = i_customer_photocopiercode;
    customer_response_compound_local_var->i_customer_longdistancecode = i_customer_longdistancecode;
    customer_response_compound_local_var->i_customer_timewindowstart = i_customer_timewindowstart;
    customer_response_compound_local_var->i_customer_timewindowend = i_customer_timewindowend;
    customer_response_compound_local_var->d_customer_minimumchargeableinterests = d_customer_minimumchargeableinterests;
    customer_response_compound_local_var->dt_customer_birthdate = dt_customer_birthdate;
    customer_response_compound_local_var->dt_customer_transfer = dt_customer_transfer;
    customer_response_compound_local_var->dt_customer_transferappointment = dt_customer_transferappointment;
    customer_response_compound_local_var->dt_customer_transfersurvey = dt_customer_transfersurvey;
    customer_response_compound_local_var->b_customer_isactive = b_customer_isactive;
    customer_response_compound_local_var->b_customer_variableexpensefinanced = b_customer_variableexpensefinanced;
    customer_response_compound_local_var->b_customer_variableexpensefinancedtaxes = b_customer_variableexpensefinancedtaxes;
    customer_response_compound_local_var->b_customer_supplychargefinanced = b_customer_supplychargefinanced;
    customer_response_compound_local_var->b_customer_supplychargefinancedtaxes = b_customer_supplychargefinancedtaxes;
    customer_response_compound_local_var->b_customer_attendance = b_customer_attendance;
    customer_response_compound_local_var->e_customer_type = e_customer_type;
    customer_response_compound_local_var->e_customer_marketingcorrespondence = e_customer_marketingcorrespondence;
    customer_response_compound_local_var->b_customer_blackcopycarbon = b_customer_blackcopycarbon;
    customer_response_compound_local_var->b_customer_unsubscribeinfo = b_customer_unsubscribeinfo;
    customer_response_compound_local_var->t_customer_comment = t_customer_comment;
    customer_response_compound_local_var->importid = importid;
    return customer_response_compound_local_var;
}

__attribute__((deprecated)) customer_response_compound_t *customer_response_compound_create(
    int *pki_customer_id,
    int *fki_company_id,
    int *fki_customergroup_id,
    char *s_customer_name,
    char *s_customer_note,
    int *fki_contactinformations_id,
    int *fki_contactcontainer_id,
    int *fki_image_id,
    int *fki_glaccountcontainer_id,
    int *fki_language_id,
    int *fki_department_id,
    int *fki_paymentmethod_id,
    int *fki_electronicfundstransferbankaccount_id,
    int *fki_electronicfundstransferbankaccount_id_directdebit,
    int *fki_sendingmethod_id,
    int *fki_taxassignment_id,
    int *fki_attendancestatus_id,
    int *fki_agent_id_variableexpensechargeto,
    int *fki_broker_id_variableexpensechargeto,
    int *fki_customer_id_variableexpensechargeto,
    int *fki_glaccountcontainer_id_variableexpensechargeto,
    int *fki_agent_id_supplychargechargeto,
    int *fki_broker_id_supplychargechargeto,
    int *fki_customer_id_supplychargechargeto,
    int *fki_glaccountcontainer_id_supplychargechargeto,
    int *fki_invoicealternatelogo_id,
    int *fki_synchronizationlinkserver_id,
    int *efki_user_id,
    char *efks_customer_code,
    char *s_customer_code,
    char *d_customer_fulltimeequivalent,
    int *i_customer_photocopiercode,
    int *i_customer_longdistancecode,
    int *i_customer_timewindowstart,
    int *i_customer_timewindowend,
    char *d_customer_minimumchargeableinterests,
    char *dt_customer_birthdate,
    char *dt_customer_transfer,
    char *dt_customer_transferappointment,
    char *dt_customer_transfersurvey,
    int *b_customer_isactive,
    int *b_customer_variableexpensefinanced,
    int *b_customer_variableexpensefinancedtaxes,
    int *b_customer_supplychargefinanced,
    int *b_customer_supplychargefinancedtaxes,
    int *b_customer_attendance,
    ezmax_api_definition__full_field_e_customer_type__e e_customer_type,
    ezmax_api_definition__full_field_e_customer_marketingcorrespondence__e e_customer_marketingcorrespondence,
    int *b_customer_blackcopycarbon,
    int *b_customer_unsubscribeinfo,
    char *t_customer_comment,
    char *importid
    ) {
    int *pki_customer_id_copy = NULL;
    if (pki_customer_id) {
        pki_customer_id_copy = malloc(sizeof(int));
        if (pki_customer_id_copy) *pki_customer_id_copy = *pki_customer_id;
    }
    int *fki_company_id_copy = NULL;
    if (fki_company_id) {
        fki_company_id_copy = malloc(sizeof(int));
        if (fki_company_id_copy) *fki_company_id_copy = *fki_company_id;
    }
    int *fki_customergroup_id_copy = NULL;
    if (fki_customergroup_id) {
        fki_customergroup_id_copy = malloc(sizeof(int));
        if (fki_customergroup_id_copy) *fki_customergroup_id_copy = *fki_customergroup_id;
    }
    int *fki_contactinformations_id_copy = NULL;
    if (fki_contactinformations_id) {
        fki_contactinformations_id_copy = malloc(sizeof(int));
        if (fki_contactinformations_id_copy) *fki_contactinformations_id_copy = *fki_contactinformations_id;
    }
    int *fki_contactcontainer_id_copy = NULL;
    if (fki_contactcontainer_id) {
        fki_contactcontainer_id_copy = malloc(sizeof(int));
        if (fki_contactcontainer_id_copy) *fki_contactcontainer_id_copy = *fki_contactcontainer_id;
    }
    int *fki_image_id_copy = NULL;
    if (fki_image_id) {
        fki_image_id_copy = malloc(sizeof(int));
        if (fki_image_id_copy) *fki_image_id_copy = *fki_image_id;
    }
    int *fki_glaccountcontainer_id_copy = NULL;
    if (fki_glaccountcontainer_id) {
        fki_glaccountcontainer_id_copy = malloc(sizeof(int));
        if (fki_glaccountcontainer_id_copy) *fki_glaccountcontainer_id_copy = *fki_glaccountcontainer_id;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    int *fki_department_id_copy = NULL;
    if (fki_department_id) {
        fki_department_id_copy = malloc(sizeof(int));
        if (fki_department_id_copy) *fki_department_id_copy = *fki_department_id;
    }
    int *fki_paymentmethod_id_copy = NULL;
    if (fki_paymentmethod_id) {
        fki_paymentmethod_id_copy = malloc(sizeof(int));
        if (fki_paymentmethod_id_copy) *fki_paymentmethod_id_copy = *fki_paymentmethod_id;
    }
    int *fki_electronicfundstransferbankaccount_id_copy = NULL;
    if (fki_electronicfundstransferbankaccount_id) {
        fki_electronicfundstransferbankaccount_id_copy = malloc(sizeof(int));
        if (fki_electronicfundstransferbankaccount_id_copy) *fki_electronicfundstransferbankaccount_id_copy = *fki_electronicfundstransferbankaccount_id;
    }
    int *fki_electronicfundstransferbankaccount_id_directdebit_copy = NULL;
    if (fki_electronicfundstransferbankaccount_id_directdebit) {
        fki_electronicfundstransferbankaccount_id_directdebit_copy = malloc(sizeof(int));
        if (fki_electronicfundstransferbankaccount_id_directdebit_copy) *fki_electronicfundstransferbankaccount_id_directdebit_copy = *fki_electronicfundstransferbankaccount_id_directdebit;
    }
    int *fki_sendingmethod_id_copy = NULL;
    if (fki_sendingmethod_id) {
        fki_sendingmethod_id_copy = malloc(sizeof(int));
        if (fki_sendingmethod_id_copy) *fki_sendingmethod_id_copy = *fki_sendingmethod_id;
    }
    int *fki_taxassignment_id_copy = NULL;
    if (fki_taxassignment_id) {
        fki_taxassignment_id_copy = malloc(sizeof(int));
        if (fki_taxassignment_id_copy) *fki_taxassignment_id_copy = *fki_taxassignment_id;
    }
    int *fki_attendancestatus_id_copy = NULL;
    if (fki_attendancestatus_id) {
        fki_attendancestatus_id_copy = malloc(sizeof(int));
        if (fki_attendancestatus_id_copy) *fki_attendancestatus_id_copy = *fki_attendancestatus_id;
    }
    int *fki_agent_id_variableexpensechargeto_copy = NULL;
    if (fki_agent_id_variableexpensechargeto) {
        fki_agent_id_variableexpensechargeto_copy = malloc(sizeof(int));
        if (fki_agent_id_variableexpensechargeto_copy) *fki_agent_id_variableexpensechargeto_copy = *fki_agent_id_variableexpensechargeto;
    }
    int *fki_broker_id_variableexpensechargeto_copy = NULL;
    if (fki_broker_id_variableexpensechargeto) {
        fki_broker_id_variableexpensechargeto_copy = malloc(sizeof(int));
        if (fki_broker_id_variableexpensechargeto_copy) *fki_broker_id_variableexpensechargeto_copy = *fki_broker_id_variableexpensechargeto;
    }
    int *fki_customer_id_variableexpensechargeto_copy = NULL;
    if (fki_customer_id_variableexpensechargeto) {
        fki_customer_id_variableexpensechargeto_copy = malloc(sizeof(int));
        if (fki_customer_id_variableexpensechargeto_copy) *fki_customer_id_variableexpensechargeto_copy = *fki_customer_id_variableexpensechargeto;
    }
    int *fki_glaccountcontainer_id_variableexpensechargeto_copy = NULL;
    if (fki_glaccountcontainer_id_variableexpensechargeto) {
        fki_glaccountcontainer_id_variableexpensechargeto_copy = malloc(sizeof(int));
        if (fki_glaccountcontainer_id_variableexpensechargeto_copy) *fki_glaccountcontainer_id_variableexpensechargeto_copy = *fki_glaccountcontainer_id_variableexpensechargeto;
    }
    int *fki_agent_id_supplychargechargeto_copy = NULL;
    if (fki_agent_id_supplychargechargeto) {
        fki_agent_id_supplychargechargeto_copy = malloc(sizeof(int));
        if (fki_agent_id_supplychargechargeto_copy) *fki_agent_id_supplychargechargeto_copy = *fki_agent_id_supplychargechargeto;
    }
    int *fki_broker_id_supplychargechargeto_copy = NULL;
    if (fki_broker_id_supplychargechargeto) {
        fki_broker_id_supplychargechargeto_copy = malloc(sizeof(int));
        if (fki_broker_id_supplychargechargeto_copy) *fki_broker_id_supplychargechargeto_copy = *fki_broker_id_supplychargechargeto;
    }
    int *fki_customer_id_supplychargechargeto_copy = NULL;
    if (fki_customer_id_supplychargechargeto) {
        fki_customer_id_supplychargechargeto_copy = malloc(sizeof(int));
        if (fki_customer_id_supplychargechargeto_copy) *fki_customer_id_supplychargechargeto_copy = *fki_customer_id_supplychargechargeto;
    }
    int *fki_glaccountcontainer_id_supplychargechargeto_copy = NULL;
    if (fki_glaccountcontainer_id_supplychargechargeto) {
        fki_glaccountcontainer_id_supplychargechargeto_copy = malloc(sizeof(int));
        if (fki_glaccountcontainer_id_supplychargechargeto_copy) *fki_glaccountcontainer_id_supplychargechargeto_copy = *fki_glaccountcontainer_id_supplychargechargeto;
    }
    int *fki_invoicealternatelogo_id_copy = NULL;
    if (fki_invoicealternatelogo_id) {
        fki_invoicealternatelogo_id_copy = malloc(sizeof(int));
        if (fki_invoicealternatelogo_id_copy) *fki_invoicealternatelogo_id_copy = *fki_invoicealternatelogo_id;
    }
    int *fki_synchronizationlinkserver_id_copy = NULL;
    if (fki_synchronizationlinkserver_id) {
        fki_synchronizationlinkserver_id_copy = malloc(sizeof(int));
        if (fki_synchronizationlinkserver_id_copy) *fki_synchronizationlinkserver_id_copy = *fki_synchronizationlinkserver_id;
    }
    int *efki_user_id_copy = NULL;
    if (efki_user_id) {
        efki_user_id_copy = malloc(sizeof(int));
        if (efki_user_id_copy) *efki_user_id_copy = *efki_user_id;
    }
    int *i_customer_photocopiercode_copy = NULL;
    if (i_customer_photocopiercode) {
        i_customer_photocopiercode_copy = malloc(sizeof(int));
        if (i_customer_photocopiercode_copy) *i_customer_photocopiercode_copy = *i_customer_photocopiercode;
    }
    int *i_customer_longdistancecode_copy = NULL;
    if (i_customer_longdistancecode) {
        i_customer_longdistancecode_copy = malloc(sizeof(int));
        if (i_customer_longdistancecode_copy) *i_customer_longdistancecode_copy = *i_customer_longdistancecode;
    }
    int *i_customer_timewindowstart_copy = NULL;
    if (i_customer_timewindowstart) {
        i_customer_timewindowstart_copy = malloc(sizeof(int));
        if (i_customer_timewindowstart_copy) *i_customer_timewindowstart_copy = *i_customer_timewindowstart;
    }
    int *i_customer_timewindowend_copy = NULL;
    if (i_customer_timewindowend) {
        i_customer_timewindowend_copy = malloc(sizeof(int));
        if (i_customer_timewindowend_copy) *i_customer_timewindowend_copy = *i_customer_timewindowend;
    }
    int *b_customer_isactive_copy = NULL;
    if (b_customer_isactive) {
        b_customer_isactive_copy = malloc(sizeof(int));
        if (b_customer_isactive_copy) *b_customer_isactive_copy = *b_customer_isactive;
    }
    int *b_customer_variableexpensefinanced_copy = NULL;
    if (b_customer_variableexpensefinanced) {
        b_customer_variableexpensefinanced_copy = malloc(sizeof(int));
        if (b_customer_variableexpensefinanced_copy) *b_customer_variableexpensefinanced_copy = *b_customer_variableexpensefinanced;
    }
    int *b_customer_variableexpensefinancedtaxes_copy = NULL;
    if (b_customer_variableexpensefinancedtaxes) {
        b_customer_variableexpensefinancedtaxes_copy = malloc(sizeof(int));
        if (b_customer_variableexpensefinancedtaxes_copy) *b_customer_variableexpensefinancedtaxes_copy = *b_customer_variableexpensefinancedtaxes;
    }
    int *b_customer_supplychargefinanced_copy = NULL;
    if (b_customer_supplychargefinanced) {
        b_customer_supplychargefinanced_copy = malloc(sizeof(int));
        if (b_customer_supplychargefinanced_copy) *b_customer_supplychargefinanced_copy = *b_customer_supplychargefinanced;
    }
    int *b_customer_supplychargefinancedtaxes_copy = NULL;
    if (b_customer_supplychargefinancedtaxes) {
        b_customer_supplychargefinancedtaxes_copy = malloc(sizeof(int));
        if (b_customer_supplychargefinancedtaxes_copy) *b_customer_supplychargefinancedtaxes_copy = *b_customer_supplychargefinancedtaxes;
    }
    int *b_customer_attendance_copy = NULL;
    if (b_customer_attendance) {
        b_customer_attendance_copy = malloc(sizeof(int));
        if (b_customer_attendance_copy) *b_customer_attendance_copy = *b_customer_attendance;
    }
    int *b_customer_blackcopycarbon_copy = NULL;
    if (b_customer_blackcopycarbon) {
        b_customer_blackcopycarbon_copy = malloc(sizeof(int));
        if (b_customer_blackcopycarbon_copy) *b_customer_blackcopycarbon_copy = *b_customer_blackcopycarbon;
    }
    int *b_customer_unsubscribeinfo_copy = NULL;
    if (b_customer_unsubscribeinfo) {
        b_customer_unsubscribeinfo_copy = malloc(sizeof(int));
        if (b_customer_unsubscribeinfo_copy) *b_customer_unsubscribeinfo_copy = *b_customer_unsubscribeinfo;
    }
    customer_response_compound_t *result = customer_response_compound_create_internal (
        pki_customer_id_copy,
        fki_company_id_copy,
        fki_customergroup_id_copy,
        s_customer_name,
        s_customer_note,
        fki_contactinformations_id_copy,
        fki_contactcontainer_id_copy,
        fki_image_id_copy,
        fki_glaccountcontainer_id_copy,
        fki_language_id_copy,
        fki_department_id_copy,
        fki_paymentmethod_id_copy,
        fki_electronicfundstransferbankaccount_id_copy,
        fki_electronicfundstransferbankaccount_id_directdebit_copy,
        fki_sendingmethod_id_copy,
        fki_taxassignment_id_copy,
        fki_attendancestatus_id_copy,
        fki_agent_id_variableexpensechargeto_copy,
        fki_broker_id_variableexpensechargeto_copy,
        fki_customer_id_variableexpensechargeto_copy,
        fki_glaccountcontainer_id_variableexpensechargeto_copy,
        fki_agent_id_supplychargechargeto_copy,
        fki_broker_id_supplychargechargeto_copy,
        fki_customer_id_supplychargechargeto_copy,
        fki_glaccountcontainer_id_supplychargechargeto_copy,
        fki_invoicealternatelogo_id_copy,
        fki_synchronizationlinkserver_id_copy,
        efki_user_id_copy,
        efks_customer_code,
        s_customer_code,
        d_customer_fulltimeequivalent,
        i_customer_photocopiercode_copy,
        i_customer_longdistancecode_copy,
        i_customer_timewindowstart_copy,
        i_customer_timewindowend_copy,
        d_customer_minimumchargeableinterests,
        dt_customer_birthdate,
        dt_customer_transfer,
        dt_customer_transferappointment,
        dt_customer_transfersurvey,
        b_customer_isactive_copy,
        b_customer_variableexpensefinanced_copy,
        b_customer_variableexpensefinancedtaxes_copy,
        b_customer_supplychargefinanced_copy,
        b_customer_supplychargefinancedtaxes_copy,
        b_customer_attendance_copy,
        e_customer_type,
        e_customer_marketingcorrespondence,
        b_customer_blackcopycarbon_copy,
        b_customer_unsubscribeinfo_copy,
        t_customer_comment,
        importid
        );
    if (!result) {
        free(pki_customer_id_copy);
        free(fki_company_id_copy);
        free(fki_customergroup_id_copy);
        free(fki_contactinformations_id_copy);
        free(fki_contactcontainer_id_copy);
        free(fki_image_id_copy);
        free(fki_glaccountcontainer_id_copy);
        free(fki_language_id_copy);
        free(fki_department_id_copy);
        free(fki_paymentmethod_id_copy);
        free(fki_electronicfundstransferbankaccount_id_copy);
        free(fki_electronicfundstransferbankaccount_id_directdebit_copy);
        free(fki_sendingmethod_id_copy);
        free(fki_taxassignment_id_copy);
        free(fki_attendancestatus_id_copy);
        free(fki_agent_id_variableexpensechargeto_copy);
        free(fki_broker_id_variableexpensechargeto_copy);
        free(fki_customer_id_variableexpensechargeto_copy);
        free(fki_glaccountcontainer_id_variableexpensechargeto_copy);
        free(fki_agent_id_supplychargechargeto_copy);
        free(fki_broker_id_supplychargechargeto_copy);
        free(fki_customer_id_supplychargechargeto_copy);
        free(fki_glaccountcontainer_id_supplychargechargeto_copy);
        free(fki_invoicealternatelogo_id_copy);
        free(fki_synchronizationlinkserver_id_copy);
        free(efki_user_id_copy);
        free(i_customer_photocopiercode_copy);
        free(i_customer_longdistancecode_copy);
        free(i_customer_timewindowstart_copy);
        free(i_customer_timewindowend_copy);
        free(b_customer_isactive_copy);
        free(b_customer_variableexpensefinanced_copy);
        free(b_customer_variableexpensefinancedtaxes_copy);
        free(b_customer_supplychargefinanced_copy);
        free(b_customer_supplychargefinancedtaxes_copy);
        free(b_customer_attendance_copy);
        free(b_customer_blackcopycarbon_copy);
        free(b_customer_unsubscribeinfo_copy);
    }
    return result;
}

void customer_response_compound_free(customer_response_compound_t *customer_response_compound) {
    if(NULL == customer_response_compound){
        return ;
    }
    if(customer_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_response_compound->pki_customer_id) {
        free(customer_response_compound->pki_customer_id);
        customer_response_compound->pki_customer_id = NULL;
    }
    if (customer_response_compound->fki_company_id) {
        free(customer_response_compound->fki_company_id);
        customer_response_compound->fki_company_id = NULL;
    }
    if (customer_response_compound->fki_customergroup_id) {
        free(customer_response_compound->fki_customergroup_id);
        customer_response_compound->fki_customergroup_id = NULL;
    }
    if (customer_response_compound->s_customer_name) {
        free(customer_response_compound->s_customer_name);
        customer_response_compound->s_customer_name = NULL;
    }
    if (customer_response_compound->s_customer_note) {
        free(customer_response_compound->s_customer_note);
        customer_response_compound->s_customer_note = NULL;
    }
    if (customer_response_compound->fki_contactinformations_id) {
        free(customer_response_compound->fki_contactinformations_id);
        customer_response_compound->fki_contactinformations_id = NULL;
    }
    if (customer_response_compound->fki_contactcontainer_id) {
        free(customer_response_compound->fki_contactcontainer_id);
        customer_response_compound->fki_contactcontainer_id = NULL;
    }
    if (customer_response_compound->fki_image_id) {
        free(customer_response_compound->fki_image_id);
        customer_response_compound->fki_image_id = NULL;
    }
    if (customer_response_compound->fki_glaccountcontainer_id) {
        free(customer_response_compound->fki_glaccountcontainer_id);
        customer_response_compound->fki_glaccountcontainer_id = NULL;
    }
    if (customer_response_compound->fki_language_id) {
        free(customer_response_compound->fki_language_id);
        customer_response_compound->fki_language_id = NULL;
    }
    if (customer_response_compound->fki_department_id) {
        free(customer_response_compound->fki_department_id);
        customer_response_compound->fki_department_id = NULL;
    }
    if (customer_response_compound->fki_paymentmethod_id) {
        free(customer_response_compound->fki_paymentmethod_id);
        customer_response_compound->fki_paymentmethod_id = NULL;
    }
    if (customer_response_compound->fki_electronicfundstransferbankaccount_id) {
        free(customer_response_compound->fki_electronicfundstransferbankaccount_id);
        customer_response_compound->fki_electronicfundstransferbankaccount_id = NULL;
    }
    if (customer_response_compound->fki_electronicfundstransferbankaccount_id_directdebit) {
        free(customer_response_compound->fki_electronicfundstransferbankaccount_id_directdebit);
        customer_response_compound->fki_electronicfundstransferbankaccount_id_directdebit = NULL;
    }
    if (customer_response_compound->fki_sendingmethod_id) {
        free(customer_response_compound->fki_sendingmethod_id);
        customer_response_compound->fki_sendingmethod_id = NULL;
    }
    if (customer_response_compound->fki_taxassignment_id) {
        free(customer_response_compound->fki_taxassignment_id);
        customer_response_compound->fki_taxassignment_id = NULL;
    }
    if (customer_response_compound->fki_attendancestatus_id) {
        free(customer_response_compound->fki_attendancestatus_id);
        customer_response_compound->fki_attendancestatus_id = NULL;
    }
    if (customer_response_compound->fki_agent_id_variableexpensechargeto) {
        free(customer_response_compound->fki_agent_id_variableexpensechargeto);
        customer_response_compound->fki_agent_id_variableexpensechargeto = NULL;
    }
    if (customer_response_compound->fki_broker_id_variableexpensechargeto) {
        free(customer_response_compound->fki_broker_id_variableexpensechargeto);
        customer_response_compound->fki_broker_id_variableexpensechargeto = NULL;
    }
    if (customer_response_compound->fki_customer_id_variableexpensechargeto) {
        free(customer_response_compound->fki_customer_id_variableexpensechargeto);
        customer_response_compound->fki_customer_id_variableexpensechargeto = NULL;
    }
    if (customer_response_compound->fki_glaccountcontainer_id_variableexpensechargeto) {
        free(customer_response_compound->fki_glaccountcontainer_id_variableexpensechargeto);
        customer_response_compound->fki_glaccountcontainer_id_variableexpensechargeto = NULL;
    }
    if (customer_response_compound->fki_agent_id_supplychargechargeto) {
        free(customer_response_compound->fki_agent_id_supplychargechargeto);
        customer_response_compound->fki_agent_id_supplychargechargeto = NULL;
    }
    if (customer_response_compound->fki_broker_id_supplychargechargeto) {
        free(customer_response_compound->fki_broker_id_supplychargechargeto);
        customer_response_compound->fki_broker_id_supplychargechargeto = NULL;
    }
    if (customer_response_compound->fki_customer_id_supplychargechargeto) {
        free(customer_response_compound->fki_customer_id_supplychargechargeto);
        customer_response_compound->fki_customer_id_supplychargechargeto = NULL;
    }
    if (customer_response_compound->fki_glaccountcontainer_id_supplychargechargeto) {
        free(customer_response_compound->fki_glaccountcontainer_id_supplychargechargeto);
        customer_response_compound->fki_glaccountcontainer_id_supplychargechargeto = NULL;
    }
    if (customer_response_compound->fki_invoicealternatelogo_id) {
        free(customer_response_compound->fki_invoicealternatelogo_id);
        customer_response_compound->fki_invoicealternatelogo_id = NULL;
    }
    if (customer_response_compound->fki_synchronizationlinkserver_id) {
        free(customer_response_compound->fki_synchronizationlinkserver_id);
        customer_response_compound->fki_synchronizationlinkserver_id = NULL;
    }
    if (customer_response_compound->efki_user_id) {
        free(customer_response_compound->efki_user_id);
        customer_response_compound->efki_user_id = NULL;
    }
    if (customer_response_compound->efks_customer_code) {
        free(customer_response_compound->efks_customer_code);
        customer_response_compound->efks_customer_code = NULL;
    }
    if (customer_response_compound->s_customer_code) {
        free(customer_response_compound->s_customer_code);
        customer_response_compound->s_customer_code = NULL;
    }
    if (customer_response_compound->d_customer_fulltimeequivalent) {
        free(customer_response_compound->d_customer_fulltimeequivalent);
        customer_response_compound->d_customer_fulltimeequivalent = NULL;
    }
    if (customer_response_compound->i_customer_photocopiercode) {
        free(customer_response_compound->i_customer_photocopiercode);
        customer_response_compound->i_customer_photocopiercode = NULL;
    }
    if (customer_response_compound->i_customer_longdistancecode) {
        free(customer_response_compound->i_customer_longdistancecode);
        customer_response_compound->i_customer_longdistancecode = NULL;
    }
    if (customer_response_compound->i_customer_timewindowstart) {
        free(customer_response_compound->i_customer_timewindowstart);
        customer_response_compound->i_customer_timewindowstart = NULL;
    }
    if (customer_response_compound->i_customer_timewindowend) {
        free(customer_response_compound->i_customer_timewindowend);
        customer_response_compound->i_customer_timewindowend = NULL;
    }
    if (customer_response_compound->d_customer_minimumchargeableinterests) {
        free(customer_response_compound->d_customer_minimumchargeableinterests);
        customer_response_compound->d_customer_minimumchargeableinterests = NULL;
    }
    if (customer_response_compound->dt_customer_birthdate) {
        free(customer_response_compound->dt_customer_birthdate);
        customer_response_compound->dt_customer_birthdate = NULL;
    }
    if (customer_response_compound->dt_customer_transfer) {
        free(customer_response_compound->dt_customer_transfer);
        customer_response_compound->dt_customer_transfer = NULL;
    }
    if (customer_response_compound->dt_customer_transferappointment) {
        free(customer_response_compound->dt_customer_transferappointment);
        customer_response_compound->dt_customer_transferappointment = NULL;
    }
    if (customer_response_compound->dt_customer_transfersurvey) {
        free(customer_response_compound->dt_customer_transfersurvey);
        customer_response_compound->dt_customer_transfersurvey = NULL;
    }
    if (customer_response_compound->b_customer_isactive) {
        free(customer_response_compound->b_customer_isactive);
        customer_response_compound->b_customer_isactive = NULL;
    }
    if (customer_response_compound->b_customer_variableexpensefinanced) {
        free(customer_response_compound->b_customer_variableexpensefinanced);
        customer_response_compound->b_customer_variableexpensefinanced = NULL;
    }
    if (customer_response_compound->b_customer_variableexpensefinancedtaxes) {
        free(customer_response_compound->b_customer_variableexpensefinancedtaxes);
        customer_response_compound->b_customer_variableexpensefinancedtaxes = NULL;
    }
    if (customer_response_compound->b_customer_supplychargefinanced) {
        free(customer_response_compound->b_customer_supplychargefinanced);
        customer_response_compound->b_customer_supplychargefinanced = NULL;
    }
    if (customer_response_compound->b_customer_supplychargefinancedtaxes) {
        free(customer_response_compound->b_customer_supplychargefinancedtaxes);
        customer_response_compound->b_customer_supplychargefinancedtaxes = NULL;
    }
    if (customer_response_compound->b_customer_attendance) {
        free(customer_response_compound->b_customer_attendance);
        customer_response_compound->b_customer_attendance = NULL;
    }
    if (customer_response_compound->b_customer_blackcopycarbon) {
        free(customer_response_compound->b_customer_blackcopycarbon);
        customer_response_compound->b_customer_blackcopycarbon = NULL;
    }
    if (customer_response_compound->b_customer_unsubscribeinfo) {
        free(customer_response_compound->b_customer_unsubscribeinfo);
        customer_response_compound->b_customer_unsubscribeinfo = NULL;
    }
    if (customer_response_compound->t_customer_comment) {
        free(customer_response_compound->t_customer_comment);
        customer_response_compound->t_customer_comment = NULL;
    }
    if (customer_response_compound->importid) {
        free(customer_response_compound->importid);
        customer_response_compound->importid = NULL;
    }
    free(customer_response_compound);
}

cJSON *customer_response_compound_convertToJSON(customer_response_compound_t *customer_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // customer_response_compound->pki_customer_id
    if (!customer_response_compound->pki_customer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCustomerID", *customer_response_compound->pki_customer_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_company_id
    if (!customer_response_compound->fki_company_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCompanyID", *customer_response_compound->fki_company_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_customergroup_id
    if (!customer_response_compound->fki_customergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCustomergroupID", *customer_response_compound->fki_customergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->s_customer_name
    if (!customer_response_compound->s_customer_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCustomerName", customer_response_compound->s_customer_name) == NULL) {
    goto fail; //String
    }


    // customer_response_compound->s_customer_note
    if(customer_response_compound->s_customer_note) {
    if(cJSON_AddStringToObject(item, "sCustomerNote", customer_response_compound->s_customer_note) == NULL) {
    goto fail; //String
    }
    }


    // customer_response_compound->fki_contactinformations_id
    if (!customer_response_compound->fki_contactinformations_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContactinformationsID", *customer_response_compound->fki_contactinformations_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_contactcontainer_id
    if (!customer_response_compound->fki_contactcontainer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiContactcontainerID", *customer_response_compound->fki_contactcontainer_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_image_id
    if (!customer_response_compound->fki_image_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiImageID", *customer_response_compound->fki_image_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_glaccountcontainer_id
    if (!customer_response_compound->fki_glaccountcontainer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerID", *customer_response_compound->fki_glaccountcontainer_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_language_id
    if (!customer_response_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *customer_response_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_department_id
    if (!customer_response_compound->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", *customer_response_compound->fki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_paymentmethod_id
    if (!customer_response_compound->fki_paymentmethod_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPaymentmethodID", *customer_response_compound->fki_paymentmethod_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_electronicfundstransferbankaccount_id
    if (!customer_response_compound->fki_electronicfundstransferbankaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiElectronicfundstransferbankaccountID", *customer_response_compound->fki_electronicfundstransferbankaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_electronicfundstransferbankaccount_id_directdebit
    if (!customer_response_compound->fki_electronicfundstransferbankaccount_id_directdebit) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiElectronicfundstransferbankaccountIDDirectdebit", *customer_response_compound->fki_electronicfundstransferbankaccount_id_directdebit) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_sendingmethod_id
    if (!customer_response_compound->fki_sendingmethod_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSendingmethodID", *customer_response_compound->fki_sendingmethod_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_taxassignment_id
    if (!customer_response_compound->fki_taxassignment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiTaxassignmentID", *customer_response_compound->fki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_attendancestatus_id
    if (!customer_response_compound->fki_attendancestatus_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAttendancestatusID", *customer_response_compound->fki_attendancestatus_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_agent_id_variableexpensechargeto
    if (!customer_response_compound->fki_agent_id_variableexpensechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAgentIDVariableexpensechargeto", *customer_response_compound->fki_agent_id_variableexpensechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_broker_id_variableexpensechargeto
    if (!customer_response_compound->fki_broker_id_variableexpensechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrokerIDVariableexpensechargeto", *customer_response_compound->fki_broker_id_variableexpensechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_customer_id_variableexpensechargeto
    if (!customer_response_compound->fki_customer_id_variableexpensechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCustomerIDVariableexpensechargeto", *customer_response_compound->fki_customer_id_variableexpensechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_glaccountcontainer_id_variableexpensechargeto
    if (!customer_response_compound->fki_glaccountcontainer_id_variableexpensechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerIDVariableexpensechargeto", *customer_response_compound->fki_glaccountcontainer_id_variableexpensechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_agent_id_supplychargechargeto
    if (!customer_response_compound->fki_agent_id_supplychargechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAgentIDSupplychargechargeto", *customer_response_compound->fki_agent_id_supplychargechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_broker_id_supplychargechargeto
    if (!customer_response_compound->fki_broker_id_supplychargechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrokerIDSupplychargechargeto", *customer_response_compound->fki_broker_id_supplychargechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_customer_id_supplychargechargeto
    if (!customer_response_compound->fki_customer_id_supplychargechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCustomerIDSupplychargechargeto", *customer_response_compound->fki_customer_id_supplychargechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_glaccountcontainer_id_supplychargechargeto
    if (!customer_response_compound->fki_glaccountcontainer_id_supplychargechargeto) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerIDSupplychargechargeto", *customer_response_compound->fki_glaccountcontainer_id_supplychargechargeto) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_invoicealternatelogo_id
    if (!customer_response_compound->fki_invoicealternatelogo_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInvoicealternatelogoID", *customer_response_compound->fki_invoicealternatelogo_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->fki_synchronizationlinkserver_id
    if (!customer_response_compound->fki_synchronizationlinkserver_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSynchronizationlinkserverID", *customer_response_compound->fki_synchronizationlinkserver_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->efki_user_id
    if(customer_response_compound->efki_user_id) {
    if(cJSON_AddNumberToObject(item, "efkiUserID", *customer_response_compound->efki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // customer_response_compound->efks_customer_code
    if(customer_response_compound->efks_customer_code) {
    if(cJSON_AddStringToObject(item, "efksCustomerCode", customer_response_compound->efks_customer_code) == NULL) {
    goto fail; //String
    }
    }


    // customer_response_compound->s_customer_code
    if (!customer_response_compound->s_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCustomerCode", customer_response_compound->s_customer_code) == NULL) {
    goto fail; //String
    }


    // customer_response_compound->d_customer_fulltimeequivalent
    if (!customer_response_compound->d_customer_fulltimeequivalent) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dCustomerFulltimeequivalent", customer_response_compound->d_customer_fulltimeequivalent) == NULL) {
    goto fail; //String
    }


    // customer_response_compound->i_customer_photocopiercode
    if (!customer_response_compound->i_customer_photocopiercode) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCustomerPhotocopiercode", *customer_response_compound->i_customer_photocopiercode) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->i_customer_longdistancecode
    if (!customer_response_compound->i_customer_longdistancecode) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCustomerLongdistancecode", *customer_response_compound->i_customer_longdistancecode) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->i_customer_timewindowstart
    if (!customer_response_compound->i_customer_timewindowstart) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCustomerTimewindowstart", *customer_response_compound->i_customer_timewindowstart) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->i_customer_timewindowend
    if (!customer_response_compound->i_customer_timewindowend) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCustomerTimewindowend", *customer_response_compound->i_customer_timewindowend) == NULL) {
    goto fail; //Numeric
    }


    // customer_response_compound->d_customer_minimumchargeableinterests
    if (!customer_response_compound->d_customer_minimumchargeableinterests) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dCustomerMinimumchargeableinterests", customer_response_compound->d_customer_minimumchargeableinterests) == NULL) {
    goto fail; //String
    }


    // customer_response_compound->dt_customer_birthdate
    if (!customer_response_compound->dt_customer_birthdate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCustomerBirthdate", customer_response_compound->dt_customer_birthdate) == NULL) {
    goto fail; //String
    }


    // customer_response_compound->dt_customer_transfer
    if (!customer_response_compound->dt_customer_transfer) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCustomerTransfer", customer_response_compound->dt_customer_transfer) == NULL) {
    goto fail; //String
    }


    // customer_response_compound->dt_customer_transferappointment
    if (!customer_response_compound->dt_customer_transferappointment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCustomerTransferappointment", customer_response_compound->dt_customer_transferappointment) == NULL) {
    goto fail; //String
    }


    // customer_response_compound->dt_customer_transfersurvey
    if (!customer_response_compound->dt_customer_transfersurvey) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCustomerTransfersurvey", customer_response_compound->dt_customer_transfersurvey) == NULL) {
    goto fail; //String
    }


    // customer_response_compound->b_customer_isactive
    if (!customer_response_compound->b_customer_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerIsactive", *customer_response_compound->b_customer_isactive) == NULL) {
    goto fail; //Bool
    }


    // customer_response_compound->b_customer_variableexpensefinanced
    if (!customer_response_compound->b_customer_variableexpensefinanced) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerVariableexpensefinanced", *customer_response_compound->b_customer_variableexpensefinanced) == NULL) {
    goto fail; //Bool
    }


    // customer_response_compound->b_customer_variableexpensefinancedtaxes
    if (!customer_response_compound->b_customer_variableexpensefinancedtaxes) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerVariableexpensefinancedtaxes", *customer_response_compound->b_customer_variableexpensefinancedtaxes) == NULL) {
    goto fail; //Bool
    }


    // customer_response_compound->b_customer_supplychargefinanced
    if (!customer_response_compound->b_customer_supplychargefinanced) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerSupplychargefinanced", *customer_response_compound->b_customer_supplychargefinanced) == NULL) {
    goto fail; //Bool
    }


    // customer_response_compound->b_customer_supplychargefinancedtaxes
    if (!customer_response_compound->b_customer_supplychargefinancedtaxes) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerSupplychargefinancedtaxes", *customer_response_compound->b_customer_supplychargefinancedtaxes) == NULL) {
    goto fail; //Bool
    }


    // customer_response_compound->b_customer_attendance
    if (!customer_response_compound->b_customer_attendance) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerAttendance", *customer_response_compound->b_customer_attendance) == NULL) {
    goto fail; //Bool
    }


    // customer_response_compound->e_customer_type
    if (ezmax_api_definition__full_field_e_customer_type__NULL == customer_response_compound->e_customer_type) {
        goto fail;
    }
    cJSON *e_customer_type_local_JSON = field_e_customer_type_convertToJSON(customer_response_compound->e_customer_type);
    if(e_customer_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCustomerType", e_customer_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // customer_response_compound->e_customer_marketingcorrespondence
    if (ezmax_api_definition__full_field_e_customer_marketingcorrespondence__NULL == customer_response_compound->e_customer_marketingcorrespondence) {
        goto fail;
    }
    cJSON *e_customer_marketingcorrespondence_local_JSON = field_e_customer_marketingcorrespondence_convertToJSON(customer_response_compound->e_customer_marketingcorrespondence);
    if(e_customer_marketingcorrespondence_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eCustomerMarketingcorrespondence", e_customer_marketingcorrespondence_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // customer_response_compound->b_customer_blackcopycarbon
    if (!customer_response_compound->b_customer_blackcopycarbon) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerBlackcopycarbon", *customer_response_compound->b_customer_blackcopycarbon) == NULL) {
    goto fail; //Bool
    }


    // customer_response_compound->b_customer_unsubscribeinfo
    if (!customer_response_compound->b_customer_unsubscribeinfo) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerUnsubscribeinfo", *customer_response_compound->b_customer_unsubscribeinfo) == NULL) {
    goto fail; //Bool
    }


    // customer_response_compound->t_customer_comment
    if (!customer_response_compound->t_customer_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tCustomerComment", customer_response_compound->t_customer_comment) == NULL) {
    goto fail; //String
    }


    // customer_response_compound->importid
    if(customer_response_compound->importid) {
    if(cJSON_AddStringToObject(item, "IMPORTID", customer_response_compound->importid) == NULL) {
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

customer_response_compound_t *customer_response_compound_parseFromJSON(cJSON *customer_response_compoundJSON){

    customer_response_compound_t *customer_response_compound_local_var = NULL;

    // define the local variable for customer_response_compound->pki_customer_id
    int *pki_customer_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_company_id
    int *fki_company_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_customergroup_id
    int *fki_customergroup_id_local_var = NULL;

    char *s_customer_name_local_str = NULL;

    char *s_customer_note_local_str = NULL;

    // define the local variable for customer_response_compound->fki_contactinformations_id
    int *fki_contactinformations_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_contactcontainer_id
    int *fki_contactcontainer_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_image_id
    int *fki_image_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_glaccountcontainer_id
    int *fki_glaccountcontainer_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_language_id
    int *fki_language_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_department_id
    int *fki_department_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_paymentmethod_id
    int *fki_paymentmethod_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_electronicfundstransferbankaccount_id
    int *fki_electronicfundstransferbankaccount_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_electronicfundstransferbankaccount_id_directdebit
    int *fki_electronicfundstransferbankaccount_id_directdebit_local_var = NULL;

    // define the local variable for customer_response_compound->fki_sendingmethod_id
    int *fki_sendingmethod_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_taxassignment_id
    int *fki_taxassignment_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_attendancestatus_id
    int *fki_attendancestatus_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_agent_id_variableexpensechargeto
    int *fki_agent_id_variableexpensechargeto_local_var = NULL;

    // define the local variable for customer_response_compound->fki_broker_id_variableexpensechargeto
    int *fki_broker_id_variableexpensechargeto_local_var = NULL;

    // define the local variable for customer_response_compound->fki_customer_id_variableexpensechargeto
    int *fki_customer_id_variableexpensechargeto_local_var = NULL;

    // define the local variable for customer_response_compound->fki_glaccountcontainer_id_variableexpensechargeto
    int *fki_glaccountcontainer_id_variableexpensechargeto_local_var = NULL;

    // define the local variable for customer_response_compound->fki_agent_id_supplychargechargeto
    int *fki_agent_id_supplychargechargeto_local_var = NULL;

    // define the local variable for customer_response_compound->fki_broker_id_supplychargechargeto
    int *fki_broker_id_supplychargechargeto_local_var = NULL;

    // define the local variable for customer_response_compound->fki_customer_id_supplychargechargeto
    int *fki_customer_id_supplychargechargeto_local_var = NULL;

    // define the local variable for customer_response_compound->fki_glaccountcontainer_id_supplychargechargeto
    int *fki_glaccountcontainer_id_supplychargechargeto_local_var = NULL;

    // define the local variable for customer_response_compound->fki_invoicealternatelogo_id
    int *fki_invoicealternatelogo_id_local_var = NULL;

    // define the local variable for customer_response_compound->fki_synchronizationlinkserver_id
    int *fki_synchronizationlinkserver_id_local_var = NULL;

    // define the local variable for customer_response_compound->efki_user_id
    int *efki_user_id_local_var = NULL;

    char *efks_customer_code_local_str = NULL;

    char *s_customer_code_local_str = NULL;

    char *d_customer_fulltimeequivalent_local_str = NULL;

    // define the local variable for customer_response_compound->i_customer_photocopiercode
    int *i_customer_photocopiercode_local_var = NULL;

    // define the local variable for customer_response_compound->i_customer_longdistancecode
    int *i_customer_longdistancecode_local_var = NULL;

    // define the local variable for customer_response_compound->i_customer_timewindowstart
    int *i_customer_timewindowstart_local_var = NULL;

    // define the local variable for customer_response_compound->i_customer_timewindowend
    int *i_customer_timewindowend_local_var = NULL;

    char *d_customer_minimumchargeableinterests_local_str = NULL;

    char *dt_customer_birthdate_local_str = NULL;

    char *dt_customer_transfer_local_str = NULL;

    char *dt_customer_transferappointment_local_str = NULL;

    char *dt_customer_transfersurvey_local_str = NULL;

    // define the local variable for customer_response_compound->b_customer_isactive
    int *b_customer_isactive_local_var = NULL;

    // define the local variable for customer_response_compound->b_customer_variableexpensefinanced
    int *b_customer_variableexpensefinanced_local_var = NULL;

    // define the local variable for customer_response_compound->b_customer_variableexpensefinancedtaxes
    int *b_customer_variableexpensefinancedtaxes_local_var = NULL;

    // define the local variable for customer_response_compound->b_customer_supplychargefinanced
    int *b_customer_supplychargefinanced_local_var = NULL;

    // define the local variable for customer_response_compound->b_customer_supplychargefinancedtaxes
    int *b_customer_supplychargefinancedtaxes_local_var = NULL;

    // define the local variable for customer_response_compound->b_customer_attendance
    int *b_customer_attendance_local_var = NULL;

    // define the local variable for customer_response_compound->e_customer_type
    ezmax_api_definition__full_field_e_customer_type__e e_customer_type_local_nonprim = 0;

    // define the local variable for customer_response_compound->e_customer_marketingcorrespondence
    ezmax_api_definition__full_field_e_customer_marketingcorrespondence__e e_customer_marketingcorrespondence_local_nonprim = 0;

    // define the local variable for customer_response_compound->b_customer_blackcopycarbon
    int *b_customer_blackcopycarbon_local_var = NULL;

    // define the local variable for customer_response_compound->b_customer_unsubscribeinfo
    int *b_customer_unsubscribeinfo_local_var = NULL;

    char *t_customer_comment_local_str = NULL;

    char *importid_local_str = NULL;

    // customer_response_compound->pki_customer_id
    cJSON *pki_customer_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "pkiCustomerID");
    if (cJSON_IsNull(pki_customer_id)) {
        pki_customer_id = NULL;
    }
    if (!pki_customer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_customer_id))
    {
    goto end; //Numeric
    }
    pki_customer_id_local_var = malloc(sizeof(int));
    if(!pki_customer_id_local_var)
    {
        goto end;
    }
    *pki_customer_id_local_var = pki_customer_id->valuedouble;

    // customer_response_compound->fki_company_id
    cJSON *fki_company_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiCompanyID");
    if (cJSON_IsNull(fki_company_id)) {
        fki_company_id = NULL;
    }
    if (!fki_company_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_company_id))
    {
    goto end; //Numeric
    }
    fki_company_id_local_var = malloc(sizeof(int));
    if(!fki_company_id_local_var)
    {
        goto end;
    }
    *fki_company_id_local_var = fki_company_id->valuedouble;

    // customer_response_compound->fki_customergroup_id
    cJSON *fki_customergroup_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiCustomergroupID");
    if (cJSON_IsNull(fki_customergroup_id)) {
        fki_customergroup_id = NULL;
    }
    if (!fki_customergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_customergroup_id))
    {
    goto end; //Numeric
    }
    fki_customergroup_id_local_var = malloc(sizeof(int));
    if(!fki_customergroup_id_local_var)
    {
        goto end;
    }
    *fki_customergroup_id_local_var = fki_customergroup_id->valuedouble;

    // customer_response_compound->s_customer_name
    cJSON *s_customer_name = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "sCustomerName");
    if (cJSON_IsNull(s_customer_name)) {
        s_customer_name = NULL;
    }
    if (!s_customer_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_name))
    {
    goto end; //String
    }

    // customer_response_compound->s_customer_note
    cJSON *s_customer_note = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "sCustomerNote");
    if (cJSON_IsNull(s_customer_note)) {
        s_customer_note = NULL;
    }
    if (s_customer_note) { 
    if(!cJSON_IsString(s_customer_note) && !cJSON_IsNull(s_customer_note))
    {
    goto end; //String
    }
    }

    // customer_response_compound->fki_contactinformations_id
    cJSON *fki_contactinformations_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiContactinformationsID");
    if (cJSON_IsNull(fki_contactinformations_id)) {
        fki_contactinformations_id = NULL;
    }
    if (!fki_contactinformations_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contactinformations_id))
    {
    goto end; //Numeric
    }
    fki_contactinformations_id_local_var = malloc(sizeof(int));
    if(!fki_contactinformations_id_local_var)
    {
        goto end;
    }
    *fki_contactinformations_id_local_var = fki_contactinformations_id->valuedouble;

    // customer_response_compound->fki_contactcontainer_id
    cJSON *fki_contactcontainer_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiContactcontainerID");
    if (cJSON_IsNull(fki_contactcontainer_id)) {
        fki_contactcontainer_id = NULL;
    }
    if (!fki_contactcontainer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_contactcontainer_id))
    {
    goto end; //Numeric
    }
    fki_contactcontainer_id_local_var = malloc(sizeof(int));
    if(!fki_contactcontainer_id_local_var)
    {
        goto end;
    }
    *fki_contactcontainer_id_local_var = fki_contactcontainer_id->valuedouble;

    // customer_response_compound->fki_image_id
    cJSON *fki_image_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiImageID");
    if (cJSON_IsNull(fki_image_id)) {
        fki_image_id = NULL;
    }
    if (!fki_image_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_image_id))
    {
    goto end; //Numeric
    }
    fki_image_id_local_var = malloc(sizeof(int));
    if(!fki_image_id_local_var)
    {
        goto end;
    }
    *fki_image_id_local_var = fki_image_id->valuedouble;

    // customer_response_compound->fki_glaccountcontainer_id
    cJSON *fki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiGlaccountcontainerID");
    if (cJSON_IsNull(fki_glaccountcontainer_id)) {
        fki_glaccountcontainer_id = NULL;
    }
    if (!fki_glaccountcontainer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }
    fki_glaccountcontainer_id_local_var = malloc(sizeof(int));
    if(!fki_glaccountcontainer_id_local_var)
    {
        goto end;
    }
    *fki_glaccountcontainer_id_local_var = fki_glaccountcontainer_id->valuedouble;

    // customer_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    fki_language_id_local_var = malloc(sizeof(int));
    if(!fki_language_id_local_var)
    {
        goto end;
    }
    *fki_language_id_local_var = fki_language_id->valuedouble;

    // customer_response_compound->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiDepartmentID");
    if (cJSON_IsNull(fki_department_id)) {
        fki_department_id = NULL;
    }
    if (!fki_department_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_department_id))
    {
    goto end; //Numeric
    }
    fki_department_id_local_var = malloc(sizeof(int));
    if(!fki_department_id_local_var)
    {
        goto end;
    }
    *fki_department_id_local_var = fki_department_id->valuedouble;

    // customer_response_compound->fki_paymentmethod_id
    cJSON *fki_paymentmethod_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiPaymentmethodID");
    if (cJSON_IsNull(fki_paymentmethod_id)) {
        fki_paymentmethod_id = NULL;
    }
    if (!fki_paymentmethod_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_paymentmethod_id))
    {
    goto end; //Numeric
    }
    fki_paymentmethod_id_local_var = malloc(sizeof(int));
    if(!fki_paymentmethod_id_local_var)
    {
        goto end;
    }
    *fki_paymentmethod_id_local_var = fki_paymentmethod_id->valuedouble;

    // customer_response_compound->fki_electronicfundstransferbankaccount_id
    cJSON *fki_electronicfundstransferbankaccount_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiElectronicfundstransferbankaccountID");
    if (cJSON_IsNull(fki_electronicfundstransferbankaccount_id)) {
        fki_electronicfundstransferbankaccount_id = NULL;
    }
    if (!fki_electronicfundstransferbankaccount_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_electronicfundstransferbankaccount_id))
    {
    goto end; //Numeric
    }
    fki_electronicfundstransferbankaccount_id_local_var = malloc(sizeof(int));
    if(!fki_electronicfundstransferbankaccount_id_local_var)
    {
        goto end;
    }
    *fki_electronicfundstransferbankaccount_id_local_var = fki_electronicfundstransferbankaccount_id->valuedouble;

    // customer_response_compound->fki_electronicfundstransferbankaccount_id_directdebit
    cJSON *fki_electronicfundstransferbankaccount_id_directdebit = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiElectronicfundstransferbankaccountIDDirectdebit");
    if (cJSON_IsNull(fki_electronicfundstransferbankaccount_id_directdebit)) {
        fki_electronicfundstransferbankaccount_id_directdebit = NULL;
    }
    if (!fki_electronicfundstransferbankaccount_id_directdebit) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_electronicfundstransferbankaccount_id_directdebit))
    {
    goto end; //Numeric
    }
    fki_electronicfundstransferbankaccount_id_directdebit_local_var = malloc(sizeof(int));
    if(!fki_electronicfundstransferbankaccount_id_directdebit_local_var)
    {
        goto end;
    }
    *fki_electronicfundstransferbankaccount_id_directdebit_local_var = fki_electronicfundstransferbankaccount_id_directdebit->valuedouble;

    // customer_response_compound->fki_sendingmethod_id
    cJSON *fki_sendingmethod_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiSendingmethodID");
    if (cJSON_IsNull(fki_sendingmethod_id)) {
        fki_sendingmethod_id = NULL;
    }
    if (!fki_sendingmethod_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_sendingmethod_id))
    {
    goto end; //Numeric
    }
    fki_sendingmethod_id_local_var = malloc(sizeof(int));
    if(!fki_sendingmethod_id_local_var)
    {
        goto end;
    }
    *fki_sendingmethod_id_local_var = fki_sendingmethod_id->valuedouble;

    // customer_response_compound->fki_taxassignment_id
    cJSON *fki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiTaxassignmentID");
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
    fki_taxassignment_id_local_var = malloc(sizeof(int));
    if(!fki_taxassignment_id_local_var)
    {
        goto end;
    }
    *fki_taxassignment_id_local_var = fki_taxassignment_id->valuedouble;

    // customer_response_compound->fki_attendancestatus_id
    cJSON *fki_attendancestatus_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiAttendancestatusID");
    if (cJSON_IsNull(fki_attendancestatus_id)) {
        fki_attendancestatus_id = NULL;
    }
    if (!fki_attendancestatus_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_attendancestatus_id))
    {
    goto end; //Numeric
    }
    fki_attendancestatus_id_local_var = malloc(sizeof(int));
    if(!fki_attendancestatus_id_local_var)
    {
        goto end;
    }
    *fki_attendancestatus_id_local_var = fki_attendancestatus_id->valuedouble;

    // customer_response_compound->fki_agent_id_variableexpensechargeto
    cJSON *fki_agent_id_variableexpensechargeto = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiAgentIDVariableexpensechargeto");
    if (cJSON_IsNull(fki_agent_id_variableexpensechargeto)) {
        fki_agent_id_variableexpensechargeto = NULL;
    }
    if (!fki_agent_id_variableexpensechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_agent_id_variableexpensechargeto))
    {
    goto end; //Numeric
    }
    fki_agent_id_variableexpensechargeto_local_var = malloc(sizeof(int));
    if(!fki_agent_id_variableexpensechargeto_local_var)
    {
        goto end;
    }
    *fki_agent_id_variableexpensechargeto_local_var = fki_agent_id_variableexpensechargeto->valuedouble;

    // customer_response_compound->fki_broker_id_variableexpensechargeto
    cJSON *fki_broker_id_variableexpensechargeto = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiBrokerIDVariableexpensechargeto");
    if (cJSON_IsNull(fki_broker_id_variableexpensechargeto)) {
        fki_broker_id_variableexpensechargeto = NULL;
    }
    if (!fki_broker_id_variableexpensechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_broker_id_variableexpensechargeto))
    {
    goto end; //Numeric
    }
    fki_broker_id_variableexpensechargeto_local_var = malloc(sizeof(int));
    if(!fki_broker_id_variableexpensechargeto_local_var)
    {
        goto end;
    }
    *fki_broker_id_variableexpensechargeto_local_var = fki_broker_id_variableexpensechargeto->valuedouble;

    // customer_response_compound->fki_customer_id_variableexpensechargeto
    cJSON *fki_customer_id_variableexpensechargeto = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiCustomerIDVariableexpensechargeto");
    if (cJSON_IsNull(fki_customer_id_variableexpensechargeto)) {
        fki_customer_id_variableexpensechargeto = NULL;
    }
    if (!fki_customer_id_variableexpensechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_customer_id_variableexpensechargeto))
    {
    goto end; //Numeric
    }
    fki_customer_id_variableexpensechargeto_local_var = malloc(sizeof(int));
    if(!fki_customer_id_variableexpensechargeto_local_var)
    {
        goto end;
    }
    *fki_customer_id_variableexpensechargeto_local_var = fki_customer_id_variableexpensechargeto->valuedouble;

    // customer_response_compound->fki_glaccountcontainer_id_variableexpensechargeto
    cJSON *fki_glaccountcontainer_id_variableexpensechargeto = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiGlaccountcontainerIDVariableexpensechargeto");
    if (cJSON_IsNull(fki_glaccountcontainer_id_variableexpensechargeto)) {
        fki_glaccountcontainer_id_variableexpensechargeto = NULL;
    }
    if (!fki_glaccountcontainer_id_variableexpensechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_glaccountcontainer_id_variableexpensechargeto))
    {
    goto end; //Numeric
    }
    fki_glaccountcontainer_id_variableexpensechargeto_local_var = malloc(sizeof(int));
    if(!fki_glaccountcontainer_id_variableexpensechargeto_local_var)
    {
        goto end;
    }
    *fki_glaccountcontainer_id_variableexpensechargeto_local_var = fki_glaccountcontainer_id_variableexpensechargeto->valuedouble;

    // customer_response_compound->fki_agent_id_supplychargechargeto
    cJSON *fki_agent_id_supplychargechargeto = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiAgentIDSupplychargechargeto");
    if (cJSON_IsNull(fki_agent_id_supplychargechargeto)) {
        fki_agent_id_supplychargechargeto = NULL;
    }
    if (!fki_agent_id_supplychargechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_agent_id_supplychargechargeto))
    {
    goto end; //Numeric
    }
    fki_agent_id_supplychargechargeto_local_var = malloc(sizeof(int));
    if(!fki_agent_id_supplychargechargeto_local_var)
    {
        goto end;
    }
    *fki_agent_id_supplychargechargeto_local_var = fki_agent_id_supplychargechargeto->valuedouble;

    // customer_response_compound->fki_broker_id_supplychargechargeto
    cJSON *fki_broker_id_supplychargechargeto = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiBrokerIDSupplychargechargeto");
    if (cJSON_IsNull(fki_broker_id_supplychargechargeto)) {
        fki_broker_id_supplychargechargeto = NULL;
    }
    if (!fki_broker_id_supplychargechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_broker_id_supplychargechargeto))
    {
    goto end; //Numeric
    }
    fki_broker_id_supplychargechargeto_local_var = malloc(sizeof(int));
    if(!fki_broker_id_supplychargechargeto_local_var)
    {
        goto end;
    }
    *fki_broker_id_supplychargechargeto_local_var = fki_broker_id_supplychargechargeto->valuedouble;

    // customer_response_compound->fki_customer_id_supplychargechargeto
    cJSON *fki_customer_id_supplychargechargeto = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiCustomerIDSupplychargechargeto");
    if (cJSON_IsNull(fki_customer_id_supplychargechargeto)) {
        fki_customer_id_supplychargechargeto = NULL;
    }
    if (!fki_customer_id_supplychargechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_customer_id_supplychargechargeto))
    {
    goto end; //Numeric
    }
    fki_customer_id_supplychargechargeto_local_var = malloc(sizeof(int));
    if(!fki_customer_id_supplychargechargeto_local_var)
    {
        goto end;
    }
    *fki_customer_id_supplychargechargeto_local_var = fki_customer_id_supplychargechargeto->valuedouble;

    // customer_response_compound->fki_glaccountcontainer_id_supplychargechargeto
    cJSON *fki_glaccountcontainer_id_supplychargechargeto = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiGlaccountcontainerIDSupplychargechargeto");
    if (cJSON_IsNull(fki_glaccountcontainer_id_supplychargechargeto)) {
        fki_glaccountcontainer_id_supplychargechargeto = NULL;
    }
    if (!fki_glaccountcontainer_id_supplychargechargeto) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_glaccountcontainer_id_supplychargechargeto))
    {
    goto end; //Numeric
    }
    fki_glaccountcontainer_id_supplychargechargeto_local_var = malloc(sizeof(int));
    if(!fki_glaccountcontainer_id_supplychargechargeto_local_var)
    {
        goto end;
    }
    *fki_glaccountcontainer_id_supplychargechargeto_local_var = fki_glaccountcontainer_id_supplychargechargeto->valuedouble;

    // customer_response_compound->fki_invoicealternatelogo_id
    cJSON *fki_invoicealternatelogo_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiInvoicealternatelogoID");
    if (cJSON_IsNull(fki_invoicealternatelogo_id)) {
        fki_invoicealternatelogo_id = NULL;
    }
    if (!fki_invoicealternatelogo_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_invoicealternatelogo_id))
    {
    goto end; //Numeric
    }
    fki_invoicealternatelogo_id_local_var = malloc(sizeof(int));
    if(!fki_invoicealternatelogo_id_local_var)
    {
        goto end;
    }
    *fki_invoicealternatelogo_id_local_var = fki_invoicealternatelogo_id->valuedouble;

    // customer_response_compound->fki_synchronizationlinkserver_id
    cJSON *fki_synchronizationlinkserver_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "fkiSynchronizationlinkserverID");
    if (cJSON_IsNull(fki_synchronizationlinkserver_id)) {
        fki_synchronizationlinkserver_id = NULL;
    }
    if (!fki_synchronizationlinkserver_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_synchronizationlinkserver_id))
    {
    goto end; //Numeric
    }
    fki_synchronizationlinkserver_id_local_var = malloc(sizeof(int));
    if(!fki_synchronizationlinkserver_id_local_var)
    {
        goto end;
    }
    *fki_synchronizationlinkserver_id_local_var = fki_synchronizationlinkserver_id->valuedouble;

    // customer_response_compound->efki_user_id
    cJSON *efki_user_id = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "efkiUserID");
    if (cJSON_IsNull(efki_user_id)) {
        efki_user_id = NULL;
    }
    if (efki_user_id) { 
    if(!cJSON_IsNumber(efki_user_id))
    {
    goto end; //Numeric
    }
    efki_user_id_local_var = malloc(sizeof(int));
    if(!efki_user_id_local_var)
    {
        goto end;
    }
    *efki_user_id_local_var = efki_user_id->valuedouble;
    }

    // customer_response_compound->efks_customer_code
    cJSON *efks_customer_code = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "efksCustomerCode");
    if (cJSON_IsNull(efks_customer_code)) {
        efks_customer_code = NULL;
    }
    if (efks_customer_code) { 
    if(!cJSON_IsString(efks_customer_code) && !cJSON_IsNull(efks_customer_code))
    {
    goto end; //String
    }
    }

    // customer_response_compound->s_customer_code
    cJSON *s_customer_code = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "sCustomerCode");
    if (cJSON_IsNull(s_customer_code)) {
        s_customer_code = NULL;
    }
    if (!s_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_code))
    {
    goto end; //String
    }

    // customer_response_compound->d_customer_fulltimeequivalent
    cJSON *d_customer_fulltimeequivalent = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "dCustomerFulltimeequivalent");
    if (cJSON_IsNull(d_customer_fulltimeequivalent)) {
        d_customer_fulltimeequivalent = NULL;
    }
    if (!d_customer_fulltimeequivalent) {
        goto end;
    }

    
    if(!cJSON_IsString(d_customer_fulltimeequivalent))
    {
    goto end; //String
    }

    // customer_response_compound->i_customer_photocopiercode
    cJSON *i_customer_photocopiercode = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "iCustomerPhotocopiercode");
    if (cJSON_IsNull(i_customer_photocopiercode)) {
        i_customer_photocopiercode = NULL;
    }
    if (!i_customer_photocopiercode) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_customer_photocopiercode))
    {
    goto end; //Numeric
    }
    i_customer_photocopiercode_local_var = malloc(sizeof(int));
    if(!i_customer_photocopiercode_local_var)
    {
        goto end;
    }
    *i_customer_photocopiercode_local_var = i_customer_photocopiercode->valuedouble;

    // customer_response_compound->i_customer_longdistancecode
    cJSON *i_customer_longdistancecode = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "iCustomerLongdistancecode");
    if (cJSON_IsNull(i_customer_longdistancecode)) {
        i_customer_longdistancecode = NULL;
    }
    if (!i_customer_longdistancecode) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_customer_longdistancecode))
    {
    goto end; //Numeric
    }
    i_customer_longdistancecode_local_var = malloc(sizeof(int));
    if(!i_customer_longdistancecode_local_var)
    {
        goto end;
    }
    *i_customer_longdistancecode_local_var = i_customer_longdistancecode->valuedouble;

    // customer_response_compound->i_customer_timewindowstart
    cJSON *i_customer_timewindowstart = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "iCustomerTimewindowstart");
    if (cJSON_IsNull(i_customer_timewindowstart)) {
        i_customer_timewindowstart = NULL;
    }
    if (!i_customer_timewindowstart) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_customer_timewindowstart))
    {
    goto end; //Numeric
    }
    i_customer_timewindowstart_local_var = malloc(sizeof(int));
    if(!i_customer_timewindowstart_local_var)
    {
        goto end;
    }
    *i_customer_timewindowstart_local_var = i_customer_timewindowstart->valuedouble;

    // customer_response_compound->i_customer_timewindowend
    cJSON *i_customer_timewindowend = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "iCustomerTimewindowend");
    if (cJSON_IsNull(i_customer_timewindowend)) {
        i_customer_timewindowend = NULL;
    }
    if (!i_customer_timewindowend) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_customer_timewindowend))
    {
    goto end; //Numeric
    }
    i_customer_timewindowend_local_var = malloc(sizeof(int));
    if(!i_customer_timewindowend_local_var)
    {
        goto end;
    }
    *i_customer_timewindowend_local_var = i_customer_timewindowend->valuedouble;

    // customer_response_compound->d_customer_minimumchargeableinterests
    cJSON *d_customer_minimumchargeableinterests = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "dCustomerMinimumchargeableinterests");
    if (cJSON_IsNull(d_customer_minimumchargeableinterests)) {
        d_customer_minimumchargeableinterests = NULL;
    }
    if (!d_customer_minimumchargeableinterests) {
        goto end;
    }

    
    if(!cJSON_IsString(d_customer_minimumchargeableinterests))
    {
    goto end; //String
    }

    // customer_response_compound->dt_customer_birthdate
    cJSON *dt_customer_birthdate = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "dtCustomerBirthdate");
    if (cJSON_IsNull(dt_customer_birthdate)) {
        dt_customer_birthdate = NULL;
    }
    if (!dt_customer_birthdate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_customer_birthdate))
    {
    goto end; //String
    }

    // customer_response_compound->dt_customer_transfer
    cJSON *dt_customer_transfer = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "dtCustomerTransfer");
    if (cJSON_IsNull(dt_customer_transfer)) {
        dt_customer_transfer = NULL;
    }
    if (!dt_customer_transfer) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_customer_transfer))
    {
    goto end; //String
    }

    // customer_response_compound->dt_customer_transferappointment
    cJSON *dt_customer_transferappointment = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "dtCustomerTransferappointment");
    if (cJSON_IsNull(dt_customer_transferappointment)) {
        dt_customer_transferappointment = NULL;
    }
    if (!dt_customer_transferappointment) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_customer_transferappointment))
    {
    goto end; //String
    }

    // customer_response_compound->dt_customer_transfersurvey
    cJSON *dt_customer_transfersurvey = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "dtCustomerTransfersurvey");
    if (cJSON_IsNull(dt_customer_transfersurvey)) {
        dt_customer_transfersurvey = NULL;
    }
    if (!dt_customer_transfersurvey) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_customer_transfersurvey))
    {
    goto end; //String
    }

    // customer_response_compound->b_customer_isactive
    cJSON *b_customer_isactive = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "bCustomerIsactive");
    if (cJSON_IsNull(b_customer_isactive)) {
        b_customer_isactive = NULL;
    }
    if (!b_customer_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_isactive))
    {
    goto end; //Bool
    }
    b_customer_isactive_local_var = malloc(sizeof(int));
    if(!b_customer_isactive_local_var)
    {
        goto end;
    }
    *b_customer_isactive_local_var = b_customer_isactive->valueint;

    // customer_response_compound->b_customer_variableexpensefinanced
    cJSON *b_customer_variableexpensefinanced = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "bCustomerVariableexpensefinanced");
    if (cJSON_IsNull(b_customer_variableexpensefinanced)) {
        b_customer_variableexpensefinanced = NULL;
    }
    if (!b_customer_variableexpensefinanced) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_variableexpensefinanced))
    {
    goto end; //Bool
    }
    b_customer_variableexpensefinanced_local_var = malloc(sizeof(int));
    if(!b_customer_variableexpensefinanced_local_var)
    {
        goto end;
    }
    *b_customer_variableexpensefinanced_local_var = b_customer_variableexpensefinanced->valueint;

    // customer_response_compound->b_customer_variableexpensefinancedtaxes
    cJSON *b_customer_variableexpensefinancedtaxes = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "bCustomerVariableexpensefinancedtaxes");
    if (cJSON_IsNull(b_customer_variableexpensefinancedtaxes)) {
        b_customer_variableexpensefinancedtaxes = NULL;
    }
    if (!b_customer_variableexpensefinancedtaxes) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_variableexpensefinancedtaxes))
    {
    goto end; //Bool
    }
    b_customer_variableexpensefinancedtaxes_local_var = malloc(sizeof(int));
    if(!b_customer_variableexpensefinancedtaxes_local_var)
    {
        goto end;
    }
    *b_customer_variableexpensefinancedtaxes_local_var = b_customer_variableexpensefinancedtaxes->valueint;

    // customer_response_compound->b_customer_supplychargefinanced
    cJSON *b_customer_supplychargefinanced = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "bCustomerSupplychargefinanced");
    if (cJSON_IsNull(b_customer_supplychargefinanced)) {
        b_customer_supplychargefinanced = NULL;
    }
    if (!b_customer_supplychargefinanced) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_supplychargefinanced))
    {
    goto end; //Bool
    }
    b_customer_supplychargefinanced_local_var = malloc(sizeof(int));
    if(!b_customer_supplychargefinanced_local_var)
    {
        goto end;
    }
    *b_customer_supplychargefinanced_local_var = b_customer_supplychargefinanced->valueint;

    // customer_response_compound->b_customer_supplychargefinancedtaxes
    cJSON *b_customer_supplychargefinancedtaxes = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "bCustomerSupplychargefinancedtaxes");
    if (cJSON_IsNull(b_customer_supplychargefinancedtaxes)) {
        b_customer_supplychargefinancedtaxes = NULL;
    }
    if (!b_customer_supplychargefinancedtaxes) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_supplychargefinancedtaxes))
    {
    goto end; //Bool
    }
    b_customer_supplychargefinancedtaxes_local_var = malloc(sizeof(int));
    if(!b_customer_supplychargefinancedtaxes_local_var)
    {
        goto end;
    }
    *b_customer_supplychargefinancedtaxes_local_var = b_customer_supplychargefinancedtaxes->valueint;

    // customer_response_compound->b_customer_attendance
    cJSON *b_customer_attendance = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "bCustomerAttendance");
    if (cJSON_IsNull(b_customer_attendance)) {
        b_customer_attendance = NULL;
    }
    if (!b_customer_attendance) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_attendance))
    {
    goto end; //Bool
    }
    b_customer_attendance_local_var = malloc(sizeof(int));
    if(!b_customer_attendance_local_var)
    {
        goto end;
    }
    *b_customer_attendance_local_var = b_customer_attendance->valueint;

    // customer_response_compound->e_customer_type
    cJSON *e_customer_type = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "eCustomerType");
    if (cJSON_IsNull(e_customer_type)) {
        e_customer_type = NULL;
    }
    if (!e_customer_type) {
        goto end;
    }

    
    e_customer_type_local_nonprim = field_e_customer_type_parseFromJSON(e_customer_type); //custom

    // customer_response_compound->e_customer_marketingcorrespondence
    cJSON *e_customer_marketingcorrespondence = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "eCustomerMarketingcorrespondence");
    if (cJSON_IsNull(e_customer_marketingcorrespondence)) {
        e_customer_marketingcorrespondence = NULL;
    }
    if (!e_customer_marketingcorrespondence) {
        goto end;
    }

    
    e_customer_marketingcorrespondence_local_nonprim = field_e_customer_marketingcorrespondence_parseFromJSON(e_customer_marketingcorrespondence); //custom

    // customer_response_compound->b_customer_blackcopycarbon
    cJSON *b_customer_blackcopycarbon = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "bCustomerBlackcopycarbon");
    if (cJSON_IsNull(b_customer_blackcopycarbon)) {
        b_customer_blackcopycarbon = NULL;
    }
    if (!b_customer_blackcopycarbon) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_blackcopycarbon))
    {
    goto end; //Bool
    }
    b_customer_blackcopycarbon_local_var = malloc(sizeof(int));
    if(!b_customer_blackcopycarbon_local_var)
    {
        goto end;
    }
    *b_customer_blackcopycarbon_local_var = b_customer_blackcopycarbon->valueint;

    // customer_response_compound->b_customer_unsubscribeinfo
    cJSON *b_customer_unsubscribeinfo = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "bCustomerUnsubscribeinfo");
    if (cJSON_IsNull(b_customer_unsubscribeinfo)) {
        b_customer_unsubscribeinfo = NULL;
    }
    if (!b_customer_unsubscribeinfo) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_unsubscribeinfo))
    {
    goto end; //Bool
    }
    b_customer_unsubscribeinfo_local_var = malloc(sizeof(int));
    if(!b_customer_unsubscribeinfo_local_var)
    {
        goto end;
    }
    *b_customer_unsubscribeinfo_local_var = b_customer_unsubscribeinfo->valueint;

    // customer_response_compound->t_customer_comment
    cJSON *t_customer_comment = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "tCustomerComment");
    if (cJSON_IsNull(t_customer_comment)) {
        t_customer_comment = NULL;
    }
    if (!t_customer_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(t_customer_comment))
    {
    goto end; //String
    }

    // customer_response_compound->importid
    cJSON *importid = cJSON_GetObjectItemCaseSensitive(customer_response_compoundJSON, "IMPORTID");
    if (cJSON_IsNull(importid)) {
        importid = NULL;
    }
    if (importid) { 
    if(!cJSON_IsString(importid) && !cJSON_IsNull(importid))
    {
    goto end; //String
    }
    }


    if (s_customer_name && !cJSON_IsNull(s_customer_name)) s_customer_name_local_str = strdup(s_customer_name->valuestring);
    if (s_customer_note && !cJSON_IsNull(s_customer_note)) s_customer_note_local_str = strdup(s_customer_note->valuestring);
    if (efks_customer_code && !cJSON_IsNull(efks_customer_code)) efks_customer_code_local_str = strdup(efks_customer_code->valuestring);
    if (s_customer_code && !cJSON_IsNull(s_customer_code)) s_customer_code_local_str = strdup(s_customer_code->valuestring);
    if (d_customer_fulltimeequivalent && !cJSON_IsNull(d_customer_fulltimeequivalent)) d_customer_fulltimeequivalent_local_str = strdup(d_customer_fulltimeequivalent->valuestring);
    if (d_customer_minimumchargeableinterests && !cJSON_IsNull(d_customer_minimumchargeableinterests)) d_customer_minimumchargeableinterests_local_str = strdup(d_customer_minimumchargeableinterests->valuestring);
    if (dt_customer_birthdate && !cJSON_IsNull(dt_customer_birthdate)) dt_customer_birthdate_local_str = strdup(dt_customer_birthdate->valuestring);
    if (dt_customer_transfer && !cJSON_IsNull(dt_customer_transfer)) dt_customer_transfer_local_str = strdup(dt_customer_transfer->valuestring);
    if (dt_customer_transferappointment && !cJSON_IsNull(dt_customer_transferappointment)) dt_customer_transferappointment_local_str = strdup(dt_customer_transferappointment->valuestring);
    if (dt_customer_transfersurvey && !cJSON_IsNull(dt_customer_transfersurvey)) dt_customer_transfersurvey_local_str = strdup(dt_customer_transfersurvey->valuestring);
    if (t_customer_comment && !cJSON_IsNull(t_customer_comment)) t_customer_comment_local_str = strdup(t_customer_comment->valuestring);
    if (importid && !cJSON_IsNull(importid)) importid_local_str = strdup(importid->valuestring);

    customer_response_compound_local_var = customer_response_compound_create_internal (
        pki_customer_id_local_var,
        fki_company_id_local_var,
        fki_customergroup_id_local_var,
        s_customer_name_local_str,
        s_customer_note_local_str,
        fki_contactinformations_id_local_var,
        fki_contactcontainer_id_local_var,
        fki_image_id_local_var,
        fki_glaccountcontainer_id_local_var,
        fki_language_id_local_var,
        fki_department_id_local_var,
        fki_paymentmethod_id_local_var,
        fki_electronicfundstransferbankaccount_id_local_var,
        fki_electronicfundstransferbankaccount_id_directdebit_local_var,
        fki_sendingmethod_id_local_var,
        fki_taxassignment_id_local_var,
        fki_attendancestatus_id_local_var,
        fki_agent_id_variableexpensechargeto_local_var,
        fki_broker_id_variableexpensechargeto_local_var,
        fki_customer_id_variableexpensechargeto_local_var,
        fki_glaccountcontainer_id_variableexpensechargeto_local_var,
        fki_agent_id_supplychargechargeto_local_var,
        fki_broker_id_supplychargechargeto_local_var,
        fki_customer_id_supplychargechargeto_local_var,
        fki_glaccountcontainer_id_supplychargechargeto_local_var,
        fki_invoicealternatelogo_id_local_var,
        fki_synchronizationlinkserver_id_local_var,
        efki_user_id_local_var,
        efks_customer_code_local_str,
        s_customer_code_local_str,
        d_customer_fulltimeequivalent_local_str,
        i_customer_photocopiercode_local_var,
        i_customer_longdistancecode_local_var,
        i_customer_timewindowstart_local_var,
        i_customer_timewindowend_local_var,
        d_customer_minimumchargeableinterests_local_str,
        dt_customer_birthdate_local_str,
        dt_customer_transfer_local_str,
        dt_customer_transferappointment_local_str,
        dt_customer_transfersurvey_local_str,
        b_customer_isactive_local_var,
        b_customer_variableexpensefinanced_local_var,
        b_customer_variableexpensefinancedtaxes_local_var,
        b_customer_supplychargefinanced_local_var,
        b_customer_supplychargefinancedtaxes_local_var,
        b_customer_attendance_local_var,
        e_customer_type_local_nonprim,
        e_customer_marketingcorrespondence_local_nonprim,
        b_customer_blackcopycarbon_local_var,
        b_customer_unsubscribeinfo_local_var,
        t_customer_comment_local_str,
        importid_local_str
        );

    if (!customer_response_compound_local_var) {
        goto end;
    }

    return customer_response_compound_local_var;
end:
    if (pki_customer_id_local_var) {
        free(pki_customer_id_local_var);
        pki_customer_id_local_var = NULL;
    }
    if (fki_company_id_local_var) {
        free(fki_company_id_local_var);
        fki_company_id_local_var = NULL;
    }
    if (fki_customergroup_id_local_var) {
        free(fki_customergroup_id_local_var);
        fki_customergroup_id_local_var = NULL;
    }
    if (s_customer_name_local_str) {
        free(s_customer_name_local_str);
        s_customer_name_local_str = NULL;
    }
    if (s_customer_note_local_str) {
        free(s_customer_note_local_str);
        s_customer_note_local_str = NULL;
    }
    if (fki_contactinformations_id_local_var) {
        free(fki_contactinformations_id_local_var);
        fki_contactinformations_id_local_var = NULL;
    }
    if (fki_contactcontainer_id_local_var) {
        free(fki_contactcontainer_id_local_var);
        fki_contactcontainer_id_local_var = NULL;
    }
    if (fki_image_id_local_var) {
        free(fki_image_id_local_var);
        fki_image_id_local_var = NULL;
    }
    if (fki_glaccountcontainer_id_local_var) {
        free(fki_glaccountcontainer_id_local_var);
        fki_glaccountcontainer_id_local_var = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (fki_department_id_local_var) {
        free(fki_department_id_local_var);
        fki_department_id_local_var = NULL;
    }
    if (fki_paymentmethod_id_local_var) {
        free(fki_paymentmethod_id_local_var);
        fki_paymentmethod_id_local_var = NULL;
    }
    if (fki_electronicfundstransferbankaccount_id_local_var) {
        free(fki_electronicfundstransferbankaccount_id_local_var);
        fki_electronicfundstransferbankaccount_id_local_var = NULL;
    }
    if (fki_electronicfundstransferbankaccount_id_directdebit_local_var) {
        free(fki_electronicfundstransferbankaccount_id_directdebit_local_var);
        fki_electronicfundstransferbankaccount_id_directdebit_local_var = NULL;
    }
    if (fki_sendingmethod_id_local_var) {
        free(fki_sendingmethod_id_local_var);
        fki_sendingmethod_id_local_var = NULL;
    }
    if (fki_taxassignment_id_local_var) {
        free(fki_taxassignment_id_local_var);
        fki_taxassignment_id_local_var = NULL;
    }
    if (fki_attendancestatus_id_local_var) {
        free(fki_attendancestatus_id_local_var);
        fki_attendancestatus_id_local_var = NULL;
    }
    if (fki_agent_id_variableexpensechargeto_local_var) {
        free(fki_agent_id_variableexpensechargeto_local_var);
        fki_agent_id_variableexpensechargeto_local_var = NULL;
    }
    if (fki_broker_id_variableexpensechargeto_local_var) {
        free(fki_broker_id_variableexpensechargeto_local_var);
        fki_broker_id_variableexpensechargeto_local_var = NULL;
    }
    if (fki_customer_id_variableexpensechargeto_local_var) {
        free(fki_customer_id_variableexpensechargeto_local_var);
        fki_customer_id_variableexpensechargeto_local_var = NULL;
    }
    if (fki_glaccountcontainer_id_variableexpensechargeto_local_var) {
        free(fki_glaccountcontainer_id_variableexpensechargeto_local_var);
        fki_glaccountcontainer_id_variableexpensechargeto_local_var = NULL;
    }
    if (fki_agent_id_supplychargechargeto_local_var) {
        free(fki_agent_id_supplychargechargeto_local_var);
        fki_agent_id_supplychargechargeto_local_var = NULL;
    }
    if (fki_broker_id_supplychargechargeto_local_var) {
        free(fki_broker_id_supplychargechargeto_local_var);
        fki_broker_id_supplychargechargeto_local_var = NULL;
    }
    if (fki_customer_id_supplychargechargeto_local_var) {
        free(fki_customer_id_supplychargechargeto_local_var);
        fki_customer_id_supplychargechargeto_local_var = NULL;
    }
    if (fki_glaccountcontainer_id_supplychargechargeto_local_var) {
        free(fki_glaccountcontainer_id_supplychargechargeto_local_var);
        fki_glaccountcontainer_id_supplychargechargeto_local_var = NULL;
    }
    if (fki_invoicealternatelogo_id_local_var) {
        free(fki_invoicealternatelogo_id_local_var);
        fki_invoicealternatelogo_id_local_var = NULL;
    }
    if (fki_synchronizationlinkserver_id_local_var) {
        free(fki_synchronizationlinkserver_id_local_var);
        fki_synchronizationlinkserver_id_local_var = NULL;
    }
    if (efki_user_id_local_var) {
        free(efki_user_id_local_var);
        efki_user_id_local_var = NULL;
    }
    if (efks_customer_code_local_str) {
        free(efks_customer_code_local_str);
        efks_customer_code_local_str = NULL;
    }
    if (s_customer_code_local_str) {
        free(s_customer_code_local_str);
        s_customer_code_local_str = NULL;
    }
    if (d_customer_fulltimeequivalent_local_str) {
        free(d_customer_fulltimeequivalent_local_str);
        d_customer_fulltimeequivalent_local_str = NULL;
    }
    if (i_customer_photocopiercode_local_var) {
        free(i_customer_photocopiercode_local_var);
        i_customer_photocopiercode_local_var = NULL;
    }
    if (i_customer_longdistancecode_local_var) {
        free(i_customer_longdistancecode_local_var);
        i_customer_longdistancecode_local_var = NULL;
    }
    if (i_customer_timewindowstart_local_var) {
        free(i_customer_timewindowstart_local_var);
        i_customer_timewindowstart_local_var = NULL;
    }
    if (i_customer_timewindowend_local_var) {
        free(i_customer_timewindowend_local_var);
        i_customer_timewindowend_local_var = NULL;
    }
    if (d_customer_minimumchargeableinterests_local_str) {
        free(d_customer_minimumchargeableinterests_local_str);
        d_customer_minimumchargeableinterests_local_str = NULL;
    }
    if (dt_customer_birthdate_local_str) {
        free(dt_customer_birthdate_local_str);
        dt_customer_birthdate_local_str = NULL;
    }
    if (dt_customer_transfer_local_str) {
        free(dt_customer_transfer_local_str);
        dt_customer_transfer_local_str = NULL;
    }
    if (dt_customer_transferappointment_local_str) {
        free(dt_customer_transferappointment_local_str);
        dt_customer_transferappointment_local_str = NULL;
    }
    if (dt_customer_transfersurvey_local_str) {
        free(dt_customer_transfersurvey_local_str);
        dt_customer_transfersurvey_local_str = NULL;
    }
    if (b_customer_isactive_local_var) {
        free(b_customer_isactive_local_var);
        b_customer_isactive_local_var = NULL;
    }
    if (b_customer_variableexpensefinanced_local_var) {
        free(b_customer_variableexpensefinanced_local_var);
        b_customer_variableexpensefinanced_local_var = NULL;
    }
    if (b_customer_variableexpensefinancedtaxes_local_var) {
        free(b_customer_variableexpensefinancedtaxes_local_var);
        b_customer_variableexpensefinancedtaxes_local_var = NULL;
    }
    if (b_customer_supplychargefinanced_local_var) {
        free(b_customer_supplychargefinanced_local_var);
        b_customer_supplychargefinanced_local_var = NULL;
    }
    if (b_customer_supplychargefinancedtaxes_local_var) {
        free(b_customer_supplychargefinancedtaxes_local_var);
        b_customer_supplychargefinancedtaxes_local_var = NULL;
    }
    if (b_customer_attendance_local_var) {
        free(b_customer_attendance_local_var);
        b_customer_attendance_local_var = NULL;
    }
    if (e_customer_type_local_nonprim) {
        e_customer_type_local_nonprim = 0;
    }
    if (e_customer_marketingcorrespondence_local_nonprim) {
        e_customer_marketingcorrespondence_local_nonprim = 0;
    }
    if (b_customer_blackcopycarbon_local_var) {
        free(b_customer_blackcopycarbon_local_var);
        b_customer_blackcopycarbon_local_var = NULL;
    }
    if (b_customer_unsubscribeinfo_local_var) {
        free(b_customer_unsubscribeinfo_local_var);
        b_customer_unsubscribeinfo_local_var = NULL;
    }
    if (t_customer_comment_local_str) {
        free(t_customer_comment_local_str);
        t_customer_comment_local_str = NULL;
    }
    if (importid_local_str) {
        free(importid_local_str);
        importid_local_str = NULL;
    }
    return NULL;

}
