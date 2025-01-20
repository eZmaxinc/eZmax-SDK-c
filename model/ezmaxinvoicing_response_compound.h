/*
 * ezmaxinvoicing_response_compound.h
 *
 * A Ezmaxinvoicing Object
 */

#ifndef _ezmaxinvoicing_response_compound_H_
#define _ezmaxinvoicing_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_response_compound_t ezmaxinvoicing_response_compound_t;

#include "common_audit.h"
#include "custom_ezmaxpricing_response.h"
#include "ezmaxinvoicingagent_response_compound.h"
#include "ezmaxinvoicingcontract_response_compound.h"
#include "ezmaxinvoicingsummaryexternal_response_compound.h"
#include "ezmaxinvoicingsummaryglobal_response_compound.h"
#include "ezmaxinvoicingsummaryinternal_response_compound.h"
#include "ezmaxinvoicinguser_response_compound.h"
#include "field_e_ezmaxinvoicing_paymenttype.h"
#include "object.h"

// Enum  for ezmaxinvoicing_response_compound

typedef enum  { ezmax_api_definition__full_ezmaxinvoicing_response_compound__NULL = 0, ezmax_api_definition__full_ezmaxinvoicing_response_compound__Cheque, ezmax_api_definition__full_ezmaxinvoicing_response_compound__CreditCard, ezmax_api_definition__full_ezmaxinvoicing_response_compound__DirectDebit } ezmax_api_definition__full_ezmaxinvoicing_response_compound__e;

char* ezmaxinvoicing_response_compound_e_ezmaxinvoicing_paymenttype_ToString(ezmax_api_definition__full_ezmaxinvoicing_response_compound__e e_ezmaxinvoicing_paymenttype);

ezmax_api_definition__full_ezmaxinvoicing_response_compound__e ezmaxinvoicing_response_compound_e_ezmaxinvoicing_paymenttype_FromString(char* e_ezmaxinvoicing_paymenttype);



typedef struct ezmaxinvoicing_response_compound_t {
    int pki_ezmaxinvoicing_id; //numeric
    int fki_ezmaxinvoicingcontract_id; //numeric
    int fki_ezmaxpricing_id; //numeric
    int fki_systemconfigurationtype_id; //numeric
    char *s_systemconfigurationtype_description_x; // string
    char *yyyymm_ezmaxinvoicing; // string
    int i_ezmaxinvoicing_days; //numeric
    field_e_ezmaxinvoicing_paymenttype_t *e_ezmaxinvoicing_paymenttype; // custom
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

} ezmaxinvoicing_response_compound_t;

ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound_create(
    int pki_ezmaxinvoicing_id,
    int fki_ezmaxinvoicingcontract_id,
    int fki_ezmaxpricing_id,
    int fki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    char *yyyymm_ezmaxinvoicing,
    int i_ezmaxinvoicing_days,
    field_e_ezmaxinvoicing_paymenttype_t *e_ezmaxinvoicing_paymenttype,
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

void ezmaxinvoicing_response_compound_free(ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound);

ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound_parseFromJSON(cJSON *ezmaxinvoicing_response_compoundJSON);

cJSON *ezmaxinvoicing_response_compound_convertToJSON(ezmaxinvoicing_response_compound_t *ezmaxinvoicing_response_compound);

#endif /* _ezmaxinvoicing_response_compound_H_ */

