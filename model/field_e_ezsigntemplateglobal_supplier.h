/*
 * field_e_ezsigntemplateglobal_supplier.h
 *
 * The Supplier of the Ezsigntemplateglobal
 */

#ifndef _field_e_ezsigntemplateglobal_supplier_H_
#define _field_e_ezsigntemplateglobal_supplier_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigntemplateglobal_supplier_t field_e_ezsigntemplateglobal_supplier_t;


// Enum  for field_e_ezsigntemplateglobal_supplier

typedef enum { ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__NULL = 0, ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__Centris, ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__Webforms, ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__GHACQ } ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e;

char* field_e_ezsigntemplateglobal_supplier_field_e_ezsigntemplateglobal_supplier_ToString(ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e field_e_ezsigntemplateglobal_supplier);

ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e field_e_ezsigntemplateglobal_supplier_field_e_ezsigntemplateglobal_supplier_FromString(char* field_e_ezsigntemplateglobal_supplier);

//cJSON *field_e_ezsigntemplateglobal_supplier_field_e_ezsigntemplateglobal_supplier_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e field_e_ezsigntemplateglobal_supplier);

//ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e field_e_ezsigntemplateglobal_supplier_field_e_ezsigntemplateglobal_supplier_parseFromJSON(cJSON *field_e_ezsigntemplateglobal_supplierJSON);

#endif /* _field_e_ezsigntemplateglobal_supplier_H_ */
