#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicing_response_compound.h"



static ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound_create_internal(
    int pki_ezmaxinvoicing_id,
    int fki_ezmaxinvoicingcontract_id,
    int fki_ezmaxpricing_id,
    int fki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    char *yyyymm_ezmaxinvoicing,
    int i_ezmaxinvoicing_days,
    ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e e_ezmaxinvoicing_paymenttype,
    char *d_ezmaxinvoicing_rebatepaymenttype,
    int i_ezmaxinvoicing_contractlength,
    char *d_ezmaxinvoicing_rebatecontractlength,
    int b_ezmaxinvoicing_rebate_ezsignallagents,
    common_audit_t *obj_audit,
    ezmaxinvoicingcontract_response_compound_t *obj_ezmaxinvoicingcontract,
    custom_ezmaxpricing_response_t *obj_ezmaxpricing,
    list_t *a_obj_ezmaxinvoicingsummaryglobal,
    list_t *a_obj_ezmaxinvoicingsummaryexternal,
    list_t *a_obj_ezmaxinvoicingsummaryinternal,
    list_t *a_obj_ezmaxinvoicingagent,
    list_t *a_obj_ezmaxinvoicinguser,
    list_t *a_obj_ezmaxinvoicingezsignfolder,
    list_t *a_obj_ezmaxinvoicingezsigndocument
    ) {
    ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound_local_var = malloc(sizeof(ezmaxinvoicing_response_compound_t));
    if (!ezmaxinvoicing_response_compound_local_var) {
        return NULL;
    }
    ezmaxinvoicing_response_compound_local_var->pki_ezmaxinvoicing_id = pki_ezmaxinvoicing_id;
    ezmaxinvoicing_response_compound_local_var->fki_ezmaxinvoicingcontract_id = fki_ezmaxinvoicingcontract_id;
    ezmaxinvoicing_response_compound_local_var->fki_ezmaxpricing_id = fki_ezmaxpricing_id;
    ezmaxinvoicing_response_compound_local_var->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    ezmaxinvoicing_response_compound_local_var->s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    ezmaxinvoicing_response_compound_local_var->yyyymm_ezmaxinvoicing = yyyymm_ezmaxinvoicing;
    ezmaxinvoicing_response_compound_local_var->i_ezmaxinvoicing_days = i_ezmaxinvoicing_days;
    ezmaxinvoicing_response_compound_local_var->e_ezmaxinvoicing_paymenttype = e_ezmaxinvoicing_paymenttype;
    ezmaxinvoicing_response_compound_local_var->d_ezmaxinvoicing_rebatepaymenttype = d_ezmaxinvoicing_rebatepaymenttype;
    ezmaxinvoicing_response_compound_local_var->i_ezmaxinvoicing_contractlength = i_ezmaxinvoicing_contractlength;
    ezmaxinvoicing_response_compound_local_var->d_ezmaxinvoicing_rebatecontractlength = d_ezmaxinvoicing_rebatecontractlength;
    ezmaxinvoicing_response_compound_local_var->b_ezmaxinvoicing_rebate_ezsignallagents = b_ezmaxinvoicing_rebate_ezsignallagents;
    ezmaxinvoicing_response_compound_local_var->obj_audit = obj_audit;
    ezmaxinvoicing_response_compound_local_var->obj_ezmaxinvoicingcontract = obj_ezmaxinvoicingcontract;
    ezmaxinvoicing_response_compound_local_var->obj_ezmaxpricing = obj_ezmaxpricing;
    ezmaxinvoicing_response_compound_local_var->a_obj_ezmaxinvoicingsummaryglobal = a_obj_ezmaxinvoicingsummaryglobal;
    ezmaxinvoicing_response_compound_local_var->a_obj_ezmaxinvoicingsummaryexternal = a_obj_ezmaxinvoicingsummaryexternal;
    ezmaxinvoicing_response_compound_local_var->a_obj_ezmaxinvoicingsummaryinternal = a_obj_ezmaxinvoicingsummaryinternal;
    ezmaxinvoicing_response_compound_local_var->a_obj_ezmaxinvoicingagent = a_obj_ezmaxinvoicingagent;
    ezmaxinvoicing_response_compound_local_var->a_obj_ezmaxinvoicinguser = a_obj_ezmaxinvoicinguser;
    ezmaxinvoicing_response_compound_local_var->a_obj_ezmaxinvoicingezsignfolder = a_obj_ezmaxinvoicingezsignfolder;
    ezmaxinvoicing_response_compound_local_var->a_obj_ezmaxinvoicingezsigndocument = a_obj_ezmaxinvoicingezsigndocument;

    ezmaxinvoicing_response_compound_local_var->_library_owned = 1;
    return ezmaxinvoicing_response_compound_local_var;
}

