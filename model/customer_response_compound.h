/*
 * customer_response_compound.h
 *
 * A Customer Object
 */

#ifndef _customer_response_compound_H_
#define _customer_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_response_compound_t customer_response_compound_t;

#include "customer_response.h"
#include "field_e_customer_marketingcorrespondence.h"
#include "field_e_customer_type.h"

// Enum  for customer_response_compound

typedef enum  { ezmax_api_definition__full_customer_response_compound__NULL = 0, ezmax_api_definition__full_customer_response_compound__Normal, ezmax_api_definition__full_customer_response_compound__Vetrx_Server, ezmax_api_definition__full_customer_response_compound__Reward_Administration, ezmax_api_definition__full_customer_response_compound__Reward_Representative, ezmax_api_definition__full_customer_response_compound__Reward_Server } ezmax_api_definition__full_customer_response_compound__e;

char* customer_response_compound_e_customer_type_ToString(ezmax_api_definition__full_customer_response_compound__e e_customer_type);

ezmax_api_definition__full_customer_response_compound__e customer_response_compound_e_customer_type_FromString(char* e_customer_type);

// Enum  for customer_response_compound

typedef enum  { ezmax_api_definition__full_customer_response_compound__NULL = 0, ezmax_api_definition__full_customer_response_compound__No, ezmax_api_definition__full_customer_response_compound__Email, ezmax_api_definition__full_customer_response_compound__Mail, ezmax_api_definition__full_customer_response_compound__Any } ezmax_api_definition__full_customer_response_compound__e;

char* customer_response_compound_e_customer_marketingcorrespondence_ToString(ezmax_api_definition__full_customer_response_compound__e e_customer_marketingcorrespondence);

ezmax_api_definition__full_customer_response_compound__e customer_response_compound_e_customer_marketingcorrespondence_FromString(char* e_customer_marketingcorrespondence);



typedef struct customer_response_compound_t {
    int pki_customer_id; //numeric
    int fki_company_id; //numeric
    int fki_customergroup_id; //numeric
    char *s_customer_name; // string
    int fki_contactinformations_id; //numeric
    int fki_contactcontainer_id; //numeric
    int fki_image_id; //numeric
    int fki_glaccountcontainer_id; //numeric
    int fki_language_id; //numeric
    int fki_department_id; //numeric
    int fki_paymentmethod_id; //numeric
    int fki_electronicfundstransferbankaccount_id; //numeric
    int fki_electronicfundstransferbankaccount_id_directdebit; //numeric
    int fki_sendingmethod_id; //numeric
    int fki_taxassignment_id; //numeric
    int fki_attendancestatus_id; //numeric
    int fki_agent_id_variableexpensechargeto; //numeric
    int fki_broker_id_variableexpensechargeto; //numeric
    int fki_customer_id_variableexpensechargeto; //numeric
    int fki_glaccountcontainer_id_variableexpensechargeto; //numeric
    int fki_agent_id_supplychargechargeto; //numeric
    int fki_broker_id_supplychargechargeto; //numeric
    int fki_customer_id_supplychargechargeto; //numeric
    int fki_glaccountcontainer_id_supplychargechargeto; //numeric
    int fki_invoicealternatelogo_id; //numeric
    int fki_synchronizationlinkserver_id; //numeric
    int efki_user_id; //numeric
    char *efks_customer_code; // string
    char *s_customer_code; // string
    char *d_customer_fulltimeequivalent; // string
    int i_customer_photocopiercode; //numeric
    int i_customer_longdistancecode; //numeric
    int i_customer_timewindowstart; //numeric
    int i_customer_timewindowend; //numeric
    char *d_customer_minimumchargeableinterests; // string
    char *dt_customer_birthdate; // string
    char *dt_customer_transfer; // string
    char *dt_customer_transferappointment; // string
    char *dt_customer_transfersurvey; // string
    int b_customer_isactive; //boolean
    int b_customer_variableexpensefinanced; //boolean
    int b_customer_variableexpensefinancedtaxes; //boolean
    int b_customer_supplychargefinanced; //boolean
    int b_customer_supplychargefinancedtaxes; //boolean
    int b_customer_attendance; //boolean
    field_e_customer_type_t *e_customer_type; // custom
    field_e_customer_marketingcorrespondence_t *e_customer_marketingcorrespondence; // custom
    int b_customer_blackcopycarbon; //boolean
    int b_customer_unsubscribeinfo; //boolean
    char *t_customer_comment; // string
    char *importid; // string

} customer_response_compound_t;

customer_response_compound_t *customer_response_compound_create(
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
);

void customer_response_compound_free(customer_response_compound_t *customer_response_compound);

customer_response_compound_t *customer_response_compound_parseFromJSON(cJSON *customer_response_compoundJSON);

cJSON *customer_response_compound_convertToJSON(customer_response_compound_t *customer_response_compound);

#endif /* _customer_response_compound_H_ */

