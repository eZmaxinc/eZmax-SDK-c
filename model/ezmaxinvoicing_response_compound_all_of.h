/*
 * ezmaxinvoicing_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezmaxinvoicing_response_compound_all_of_H_
#define _ezmaxinvoicing_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_response_compound_all_of_t ezmaxinvoicing_response_compound_all_of_t;

#include "custom_ezmaxinvoicing_ezsigndocument_response.h"
#include "custom_ezmaxinvoicing_ezsignfolder_response.h"
#include "custom_ezmaxpricing_response.h"
#include "ezmaxinvoicingagent_response_compound.h"
#include "ezmaxinvoicingcontract_response_compound.h"
#include "ezmaxinvoicingsummaryexternal_response_compound.h"
#include "ezmaxinvoicingsummaryglobal_response_compound.h"
#include "ezmaxinvoicingsummaryinternal_response_compound.h"
#include "ezmaxinvoicinguser_response_compound.h"



typedef struct ezmaxinvoicing_response_compound_all_of_t {
    struct ezmaxinvoicingcontract_response_compound_t *obj_ezmaxinvoicingcontract; //model
    struct custom_ezmaxpricing_response_t *obj_ezmaxpricing; //model
    list_t *a_obj_ezmaxinvoicingsummaryglobal; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingsummaryexternal; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingsummaryinternal; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingagent; //nonprimitive container
    list_t *a_obj_ezmaxinvoicinguser; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingezsignfolder; //nonprimitive container
    list_t *a_obj_ezmaxinvoicingezsigndocument; //nonprimitive container

} ezmaxinvoicing_response_compound_all_of_t;

ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of_create(
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

void ezmaxinvoicing_response_compound_all_of_free(ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of);

ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicing_response_compound_all_ofJSON);

cJSON *ezmaxinvoicing_response_compound_all_of_convertToJSON(ezmaxinvoicing_response_compound_all_of_t *ezmaxinvoicing_response_compound_all_of);

#endif /* _ezmaxinvoicing_response_compound_all_of_H_ */