__attribute__((deprecated)) ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound_create(
    int pki_ezmaxinvoicing_id,
    int fki_ezmaxinvoicingcontract_id,
    int fki_ezmaxpricing_id,
    int fki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    char *yyyymm_ezmaxinvoicing,
    int i_ezmaxinvoicing_days,
    ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e e_ezmaxinvoicing_paymenttype,
    char *d_ezmaxinvoicing_rebatepaymenttype,
    int i_ezmaxinvoicing_contractlength,
    char *d_ezmaxinvoicing_rebatecontractlength,
    int b_ezmaxinvoicing_rebate_ezsignallagents,
    common_audit_t *obj_audit,
    ezmaxinvoicingcontract_response_compound_t *obj_ezmaxinvoicingcontract,
    custom_ezmaxpricing_response_t *obj_ezmaxpricing,
    list_t *a_obj_ezmaxinvoicingsummaryglobal,
    list_t *a_obj_ezmaxinvoicingsummaryexternal,
    list_t *a_obj_ezmaxinvoicingsummaryinternal,
    list_t *a_obj_ezmaxinvoicingagent,
    list_t *a_obj_ezmaxinvoicinguser,
    list_t *a_obj_ezmaxinvoicingezsignfolder,
    list_t *a_obj_ezmaxinvoicingezsigndocument
    ) {
    return ezmaxinvoicing_response_compound_create_internal (
        pki_ezmaxinvoicing_id,
        fki_ezmaxinvoicingcontract_id,
        fki_ezmaxpricing_id,
        fki_systemconfigurationtype_id,
        s_systemconfigurationtype_description_x,
        yyyymm_ezmaxinvoicing,
        i_ezmaxinvoicing_days,
        e_ezmaxinvoicing_paymenttype,
        d_ezmaxinvoicing_rebatepaymenttype,
        i_ezmaxinvoicing_contractlength,
        d_ezmaxinvoicing_rebatecontractlength,
        b_ezmaxinvoicing_rebate_ezsignallagents,
        obj_audit,
        obj_ezmaxinvoicingcontract,
        obj_ezmaxpricing,
        a_obj_ezmaxinvoicingsummaryglobal,
        a_obj_ezmaxinvoicingsummaryexternal,
        a_obj_ezmaxinvoicingsummaryinternal,
        a_obj_ezmaxinvoicingagent,
        a_obj_ezmaxinvoicinguser,
        a_obj_ezmaxinvoicingezsignfolder,
        a_obj_ezmaxinvoicingezsigndocument
        );
}

void ezmaxinvoicing_response_compound_free(ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound) {
    if(NULL == ezmaxinvoicing_response_compound){
        return ;
    }
    if(ezmaxinvoicing_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicing_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicing_response_compound->s_systemconfigurationtype_description_x) {
        free(ezmaxinvoicing_response_compound->s_systemconfigurationtype_description_x);
        ezmaxinvoicing_response_compound->s_systemconfigurationtype_description_x = NULL;
    }
    if (ezmaxinvoicing_response_compound->yyyymm_ezmaxinvoicing) {
        free(ezmaxinvoicing_response_compound->yyyymm_ezmaxinvoicing);
        ezmaxinvoicing_response_compound->yyyymm_ezmaxinvoicing = NULL;
    }
    if (ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatepaymenttype) {
        free(ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatepaymenttype);
        ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatepaymenttype = NULL;
    }
    if (ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatecontractlength) {
        free(ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatecontractlength);
        ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatecontractlength = NULL;
    }
    if (ezmaxinvoicing_response_compound->obj_audit) {
        common_audit_free(ezmaxinvoicing_response_compound->obj_audit);
        ezmaxinvoicing_response_compound->obj_audit = NULL;
    }
    if (ezmaxinvoicing_response_compound->obj_ezmaxinvoicingcontract) {
        ezmaxinvoicingcontract_response_compound_free(ezmaxinvoicing_response_compound->obj_ezmaxinvoicingcontract);
        ezmaxinvoicing_response_compound->obj_ezmaxinvoicingcontract = NULL;
    }
    if (ezmaxinvoicing_response_compound->obj_ezmaxpricing) {
        custom_ezmaxpricing_response_free(ezmaxinvoicing_response_compound->obj_ezmaxpricing);
        ezmaxinvoicing_response_compound->obj_ezmaxpricing = NULL;
    }
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal) {
            ezmaxinvoicingsummaryglobal_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal);
        ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal = NULL;
    }
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal) {
            ezmaxinvoicingsummaryexternal_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal);
        ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal = NULL;
    }
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal) {
            ezmaxinvoicingsummaryinternal_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal);
        ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal = NULL;
    }
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent) {
            ezmaxinvoicingagent_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent);
        ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent = NULL;
    }
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser) {
            ezmaxinvoicinguser_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser);
        ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser = NULL;
    }
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder) {
            custom_ezmaxinvoicing_ezsignfolder_response_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder);
        ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder = NULL;
    }
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument) {
        list_ForEach(listEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument) {
            custom_ezmaxinvoicing_ezsigndocument_response_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument);
        ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument = NULL;
    }
    free(ezmaxinvoicing_response_compound);
}

