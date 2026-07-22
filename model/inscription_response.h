/*
 * inscription_response.h
 *
 * A Inscription Object
 */

#ifndef _inscription_response_H_
#define _inscription_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_response_t inscription_response_t;

#include "address_response_compound.h"
#include "common_audit.h"
#include "field_e_inscription_remunerationinscriptorsellertype.h"
#include "field_e_inscription_remunerationreferencetype.h"
#include "field_e_inscription_remunerationtotaltype.h"
#include "field_e_inscription_remunerationtype.h"
#include "field_e_inscription_residence_type.h"
#include "field_e_inscription_step.h"
#include "field_e_inscription_type.h"



typedef struct inscription_response_t {
    int *pki_inscription_id; //numeric
    int *fki_department_id; //numeric
    char *s_department_name_x; // string
    int *fki_realestateboard_id; //numeric
    char *s_realestateboard_name_x; // string
    int *fki_address_id; //numeric
    struct address_response_compound_t *obj_address; //model
    int *fki_inscriptionbuildingtype_id; //numeric
    char *s_inscriptionbuildingtype_name_x; // string
    int *fki_inscriptiontype_id; //numeric
    char *s_inscriptiontype_name_x; // string
    int *fki_inscriptioncategory_id; //numeric
    char *s_inscriptioncategory_name_x; // string
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step; //referenced enum
    ezmax_api_definition__full_field_e_inscription_residence_type__e e_inscription_residence_type; //referenced enum
    char *s_inscription_civicend; // string
    char *s_inscription_mls; // string
    char *s_inscription_contract; // string
    int *i_inscription_sellerdeclaration; //numeric
    ezmax_api_definition__full_field_e_inscription_type__e e_inscription_type; //referenced enum
    char *d_inscription_initialsaleprice; // string
    char *d_inscription_saleprice; // string
    char *d_inscription_rentprice; // string
    ezmax_api_definition__full_field_e_inscription_remunerationtype__e e_inscription_remunerationtype; //referenced enum
    ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__e e_inscription_remunerationinscriptorsellertype; //referenced enum
    ezmax_api_definition__full_field_e_inscription_remunerationreferencetype__e e_inscription_remunerationreferencetype; //referenced enum
    ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__e e_inscription_remunerationtotaltype; //referenced enum
    char *d_inscription_remuneration; // string
    char *d_inscription_remunerationinscriptorseller; // string
    char *d_inscription_remunerationreference; // string
    char *d_inscription_remunerationtotal; // string
    char *d_inscription_mortgagesold; // string
    char *dt_inscription_date; // string
    char *dt_inscription_cancellationdate; // string
    char *dt_inscription_initialexpirationdate; // string
    char *dt_inscription_expirationdate; // string
    char *dt_inscription_notarydate; // string
    char *dt_inscription_notaryentereddate; // string
    char *t_inscription_cadastre; // string
    int *b_inscription_reference; //boolean
    int *b_inscription_inspection; //boolean
    int *b_inscription_isactive; //boolean
    char *t_inscription_checklistnote; // string
    int *b_inscription_new; //boolean
    int *b_inscription_homeowner; //boolean
    int *b_inscription_archived; //boolean
    int *b_inscription_litigation; //boolean
    int *b_inscription_repossession; //boolean
    int *b_inscription_issolicitation; //boolean
    int *b_inscription_salebyowner; //boolean
    int *b_inscription_soldwithoutlegalwarranty; //boolean
    int *i_inscription_constructionyear; //numeric
    int *i_inscription_unit; //numeric
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_response_t;

__attribute__((deprecated)) inscription_response_t *inscription_response_create(
    int *pki_inscription_id,
    int *fki_department_id,
    char *s_department_name_x,
    int *fki_realestateboard_id,
    char *s_realestateboard_name_x,
    int *fki_address_id,
    address_response_compound_t *obj_address,
    int *fki_inscriptionbuildingtype_id,
    char *s_inscriptionbuildingtype_name_x,
    int *fki_inscriptiontype_id,
    char *s_inscriptiontype_name_x,
    int *fki_inscriptioncategory_id,
    char *s_inscriptioncategory_name_x,
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step,
    ezmax_api_definition__full_field_e_inscription_residence_type__e e_inscription_residence_type,
    char *s_inscription_civicend,
    char *s_inscription_mls,
    char *s_inscription_contract,
    int *i_inscription_sellerdeclaration,
    ezmax_api_definition__full_field_e_inscription_type__e e_inscription_type,
    char *d_inscription_initialsaleprice,
    char *d_inscription_saleprice,
    char *d_inscription_rentprice,
    ezmax_api_definition__full_field_e_inscription_remunerationtype__e e_inscription_remunerationtype,
    ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__e e_inscription_remunerationinscriptorsellertype,
    ezmax_api_definition__full_field_e_inscription_remunerationreferencetype__e e_inscription_remunerationreferencetype,
    ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__e e_inscription_remunerationtotaltype,
    char *d_inscription_remuneration,
    char *d_inscription_remunerationinscriptorseller,
    char *d_inscription_remunerationreference,
    char *d_inscription_remunerationtotal,
    char *d_inscription_mortgagesold,
    char *dt_inscription_date,
    char *dt_inscription_cancellationdate,
    char *dt_inscription_initialexpirationdate,
    char *dt_inscription_expirationdate,
    char *dt_inscription_notarydate,
    char *dt_inscription_notaryentereddate,
    char *t_inscription_cadastre,
    int *b_inscription_reference,
    int *b_inscription_inspection,
    int *b_inscription_isactive,
    char *t_inscription_checklistnote,
    int *b_inscription_new,
    int *b_inscription_homeowner,
    int *b_inscription_archived,
    int *b_inscription_litigation,
    int *b_inscription_repossession,
    int *b_inscription_issolicitation,
    int *b_inscription_salebyowner,
    int *b_inscription_soldwithoutlegalwarranty,
    int *i_inscription_constructionyear,
    int *i_inscription_unit,
    common_audit_t *obj_audit
);

void inscription_response_free(inscription_response_t *inscription_response);

inscription_response_t *inscription_response_parseFromJSON(cJSON *inscription_responseJSON);

cJSON *inscription_response_convertToJSON(inscription_response_t *inscription_response);

#endif /* _inscription_response_H_ */

