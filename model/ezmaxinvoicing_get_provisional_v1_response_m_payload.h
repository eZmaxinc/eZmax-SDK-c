/*
 * ezmaxinvoicing_get_provisional_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezmaxinvoicing/getProvisional
 */

#ifndef _ezmaxinvoicing_get_provisional_v1_response_m_payload_H_
#define _ezmaxinvoicing_get_provisional_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_get_provisional_v1_response_m_payload_t ezmaxinvoicing_get_provisional_v1_response_m_payload_t;

#include "common_audit.h"
#include "custom_ezmaxinvoicing_ezsigndocument_response.h"
#include "custom_ezmaxinvoicing_ezsignfolder_response.h"
#include "custom_ezmaxpricing_response.h"
#include "ezmaxinvoicingagent_response_compound.h"
#include "ezmaxinvoicingcontract_response_compound.h"
#include "ezmaxinvoicingsummaryexternal_response_compound.h"
#include "ezmaxinvoicingsummaryglobal_response_compound.h"
#include "ezmaxinvoicingsummaryinternal_response_compound.h"
#include "ezmaxinvoicinguser_response_compound.h"
#include "field_e_ezmaxinvoicing_paymenttype.h"



typedef struct ezmaxinvoicing_get_provisional_v1_response_m_payload_t {
    int pki_ezmaxinvoicing_id; //numeric
    int fki_ezmaxinvoicingcontract_id; //numeric
    int fki_ezmaxpricing_id; //numeric
    int fki_systemconfigurationtype_id; //numeric
    char *s_systemconfigurationtype_description_x; // string
    char *yyyymm_ezmaxinvoicing; // string
    int i_ezmaxinvoicing_days; //numeric
    ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e e_ezmaxinvoicing_paymenttype; //referenced enum
    char *d_ezmaxinvoicing_rebatepaymenttype; // string
    int i_ezmaxinvoicing_contractlength; //numeric
    char *d_ezmaxinvoicing_rebatecontractlength; // string
    int b_ezmaxinvoicing_rebate_ezsignallagents; //boolean
    struct common_audit_t *obj_audit; //model
    struct ezmaxinvoicingcontract_response_compound_t *obj_ezmaxinvoicingcontract; //model
    struct custom_ezmaxpricing_response_t *obj_ezmaxpricing; //model
    list_t *a_obj_ezmaxinvoicingsummaryglobal; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingsummaryexternal; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingsummaryinternal; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingagent; //nonprimitive container
    list_t *a_obj_ezmaxinvoicinguser; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingezsignfolder; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingezsigndocument; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicing_get_provisional_v1_response_m_payload_t;

__attribute__((deprecated)) ezmaxinvoicing_get_provisional_v1_response_m_payload_t *ezmaxinvoicing_get_provisional_v1_response_m_payload_create(
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
);

void ezmaxinvoicing_get_provisional_v1_response_m_payload_free(ezmaxinvoicing_get_provisional_v1_response_m_payload_t *ezmaxinvoicing_get_provisional_v1_response_m_payload);

ezmaxinvoicing_get_provisional_v1_response_m_payload_t *ezmaxinvoicing_get_provisional_v1_response_m_payload_parseFromJSON(cJSON *ezmaxinvoicing_get_provisional_v1_response_m_payloadJSON);

cJSON *ezmaxinvoicing_get_provisional_v1_response_m_payload_convertToJSON(ezmaxinvoicing_get_provisional_v1_response_m_payload_t *ezmaxinvoicing_get_provisional_v1_response_m_payload);

#endif /* _ezmaxinvoicing_get_provisional_v1_response_m_payload_H_ */