cJSON *ezmaxinvoicing_response_compound_convertToJSON(ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicing_response_compound->pki_ezmaxinvoicing_id
    if(ezmaxinvoicing_response_compound->pki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingID", ezmaxinvoicing_response_compound->pki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicing_response_compound->fki_ezmaxinvoicingcontract_id
    if (!ezmaxinvoicing_response_compound->fki_ezmaxinvoicingcontract_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingcontractID", ezmaxinvoicing_response_compound->fki_ezmaxinvoicingcontract_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response_compound->fki_ezmaxpricing_id
    if (!ezmaxinvoicing_response_compound->fki_ezmaxpricing_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxpricingID", ezmaxinvoicing_response_compound->fki_ezmaxpricing_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response_compound->fki_systemconfigurationtype_id
    if (!ezmaxinvoicing_response_compound->fki_systemconfigurationtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSystemconfigurationtypeID", ezmaxinvoicing_response_compound->fki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response_compound->s_systemconfigurationtype_description_x
    if (!ezmaxinvoicing_response_compound->s_systemconfigurationtype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSystemconfigurationtypeDescriptionX", ezmaxinvoicing_response_compound->s_systemconfigurationtype_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicing_response_compound->yyyymm_ezmaxinvoicing
    if (!ezmaxinvoicing_response_compound->yyyymm_ezmaxinvoicing) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "yyyymmEzmaxinvoicing", ezmaxinvoicing_response_compound->yyyymm_ezmaxinvoicing) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicing_response_compound->i_ezmaxinvoicing_days
    if (!ezmaxinvoicing_response_compound->i_ezmaxinvoicing_days) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingDays", ezmaxinvoicing_response_compound->i_ezmaxinvoicing_days) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response_compound->e_ezmaxinvoicing_paymenttype
    if (ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__NULL == ezmaxinvoicing_response_compound->e_ezmaxinvoicing_paymenttype) {
        goto fail;
    }
    cJSON *e_ezmaxinvoicing_paymenttype_local_JSON = field_e_ezmaxinvoicing_paymenttype_convertToJSON(ezmaxinvoicing_response_compound->e_ezmaxinvoicing_paymenttype);
    if(e_ezmaxinvoicing_paymenttype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzmaxinvoicingPaymenttype", e_ezmaxinvoicing_paymenttype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatepaymenttype
    if (!ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatepaymenttype) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingRebatepaymenttype", ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatepaymenttype) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicing_response_compound->i_ezmaxinvoicing_contractlength
    if (!ezmaxinvoicing_response_compound->i_ezmaxinvoicing_contractlength) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingContractlength", ezmaxinvoicing_response_compound->i_ezmaxinvoicing_contractlength) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatecontractlength
    if (!ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatecontractlength) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingRebatecontractlength", ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatecontractlength) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicing_response_compound->b_ezmaxinvoicing_rebate_ezsignallagents
    if (!ezmaxinvoicing_response_compound->b_ezmaxinvoicing_rebate_ezsignallagents) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingRebateEzsignallagents", ezmaxinvoicing_response_compound->b_ezmaxinvoicing_rebate_ezsignallagents) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicing_response_compound->obj_audit
    if(ezmaxinvoicing_response_compound->obj_audit) {
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezmaxinvoicing_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezmaxinvoicing_response_compound->obj_ezmaxinvoicingcontract
    if (!ezmaxinvoicing_response_compound->obj_ezmaxinvoicingcontract) {
        goto fail;
    }
    cJSON *obj_ezmaxinvoicingcontract_local_JSON = ezmaxinvoicingcontract_response_compound_convertToJSON(ezmaxinvoicing_response_compound->obj_ezmaxinvoicingcontract);
    if(obj_ezmaxinvoicingcontract_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxinvoicingcontract", obj_ezmaxinvoicingcontract_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxinvoicing_response_compound->obj_ezmaxpricing
    if (!ezmaxinvoicing_response_compound->obj_ezmaxpricing) {
        goto fail;
    }
    cJSON *obj_ezmaxpricing_local_JSON = custom_ezmaxpricing_response_convertToJSON(ezmaxinvoicing_response_compound->obj_ezmaxpricing);
    if(obj_ezmaxpricing_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpricing", obj_ezmaxpricing_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal
    if (!ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryglobal = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryglobal");
    if(a_obj_ezmaxinvoicingsummaryglobal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryglobalListEntry;
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryglobalListEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal) {
    cJSON *itemLocal = ezmaxinvoicingsummaryglobal_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryglobalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryglobal, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal
    if (!ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryexternal = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryexternal");
    if(a_obj_ezmaxinvoicingsummaryexternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryexternalListEntry;
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryexternalListEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal) {
    cJSON *itemLocal = ezmaxinvoicingsummaryexternal_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryexternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryexternal, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal
    if (!ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryinternal = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryinternal");
    if(a_obj_ezmaxinvoicingsummaryinternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryinternalListEntry;
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryinternalListEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal) {
    cJSON *itemLocal = ezmaxinvoicingsummaryinternal_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryinternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryinternal, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent
    if (!ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingagent = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingagent");
    if(a_obj_ezmaxinvoicingagent == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingagentListEntry;
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent) {
    list_ForEach(a_obj_ezmaxinvoicingagentListEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent) {
    cJSON *itemLocal = ezmaxinvoicingagent_response_compound_convertToJSON(a_obj_ezmaxinvoicingagentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingagent, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser
    if (!ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicinguser = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicinguser");
    if(a_obj_ezmaxinvoicinguser == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicinguserListEntry;
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser) {
    list_ForEach(a_obj_ezmaxinvoicinguserListEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser) {
    cJSON *itemLocal = ezmaxinvoicinguser_response_compound_convertToJSON(a_obj_ezmaxinvoicinguserListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicinguser, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder
    if (!ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingezsignfolder = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingezsignfolder");
    if(a_obj_ezmaxinvoicingezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingezsignfolderListEntry;
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder) {
    list_ForEach(a_obj_ezmaxinvoicingezsignfolderListEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder) {
    cJSON *itemLocal = custom_ezmaxinvoicing_ezsignfolder_response_convertToJSON(a_obj_ezmaxinvoicingezsignfolderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingezsignfolder, itemLocal);
    }
    }


    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument
    if (!ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingezsigndocument = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingezsigndocument");
    if(a_obj_ezmaxinvoicingezsigndocument == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingezsigndocumentListEntry;
    if (ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument) {
    list_ForEach(a_obj_ezmaxinvoicingezsigndocumentListEntry, ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument) {
    cJSON *itemLocal = custom_ezmaxinvoicing_ezsigndocument_response_convertToJSON(a_obj_ezmaxinvoicingezsigndocumentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingezsigndocument, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound_parseFromJSON(cJSON *ezmaxinvoicing_response_compoundJSON){

    ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound_local_var = NULL;

    // define the local variable for ezmaxinvoicing_response_compound->e_ezmaxinvoicing_paymenttype
    ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e e_ezmaxinvoicing_paymenttype_local_nonprim = 0;

    // define the local variable for ezmaxinvoicing_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local variable for ezmaxinvoicing_response_compound->obj_ezmaxinvoicingcontract
    ezmaxinvoicingcontract_response_compound_t *obj_ezmaxinvoicingcontract_local_nonprim = NULL;

    // define the local variable for ezmaxinvoicing_response_compound->obj_ezmaxpricing
    custom_ezmaxpricing_response_t *obj_ezmaxpricing_local_nonprim = NULL;

    // define the local list for ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal
    list_t *a_obj_ezmaxinvoicingsummaryglobalList = NULL;

    // define the local list for ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal
    list_t *a_obj_ezmaxinvoicingsummaryexternalList = NULL;

    // define the local list for ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal
    list_t *a_obj_ezmaxinvoicingsummaryinternalList = NULL;

    // define the local list for ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent
    list_t *a_obj_ezmaxinvoicingagentList = NULL;

    // define the local list for ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser
    list_t *a_obj_ezmaxinvoicinguserList = NULL;

    // define the local list for ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder
    list_t *a_obj_ezmaxinvoicingezsignfolderList = NULL;

    // define the local list for ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument
    list_t *a_obj_ezmaxinvoicingezsigndocumentList = NULL;

    // ezmaxinvoicing_response_compound->pki_ezmaxinvoicing_id
    cJSON *pki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "pkiEzmaxinvoicingID");
    if (cJSON_IsNull(pki_ezmaxinvoicing_id)) {
        pki_ezmaxinvoicing_id = NULL;
    }
    if (pki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicing_response_compound->fki_ezmaxinvoicingcontract_id
    cJSON *fki_ezmaxinvoicingcontract_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "fkiEzmaxinvoicingcontractID");
    if (cJSON_IsNull(fki_ezmaxinvoicingcontract_id)) {
        fki_ezmaxinvoicingcontract_id = NULL;
    }
    if (!fki_ezmaxinvoicingcontract_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxinvoicingcontract_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response_compound->fki_ezmaxpricing_id
    cJSON *fki_ezmaxpricing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "fkiEzmaxpricingID");
    if (cJSON_IsNull(fki_ezmaxpricing_id)) {
        fki_ezmaxpricing_id = NULL;
    }
    if (!fki_ezmaxpricing_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxpricing_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response_compound->fki_systemconfigurationtype_id
    cJSON *fki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "fkiSystemconfigurationtypeID");
    if (cJSON_IsNull(fki_systemconfigurationtype_id)) {
        fki_systemconfigurationtype_id = NULL;
    }
    if (!fki_systemconfigurationtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_systemconfigurationtype_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response_compound->s_systemconfigurationtype_description_x
    cJSON *s_systemconfigurationtype_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "sSystemconfigurationtypeDescriptionX");
    if (cJSON_IsNull(s_systemconfigurationtype_description_x)) {
        s_systemconfigurationtype_description_x = NULL;
    }
    if (!s_systemconfigurationtype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_systemconfigurationtype_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicing_response_compound->yyyymm_ezmaxinvoicing
    cJSON *yyyymm_ezmaxinvoicing = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "yyyymmEzmaxinvoicing");
    if (cJSON_IsNull(yyyymm_ezmaxinvoicing)) {
        yyyymm_ezmaxinvoicing = NULL;
    }
    if (!yyyymm_ezmaxinvoicing) {
        goto end;
    }

    
    if(!cJSON_IsString(yyyymm_ezmaxinvoicing))
    {
    goto end; //String
    }

    // ezmaxinvoicing_response_compound->i_ezmaxinvoicing_days
    cJSON *i_ezmaxinvoicing_days = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "iEzmaxinvoicingDays");
    if (cJSON_IsNull(i_ezmaxinvoicing_days)) {
        i_ezmaxinvoicing_days = NULL;
    }
    if (!i_ezmaxinvoicing_days) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicing_days))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response_compound->e_ezmaxinvoicing_paymenttype
    cJSON *e_ezmaxinvoicing_paymenttype = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "eEzmaxinvoicingPaymenttype");
    if (cJSON_IsNull(e_ezmaxinvoicing_paymenttype)) {
        e_ezmaxinvoicing_paymenttype = NULL;
    }
    if (!e_ezmaxinvoicing_paymenttype) {
        goto end;
    }

    
    e_ezmaxinvoicing_paymenttype_local_nonprim = field_e_ezmaxinvoicing_paymenttype_parseFromJSON(e_ezmaxinvoicing_paymenttype); //custom

    // ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatepaymenttype
    cJSON *d_ezmaxinvoicing_rebatepaymenttype = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "dEzmaxinvoicingRebatepaymenttype");
    if (cJSON_IsNull(d_ezmaxinvoicing_rebatepaymenttype)) {
        d_ezmaxinvoicing_rebatepaymenttype = NULL;
    }
    if (!d_ezmaxinvoicing_rebatepaymenttype) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicing_rebatepaymenttype))
    {
    goto end; //String
    }

    // ezmaxinvoicing_response_compound->i_ezmaxinvoicing_contractlength
    cJSON *i_ezmaxinvoicing_contractlength = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "iEzmaxinvoicingContractlength");
    if (cJSON_IsNull(i_ezmaxinvoicing_contractlength)) {
        i_ezmaxinvoicing_contractlength = NULL;
    }
    if (!i_ezmaxinvoicing_contractlength) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicing_contractlength))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response_compound->d_ezmaxinvoicing_rebatecontractlength
    cJSON *d_ezmaxinvoicing_rebatecontractlength = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "dEzmaxinvoicingRebatecontractlength");
    if (cJSON_IsNull(d_ezmaxinvoicing_rebatecontractlength)) {
        d_ezmaxinvoicing_rebatecontractlength = NULL;
    }
    if (!d_ezmaxinvoicing_rebatecontractlength) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicing_rebatecontractlength))
    {
    goto end; //String
    }

    // ezmaxinvoicing_response_compound->b_ezmaxinvoicing_rebate_ezsignallagents
    cJSON *b_ezmaxinvoicing_rebate_ezsignallagents = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "bEzmaxinvoicingRebateEzsignallagents");
    if (cJSON_IsNull(b_ezmaxinvoicing_rebate_ezsignallagents)) {
        b_ezmaxinvoicing_rebate_ezsignallagents = NULL;
    }
    if (!b_ezmaxinvoicing_rebate_ezsignallagents) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicing_rebate_ezsignallagents))
    {
    goto end; //Bool
    }

    // ezmaxinvoicing_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }

    // ezmaxinvoicing_response_compound->obj_ezmaxinvoicingcontract
    cJSON *obj_ezmaxinvoicingcontract = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "objEzmaxinvoicingcontract");
    if (cJSON_IsNull(obj_ezmaxinvoicingcontract)) {
        obj_ezmaxinvoicingcontract = NULL;
    }
    if (!obj_ezmaxinvoicingcontract) {
        goto end;
    }

    
    obj_ezmaxinvoicingcontract_local_nonprim = ezmaxinvoicingcontract_response_compound_parseFromJSON(obj_ezmaxinvoicingcontract); //nonprimitive

    // ezmaxinvoicing_response_compound->obj_ezmaxpricing
    cJSON *obj_ezmaxpricing = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "objEzmaxpricing");
    if (cJSON_IsNull(obj_ezmaxpricing)) {
        obj_ezmaxpricing = NULL;
    }
    if (!obj_ezmaxpricing) {
        goto end;
    }

    
    obj_ezmaxpricing_local_nonprim = custom_ezmaxpricing_response_parseFromJSON(obj_ezmaxpricing); //nonprimitive

    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryglobal
    cJSON *a_obj_ezmaxinvoicingsummaryglobal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "a_objEzmaxinvoicingsummaryglobal");
    if (cJSON_IsNull(a_obj_ezmaxinvoicingsummaryglobal)) {
        a_obj_ezmaxinvoicingsummaryglobal = NULL;
    }
    if (!a_obj_ezmaxinvoicingsummaryglobal) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryglobal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryglobal)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryglobalList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryglobal_local_nonprimitive,a_obj_ezmaxinvoicingsummaryglobal )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryglobal_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryglobal_response_compound_t *a_obj_ezmaxinvoicingsummaryglobalItem = ezmaxinvoicingsummaryglobal_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryglobal_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryglobalList, a_obj_ezmaxinvoicingsummaryglobalItem);
    }

    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryexternal
    cJSON *a_obj_ezmaxinvoicingsummaryexternal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "a_objEzmaxinvoicingsummaryexternal");
    if (cJSON_IsNull(a_obj_ezmaxinvoicingsummaryexternal)) {
        a_obj_ezmaxinvoicingsummaryexternal = NULL;
    }
    if (!a_obj_ezmaxinvoicingsummaryexternal) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryexternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryexternal)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryexternalList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryexternal_local_nonprimitive,a_obj_ezmaxinvoicingsummaryexternal )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryexternal_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryexternal_response_compound_t *a_obj_ezmaxinvoicingsummaryexternalItem = ezmaxinvoicingsummaryexternal_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryexternal_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryexternalList, a_obj_ezmaxinvoicingsummaryexternalItem);
    }

    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingsummaryinternal
    cJSON *a_obj_ezmaxinvoicingsummaryinternal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "a_objEzmaxinvoicingsummaryinternal");
    if (cJSON_IsNull(a_obj_ezmaxinvoicingsummaryinternal)) {
        a_obj_ezmaxinvoicingsummaryinternal = NULL;
    }
    if (!a_obj_ezmaxinvoicingsummaryinternal) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryinternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryinternal)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryinternalList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryinternal_local_nonprimitive,a_obj_ezmaxinvoicingsummaryinternal )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryinternal_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryinternal_response_compound_t *a_obj_ezmaxinvoicingsummaryinternalItem = ezmaxinvoicingsummaryinternal_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryinternal_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryinternalList, a_obj_ezmaxinvoicingsummaryinternalItem);
    }

    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingagent
    cJSON *a_obj_ezmaxinvoicingagent = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "a_objEzmaxinvoicingagent");
    if (cJSON_IsNull(a_obj_ezmaxinvoicingagent)) {
        a_obj_ezmaxinvoicingagent = NULL;
    }
    if (!a_obj_ezmaxinvoicingagent) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingagent_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingagent)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingagentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingagent_local_nonprimitive,a_obj_ezmaxinvoicingagent )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingagent_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingagent_response_compound_t *a_obj_ezmaxinvoicingagentItem = ezmaxinvoicingagent_response_compound_parseFromJSON(a_obj_ezmaxinvoicingagent_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingagentList, a_obj_ezmaxinvoicingagentItem);
    }

    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicinguser
    cJSON *a_obj_ezmaxinvoicinguser = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "a_objEzmaxinvoicinguser");
    if (cJSON_IsNull(a_obj_ezmaxinvoicinguser)) {
        a_obj_ezmaxinvoicinguser = NULL;
    }
    if (!a_obj_ezmaxinvoicinguser) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicinguser_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicinguser)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicinguserList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicinguser_local_nonprimitive,a_obj_ezmaxinvoicinguser )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicinguser_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicinguser_response_compound_t *a_obj_ezmaxinvoicinguserItem = ezmaxinvoicinguser_response_compound_parseFromJSON(a_obj_ezmaxinvoicinguser_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicinguserList, a_obj_ezmaxinvoicinguserItem);
    }

    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsignfolder
    cJSON *a_obj_ezmaxinvoicingezsignfolder = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "a_objEzmaxinvoicingezsignfolder");
    if (cJSON_IsNull(a_obj_ezmaxinvoicingezsignfolder)) {
        a_obj_ezmaxinvoicingezsignfolder = NULL;
    }
    if (!a_obj_ezmaxinvoicingezsignfolder) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingezsignfolder_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingezsignfolder)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingezsignfolderList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingezsignfolder_local_nonprimitive,a_obj_ezmaxinvoicingezsignfolder )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingezsignfolder_local_nonprimitive)){
            goto end;
        }
        custom_ezmaxinvoicing_ezsignfolder_response_t *a_obj_ezmaxinvoicingezsignfolderItem = custom_ezmaxinvoicing_ezsignfolder_response_parseFromJSON(a_obj_ezmaxinvoicingezsignfolder_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingezsignfolderList, a_obj_ezmaxinvoicingezsignfolderItem);
    }

    // ezmaxinvoicing_response_compound->a_obj_ezmaxinvoicingezsigndocument
    cJSON *a_obj_ezmaxinvoicingezsigndocument = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_response_compoundJSON, "a_objEzmaxinvoicingezsigndocument");
    if (cJSON_IsNull(a_obj_ezmaxinvoicingezsigndocument)) {
        a_obj_ezmaxinvoicingezsigndocument = NULL;
    }
    if (!a_obj_ezmaxinvoicingezsigndocument) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingezsigndocument_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingezsigndocument)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingezsigndocumentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingezsigndocument_local_nonprimitive,a_obj_ezmaxinvoicingezsigndocument )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingezsigndocument_local_nonprimitive)){
            goto end;
        }
        custom_ezmaxinvoicing_ezsigndocument_response_t *a_obj_ezmaxinvoicingezsigndocumentItem = custom_ezmaxinvoicing_ezsigndocument_response_parseFromJSON(a_obj_ezmaxinvoicingezsigndocument_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingezsigndocumentList, a_obj_ezmaxinvoicingezsigndocumentItem);
    }


    ezmaxinvoicing_response_compound_local_var = ezmaxinvoicing_response_compound_create_internal (
        pki_ezmaxinvoicing_id ? pki_ezmaxinvoicing_id->valuedouble : 0,
        fki_ezmaxinvoicingcontract_id->valuedouble,
        fki_ezmaxpricing_id->valuedouble,
        fki_systemconfigurationtype_id->valuedouble,
        strdup(s_systemconfigurationtype_description_x->valuestring),
        strdup(yyyymm_ezmaxinvoicing->valuestring),
        i_ezmaxinvoicing_days->valuedouble,
        e_ezmaxinvoicing_paymenttype_local_nonprim,
        strdup(d_ezmaxinvoicing_rebatepaymenttype->valuestring),
        i_ezmaxinvoicing_contractlength->valuedouble,
        strdup(d_ezmaxinvoicing_rebatecontractlength->valuestring),
        b_ezmaxinvoicing_rebate_ezsignallagents->valueint,
        obj_audit ? obj_audit_local_nonprim : NULL,
        obj_ezmaxinvoicingcontract_local_nonprim,
        obj_ezmaxpricing_local_nonprim,
        a_obj_ezmaxinvoicingsummaryglobalList,
        a_obj_ezmaxinvoicingsummaryexternalList,
        a_obj_ezmaxinvoicingsummaryinternalList,
        a_obj_ezmaxinvoicingagentList,
        a_obj_ezmaxinvoicinguserList,
        a_obj_ezmaxinvoicingezsignfolderList,
        a_obj_ezmaxinvoicingezsigndocumentList
        );

    return ezmaxinvoicing_response_compound_local_var;
end:
    if (e_ezmaxinvoicing_paymenttype_local_nonprim) {
        e_ezmaxinvoicing_paymenttype_local_nonprim = 0;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (obj_ezmaxinvoicingcontract_local_nonprim) {
        ezmaxinvoicingcontract_response_compound_free(obj_ezmaxinvoicingcontract_local_nonprim);
        obj_ezmaxinvoicingcontract_local_nonprim = NULL;
    }
    if (obj_ezmaxpricing_local_nonprim) {
        custom_ezmaxpricing_response_free(obj_ezmaxpricing_local_nonprim);
        obj_ezmaxpricing_local_nonprim = NULL;
    }
    if (a_obj_ezmaxinvoicingsummaryglobalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryglobalList) {
            ezmaxinvoicingsummaryglobal_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryglobalList);
        a_obj_ezmaxinvoicingsummaryglobalList = NULL;
    }
    if (a_obj_ezmaxinvoicingsummaryexternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryexternalList) {
            ezmaxinvoicingsummaryexternal_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryexternalList);
        a_obj_ezmaxinvoicingsummaryexternalList = NULL;
    }
    if (a_obj_ezmaxinvoicingsummaryinternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryinternalList) {
            ezmaxinvoicingsummaryinternal_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryinternalList);
        a_obj_ezmaxinvoicingsummaryinternalList = NULL;
    }
    if (a_obj_ezmaxinvoicingagentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingagentList) {
            ezmaxinvoicingagent_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingagentList);
        a_obj_ezmaxinvoicingagentList = NULL;
    }
    if (a_obj_ezmaxinvoicinguserList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicinguserList) {
            ezmaxinvoicinguser_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicinguserList);
        a_obj_ezmaxinvoicinguserList = NULL;
    }
    if (a_obj_ezmaxinvoicingezsignfolderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingezsignfolderList) {
            custom_ezmaxinvoicing_ezsignfolder_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingezsignfolderList);
        a_obj_ezmaxinvoicingezsignfolderList = NULL;
    }
    if (a_obj_ezmaxinvoicingezsigndocumentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingezsigndocumentList) {
            custom_ezmaxinvoicing_ezsigndocument_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingezsigndocumentList);
        a_obj_ezmaxinvoicingezsigndocumentList = NULL;
    }
    return NULL;

}
