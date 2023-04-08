#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_response.h"


char* e_ezsignfoldertype_privacylevelezsignfoldertype_response_ToString(ezmax_api_definition__full_ezsignfoldertype_response__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
	return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition__full_ezsignfoldertype_response__e e_ezsignfoldertype_privacylevelezsignfoldertype_response_FromString(char* e_ezsignfoldertype_privacylevel){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_privacylevelArray) / sizeof(e_ezsignfoldertype_privacylevelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_privacylevel, e_ezsignfoldertype_privacylevelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignfoldertype_sendreminderfrequencyezsignfoldertype_response_ToString(ezmax_api_definition__full_ezsignfoldertype_response__e e_ezsignfoldertype_sendreminderfrequency) {
    char* e_ezsignfoldertype_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
	return e_ezsignfoldertype_sendreminderfrequencyArray[e_ezsignfoldertype_sendreminderfrequency];
}

ezmax_api_definition__full_ezsignfoldertype_response__e e_ezsignfoldertype_sendreminderfrequencyezsignfoldertype_response_FromString(char* e_ezsignfoldertype_sendreminderfrequency){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_sendreminderfrequencyArray) / sizeof(e_ezsignfoldertype_sendreminderfrequencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_sendreminderfrequency, e_ezsignfoldertype_sendreminderfrequencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignfoldertype_disposalezsignfoldertype_response_ToString(ezmax_api_definition__full_ezsignfoldertype_response__e e_ezsignfoldertype_disposal) {
    char* e_ezsignfoldertype_disposalArray[] =  { "NULL", "No", "Manual", "Automatic" };
	return e_ezsignfoldertype_disposalArray[e_ezsignfoldertype_disposal];
}

ezmax_api_definition__full_ezsignfoldertype_response__e e_ezsignfoldertype_disposalezsignfoldertype_response_FromString(char* e_ezsignfoldertype_disposal){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_disposalArray[] =  { "NULL", "No", "Manual", "Automatic" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_disposalArray) / sizeof(e_ezsignfoldertype_disposalArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_disposal, e_ezsignfoldertype_disposalArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfoldertype_response_t *ezsignfoldertype_response_create(
    int pki_ezsignfoldertype_id,
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name,
    int fki_branding_id,
    int fki_billingentityinternal_id,
    int fki_usergroup_id,
    int fki_usergroup_id_restricted,
    int fki_ezsigntsarequirement_id,
    char *s_branding_description_x,
    char *s_billingentityinternal_description_x,
    char *s_ezsigntsarequirement_description_x,
    char *s_email_address_signed,
    char *s_email_address_summary,
    char *s_usergroup_name_x,
    char *s_usergroup_name_x_restricted,
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    field_e_ezsignfoldertype_sendreminderfrequency_t *e_ezsignfoldertype_sendreminderfrequency,
    int i_ezsignfoldertype_archivaldays,
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal,
    int i_ezsignfoldertype_disposaldays,
    int i_ezsignfoldertype_deadlinedays,
    int b_ezsignfoldertype_sendattatchmentsigner,
    int b_ezsignfoldertype_sendsignedtodocumentowner,
    int b_ezsignfoldertype_sendsignedtofolderowner,
    int b_ezsignfoldertype_sendsignedtofullgroup,
    int b_ezsignfoldertype_sendsignedtolimitedgroup,
    int b_ezsignfoldertype_sendsignedtocolleague,
    int b_ezsignfoldertype_sendsummarytodocumentowner,
    int b_ezsignfoldertype_sendsummarytofolderowner,
    int b_ezsignfoldertype_sendsummarytofullgroup,
    int b_ezsignfoldertype_sendsummarytolimitedgroup,
    int b_ezsignfoldertype_sendsummarytocolleague,
    int b_ezsignfoldertype_includeproofsigner,
    int b_ezsignfoldertype_includeproofuser,
    int b_ezsignfoldertype_isactive
    ) {
    ezsignfoldertype_response_t *ezsignfoldertype_response_local_var = malloc(sizeof(ezsignfoldertype_response_t));
    if (!ezsignfoldertype_response_local_var) {
        return NULL;
    }
    ezsignfoldertype_response_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    ezsignfoldertype_response_local_var->obj_ezsignfoldertype_name = obj_ezsignfoldertype_name;
    ezsignfoldertype_response_local_var->fki_branding_id = fki_branding_id;
    ezsignfoldertype_response_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezsignfoldertype_response_local_var->fki_usergroup_id = fki_usergroup_id;
    ezsignfoldertype_response_local_var->fki_usergroup_id_restricted = fki_usergroup_id_restricted;
    ezsignfoldertype_response_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfoldertype_response_local_var->s_branding_description_x = s_branding_description_x;
    ezsignfoldertype_response_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezsignfoldertype_response_local_var->s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    ezsignfoldertype_response_local_var->s_email_address_signed = s_email_address_signed;
    ezsignfoldertype_response_local_var->s_email_address_summary = s_email_address_summary;
    ezsignfoldertype_response_local_var->s_usergroup_name_x = s_usergroup_name_x;
    ezsignfoldertype_response_local_var->s_usergroup_name_x_restricted = s_usergroup_name_x_restricted;
    ezsignfoldertype_response_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfoldertype_response_local_var->e_ezsignfoldertype_sendreminderfrequency = e_ezsignfoldertype_sendreminderfrequency;
    ezsignfoldertype_response_local_var->i_ezsignfoldertype_archivaldays = i_ezsignfoldertype_archivaldays;
    ezsignfoldertype_response_local_var->e_ezsignfoldertype_disposal = e_ezsignfoldertype_disposal;
    ezsignfoldertype_response_local_var->i_ezsignfoldertype_disposaldays = i_ezsignfoldertype_disposaldays;
    ezsignfoldertype_response_local_var->i_ezsignfoldertype_deadlinedays = i_ezsignfoldertype_deadlinedays;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendattatchmentsigner = b_ezsignfoldertype_sendattatchmentsigner;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsignedtodocumentowner = b_ezsignfoldertype_sendsignedtodocumentowner;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsignedtofolderowner = b_ezsignfoldertype_sendsignedtofolderowner;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsignedtofullgroup = b_ezsignfoldertype_sendsignedtofullgroup;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsignedtolimitedgroup = b_ezsignfoldertype_sendsignedtolimitedgroup;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsignedtocolleague = b_ezsignfoldertype_sendsignedtocolleague;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsummarytodocumentowner = b_ezsignfoldertype_sendsummarytodocumentowner;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsummarytofolderowner = b_ezsignfoldertype_sendsummarytofolderowner;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsummarytofullgroup = b_ezsignfoldertype_sendsummarytofullgroup;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsummarytolimitedgroup = b_ezsignfoldertype_sendsummarytolimitedgroup;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendsummarytocolleague = b_ezsignfoldertype_sendsummarytocolleague;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_includeproofsigner = b_ezsignfoldertype_includeproofsigner;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_includeproofuser = b_ezsignfoldertype_includeproofuser;
    ezsignfoldertype_response_local_var->b_ezsignfoldertype_isactive = b_ezsignfoldertype_isactive;

    return ezsignfoldertype_response_local_var;
}


void ezsignfoldertype_response_free(ezsignfoldertype_response_t *ezsignfoldertype_response) {
    if(NULL == ezsignfoldertype_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_response->obj_ezsignfoldertype_name) {
        multilingual_ezsignfoldertype_name_free(ezsignfoldertype_response->obj_ezsignfoldertype_name);
        ezsignfoldertype_response->obj_ezsignfoldertype_name = NULL;
    }
    if (ezsignfoldertype_response->s_branding_description_x) {
        free(ezsignfoldertype_response->s_branding_description_x);
        ezsignfoldertype_response->s_branding_description_x = NULL;
    }
    if (ezsignfoldertype_response->s_billingentityinternal_description_x) {
        free(ezsignfoldertype_response->s_billingentityinternal_description_x);
        ezsignfoldertype_response->s_billingentityinternal_description_x = NULL;
    }
    if (ezsignfoldertype_response->s_ezsigntsarequirement_description_x) {
        free(ezsignfoldertype_response->s_ezsigntsarequirement_description_x);
        ezsignfoldertype_response->s_ezsigntsarequirement_description_x = NULL;
    }
    if (ezsignfoldertype_response->s_email_address_signed) {
        free(ezsignfoldertype_response->s_email_address_signed);
        ezsignfoldertype_response->s_email_address_signed = NULL;
    }
    if (ezsignfoldertype_response->s_email_address_summary) {
        free(ezsignfoldertype_response->s_email_address_summary);
        ezsignfoldertype_response->s_email_address_summary = NULL;
    }
    if (ezsignfoldertype_response->s_usergroup_name_x) {
        free(ezsignfoldertype_response->s_usergroup_name_x);
        ezsignfoldertype_response->s_usergroup_name_x = NULL;
    }
    if (ezsignfoldertype_response->s_usergroup_name_x_restricted) {
        free(ezsignfoldertype_response->s_usergroup_name_x_restricted);
        ezsignfoldertype_response->s_usergroup_name_x_restricted = NULL;
    }
    if (ezsignfoldertype_response->e_ezsignfoldertype_privacylevel) {
        field_e_ezsignfoldertype_privacylevel_free(ezsignfoldertype_response->e_ezsignfoldertype_privacylevel);
        ezsignfoldertype_response->e_ezsignfoldertype_privacylevel = NULL;
    }
    if (ezsignfoldertype_response->e_ezsignfoldertype_sendreminderfrequency) {
        field_e_ezsignfoldertype_sendreminderfrequency_free(ezsignfoldertype_response->e_ezsignfoldertype_sendreminderfrequency);
        ezsignfoldertype_response->e_ezsignfoldertype_sendreminderfrequency = NULL;
    }
    if (ezsignfoldertype_response->e_ezsignfoldertype_disposal) {
        field_e_ezsignfoldertype_disposal_free(ezsignfoldertype_response->e_ezsignfoldertype_disposal);
        ezsignfoldertype_response->e_ezsignfoldertype_disposal = NULL;
    }
    free(ezsignfoldertype_response);
}

cJSON *ezsignfoldertype_response_convertToJSON(ezsignfoldertype_response_t *ezsignfoldertype_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_response->pki_ezsignfoldertype_id
    if (!ezsignfoldertype_response->pki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", ezsignfoldertype_response->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_response->obj_ezsignfoldertype_name
    if (!ezsignfoldertype_response->obj_ezsignfoldertype_name) {
        goto fail;
    }
    cJSON *obj_ezsignfoldertype_name_local_JSON = multilingual_ezsignfoldertype_name_convertToJSON(ezsignfoldertype_response->obj_ezsignfoldertype_name);
    if(obj_ezsignfoldertype_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertypeName", obj_ezsignfoldertype_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldertype_response->fki_branding_id
    if (!ezsignfoldertype_response->fki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrandingID", ezsignfoldertype_response->fki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_response->fki_billingentityinternal_id
    if(ezsignfoldertype_response->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezsignfoldertype_response->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response->fki_usergroup_id
    if(ezsignfoldertype_response->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", ezsignfoldertype_response->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response->fki_usergroup_id_restricted
    if(ezsignfoldertype_response->fki_usergroup_id_restricted) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupIDRestricted", ezsignfoldertype_response->fki_usergroup_id_restricted) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response->fki_ezsigntsarequirement_id
    if(ezsignfoldertype_response->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfoldertype_response->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response->s_branding_description_x
    if (!ezsignfoldertype_response->s_branding_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrandingDescriptionX", ezsignfoldertype_response->s_branding_description_x) == NULL) {
    goto fail; //String
    }


    // ezsignfoldertype_response->s_billingentityinternal_description_x
    if(ezsignfoldertype_response->s_billingentityinternal_description_x) {
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezsignfoldertype_response->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response->s_ezsigntsarequirement_description_x
    if(ezsignfoldertype_response->s_ezsigntsarequirement_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsigntsarequirementDescriptionX", ezsignfoldertype_response->s_ezsigntsarequirement_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response->s_email_address_signed
    if(ezsignfoldertype_response->s_email_address_signed) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSigned", ezsignfoldertype_response->s_email_address_signed) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response->s_email_address_summary
    if(ezsignfoldertype_response->s_email_address_summary) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSummary", ezsignfoldertype_response->s_email_address_summary) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response->s_usergroup_name_x
    if(ezsignfoldertype_response->s_usergroup_name_x) {
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", ezsignfoldertype_response->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response->s_usergroup_name_x_restricted
    if(ezsignfoldertype_response->s_usergroup_name_x_restricted) {
    if(cJSON_AddStringToObject(item, "sUsergroupNameXRestricted", ezsignfoldertype_response->s_usergroup_name_x_restricted) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_ezsignfoldertype_response__NULL == ezsignfoldertype_response->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfoldertype_response->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_response->e_ezsignfoldertype_sendreminderfrequency
    if(ezsignfoldertype_response->e_ezsignfoldertype_sendreminderfrequency != ezmax_api_definition__full_ezsignfoldertype_response__NULL) {
    cJSON *e_ezsignfoldertype_sendreminderfrequency_local_JSON = field_e_ezsignfoldertype_sendreminderfrequency_convertToJSON(ezsignfoldertype_response->e_ezsignfoldertype_sendreminderfrequency);
    if(e_ezsignfoldertype_sendreminderfrequency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeSendreminderfrequency", e_ezsignfoldertype_sendreminderfrequency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_response->i_ezsignfoldertype_archivaldays
    if (!ezsignfoldertype_response->i_ezsignfoldertype_archivaldays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeArchivaldays", ezsignfoldertype_response->i_ezsignfoldertype_archivaldays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_response->e_ezsignfoldertype_disposal
    if (ezmax_api_definition__full_ezsignfoldertype_response__NULL == ezsignfoldertype_response->e_ezsignfoldertype_disposal) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_disposal_local_JSON = field_e_ezsignfoldertype_disposal_convertToJSON(ezsignfoldertype_response->e_ezsignfoldertype_disposal);
    if(e_ezsignfoldertype_disposal_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDisposal", e_ezsignfoldertype_disposal_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_response->i_ezsignfoldertype_disposaldays
    if(ezsignfoldertype_response->i_ezsignfoldertype_disposaldays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDisposaldays", ezsignfoldertype_response->i_ezsignfoldertype_disposaldays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays
    if (!ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDeadlinedays", ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendattatchmentsigner
    if (!ezsignfoldertype_response->b_ezsignfoldertype_sendattatchmentsigner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattatchmentsigner", ezsignfoldertype_response->b_ezsignfoldertype_sendattatchmentsigner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtodocumentowner
    if (!ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtodocumentowner", ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtofolderowner
    if (!ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofolderowner", ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtofullgroup
    if(ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofullgroup", ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtolimitedgroup
    if(ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtolimitedgroup", ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtocolleague
    if (!ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtocolleague", ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytodocumentowner
    if (!ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytodocumentowner", ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytofolderowner
    if (!ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofolderowner", ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytofullgroup
    if(ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofullgroup", ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytolimitedgroup
    if(ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytolimitedgroup", ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytocolleague
    if (!ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytocolleague", ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_includeproofsigner
    if (!ezsignfoldertype_response->b_ezsignfoldertype_includeproofsigner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIncludeproofsigner", ezsignfoldertype_response->b_ezsignfoldertype_includeproofsigner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_includeproofuser
    if (!ezsignfoldertype_response->b_ezsignfoldertype_includeproofuser) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIncludeproofuser", ezsignfoldertype_response->b_ezsignfoldertype_includeproofuser) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response->b_ezsignfoldertype_isactive
    if (!ezsignfoldertype_response->b_ezsignfoldertype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIsactive", ezsignfoldertype_response->b_ezsignfoldertype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_response_t *ezsignfoldertype_response_parseFromJSON(cJSON *ezsignfoldertype_responseJSON){

    ezsignfoldertype_response_t *ezsignfoldertype_response_local_var = NULL;

    // define the local variable for ezsignfoldertype_response->obj_ezsignfoldertype_name
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response->e_ezsignfoldertype_privacylevel
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response->e_ezsignfoldertype_sendreminderfrequency
    field_e_ezsignfoldertype_sendreminderfrequency_t *e_ezsignfoldertype_sendreminderfrequency_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response->e_ezsignfoldertype_disposal
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal_local_nonprim = NULL;

    // ezsignfoldertype_response->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "pkiEzsignfoldertypeID");
    if (!pki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_response->obj_ezsignfoldertype_name
    cJSON *obj_ezsignfoldertype_name = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "objEzsignfoldertypeName");
    if (!obj_ezsignfoldertype_name) {
        goto end;
    }

    
    obj_ezsignfoldertype_name_local_nonprim = multilingual_ezsignfoldertype_name_parseFromJSON(obj_ezsignfoldertype_name); //nonprimitive

    // ezsignfoldertype_response->fki_branding_id
    cJSON *fki_branding_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "fkiBrandingID");
    if (!fki_branding_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_branding_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_response->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "fkiBillingentityinternalID");
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "fkiUsergroupID");
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response->fki_usergroup_id_restricted
    cJSON *fki_usergroup_id_restricted = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "fkiUsergroupIDRestricted");
    if (fki_usergroup_id_restricted) { 
    if(!cJSON_IsNumber(fki_usergroup_id_restricted))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "fkiEzsigntsarequirementID");
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response->s_branding_description_x
    cJSON *s_branding_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "sBrandingDescriptionX");
    if (!s_branding_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_branding_description_x))
    {
    goto end; //String
    }

    // ezsignfoldertype_response->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "sBillingentityinternalDescriptionX");
    if (s_billingentityinternal_description_x) { 
    if(!cJSON_IsString(s_billingentityinternal_description_x) && !cJSON_IsNull(s_billingentityinternal_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response->s_ezsigntsarequirement_description_x
    cJSON *s_ezsigntsarequirement_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "sEzsigntsarequirementDescriptionX");
    if (s_ezsigntsarequirement_description_x) { 
    if(!cJSON_IsString(s_ezsigntsarequirement_description_x) && !cJSON_IsNull(s_ezsigntsarequirement_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response->s_email_address_signed
    cJSON *s_email_address_signed = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "sEmailAddressSigned");
    if (s_email_address_signed) { 
    if(!cJSON_IsString(s_email_address_signed) && !cJSON_IsNull(s_email_address_signed))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response->s_email_address_summary
    cJSON *s_email_address_summary = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "sEmailAddressSummary");
    if (s_email_address_summary) { 
    if(!cJSON_IsString(s_email_address_summary) && !cJSON_IsNull(s_email_address_summary))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "sUsergroupNameX");
    if (s_usergroup_name_x) { 
    if(!cJSON_IsString(s_usergroup_name_x) && !cJSON_IsNull(s_usergroup_name_x))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response->s_usergroup_name_x_restricted
    cJSON *s_usergroup_name_x_restricted = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "sUsergroupNameXRestricted");
    if (s_usergroup_name_x_restricted) { 
    if(!cJSON_IsString(s_usergroup_name_x_restricted) && !cJSON_IsNull(s_usergroup_name_x_restricted))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfoldertype_response->e_ezsignfoldertype_sendreminderfrequency
    cJSON *e_ezsignfoldertype_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "eEzsignfoldertypeSendreminderfrequency");
    if (e_ezsignfoldertype_sendreminderfrequency) { 
    e_ezsignfoldertype_sendreminderfrequency_local_nonprim = field_e_ezsignfoldertype_sendreminderfrequency_parseFromJSON(e_ezsignfoldertype_sendreminderfrequency); //custom
    }

    // ezsignfoldertype_response->i_ezsignfoldertype_archivaldays
    cJSON *i_ezsignfoldertype_archivaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "iEzsignfoldertypeArchivaldays");
    if (!i_ezsignfoldertype_archivaldays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_archivaldays))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_response->e_ezsignfoldertype_disposal
    cJSON *e_ezsignfoldertype_disposal = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "eEzsignfoldertypeDisposal");
    if (!e_ezsignfoldertype_disposal) {
        goto end;
    }

    
    e_ezsignfoldertype_disposal_local_nonprim = field_e_ezsignfoldertype_disposal_parseFromJSON(e_ezsignfoldertype_disposal); //custom

    // ezsignfoldertype_response->i_ezsignfoldertype_disposaldays
    cJSON *i_ezsignfoldertype_disposaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "iEzsignfoldertypeDisposaldays");
    if (i_ezsignfoldertype_disposaldays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_disposaldays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays
    cJSON *i_ezsignfoldertype_deadlinedays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "iEzsignfoldertypeDeadlinedays");
    if (!i_ezsignfoldertype_deadlinedays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_deadlinedays))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendattatchmentsigner
    cJSON *b_ezsignfoldertype_sendattatchmentsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendattatchmentsigner");
    if (!b_ezsignfoldertype_sendattatchmentsigner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattatchmentsigner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtodocumentowner
    cJSON *b_ezsignfoldertype_sendsignedtodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsignedtodocumentowner");
    if (!b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtodocumentowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtofolderowner
    cJSON *b_ezsignfoldertype_sendsignedtofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsignedtofolderowner");
    if (!b_ezsignfoldertype_sendsignedtofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofolderowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtofullgroup
    cJSON *b_ezsignfoldertype_sendsignedtofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsignedtofullgroup");
    if (b_ezsignfoldertype_sendsignedtofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtolimitedgroup
    cJSON *b_ezsignfoldertype_sendsignedtolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsignedtolimitedgroup");
    if (b_ezsignfoldertype_sendsignedtolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsignedtocolleague
    cJSON *b_ezsignfoldertype_sendsignedtocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsignedtocolleague");
    if (!b_ezsignfoldertype_sendsignedtocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtocolleague))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytodocumentowner
    cJSON *b_ezsignfoldertype_sendsummarytodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsummarytodocumentowner");
    if (!b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytodocumentowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytofolderowner
    cJSON *b_ezsignfoldertype_sendsummarytofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsummarytofolderowner");
    if (!b_ezsignfoldertype_sendsummarytofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofolderowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytofullgroup
    cJSON *b_ezsignfoldertype_sendsummarytofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsummarytofullgroup");
    if (b_ezsignfoldertype_sendsummarytofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytolimitedgroup
    cJSON *b_ezsignfoldertype_sendsummarytolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsummarytolimitedgroup");
    if (b_ezsignfoldertype_sendsummarytolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_sendsummarytocolleague
    cJSON *b_ezsignfoldertype_sendsummarytocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendsummarytocolleague");
    if (!b_ezsignfoldertype_sendsummarytocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytocolleague))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_includeproofsigner
    cJSON *b_ezsignfoldertype_includeproofsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeIncludeproofsigner");
    if (!b_ezsignfoldertype_includeproofsigner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_includeproofsigner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_includeproofuser
    cJSON *b_ezsignfoldertype_includeproofuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeIncludeproofuser");
    if (!b_ezsignfoldertype_includeproofuser) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_includeproofuser))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response->b_ezsignfoldertype_isactive
    cJSON *b_ezsignfoldertype_isactive = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_responseJSON, "bEzsignfoldertypeIsactive");
    if (!b_ezsignfoldertype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_isactive))
    {
    goto end; //Bool
    }


    ezsignfoldertype_response_local_var = ezsignfoldertype_response_create (
        pki_ezsignfoldertype_id->valuedouble,
        obj_ezsignfoldertype_name_local_nonprim,
        fki_branding_id->valuedouble,
        fki_billingentityinternal_id ? fki_billingentityinternal_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        fki_usergroup_id_restricted ? fki_usergroup_id_restricted->valuedouble : 0,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        strdup(s_branding_description_x->valuestring),
        s_billingentityinternal_description_x && !cJSON_IsNull(s_billingentityinternal_description_x) ? strdup(s_billingentityinternal_description_x->valuestring) : NULL,
        s_ezsigntsarequirement_description_x && !cJSON_IsNull(s_ezsigntsarequirement_description_x) ? strdup(s_ezsigntsarequirement_description_x->valuestring) : NULL,
        s_email_address_signed && !cJSON_IsNull(s_email_address_signed) ? strdup(s_email_address_signed->valuestring) : NULL,
        s_email_address_summary && !cJSON_IsNull(s_email_address_summary) ? strdup(s_email_address_summary->valuestring) : NULL,
        s_usergroup_name_x && !cJSON_IsNull(s_usergroup_name_x) ? strdup(s_usergroup_name_x->valuestring) : NULL,
        s_usergroup_name_x_restricted && !cJSON_IsNull(s_usergroup_name_x_restricted) ? strdup(s_usergroup_name_x_restricted->valuestring) : NULL,
        e_ezsignfoldertype_privacylevel_local_nonprim,
        e_ezsignfoldertype_sendreminderfrequency ? e_ezsignfoldertype_sendreminderfrequency_local_nonprim : NULL,
        i_ezsignfoldertype_archivaldays->valuedouble,
        e_ezsignfoldertype_disposal_local_nonprim,
        i_ezsignfoldertype_disposaldays ? i_ezsignfoldertype_disposaldays->valuedouble : 0,
        i_ezsignfoldertype_deadlinedays->valuedouble,
        b_ezsignfoldertype_sendattatchmentsigner->valueint,
        b_ezsignfoldertype_sendsignedtodocumentowner->valueint,
        b_ezsignfoldertype_sendsignedtofolderowner->valueint,
        b_ezsignfoldertype_sendsignedtofullgroup ? b_ezsignfoldertype_sendsignedtofullgroup->valueint : 0,
        b_ezsignfoldertype_sendsignedtolimitedgroup ? b_ezsignfoldertype_sendsignedtolimitedgroup->valueint : 0,
        b_ezsignfoldertype_sendsignedtocolleague->valueint,
        b_ezsignfoldertype_sendsummarytodocumentowner->valueint,
        b_ezsignfoldertype_sendsummarytofolderowner->valueint,
        b_ezsignfoldertype_sendsummarytofullgroup ? b_ezsignfoldertype_sendsummarytofullgroup->valueint : 0,
        b_ezsignfoldertype_sendsummarytolimitedgroup ? b_ezsignfoldertype_sendsummarytolimitedgroup->valueint : 0,
        b_ezsignfoldertype_sendsummarytocolleague->valueint,
        b_ezsignfoldertype_includeproofsigner->valueint,
        b_ezsignfoldertype_includeproofuser->valueint,
        b_ezsignfoldertype_isactive->valueint
        );

    return ezsignfoldertype_response_local_var;
end:
    if (obj_ezsignfoldertype_name_local_nonprim) {
        multilingual_ezsignfoldertype_name_free(obj_ezsignfoldertype_name_local_nonprim);
        obj_ezsignfoldertype_name_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        field_e_ezsignfoldertype_privacylevel_free(e_ezsignfoldertype_privacylevel_local_nonprim);
        e_ezsignfoldertype_privacylevel_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_sendreminderfrequency_local_nonprim) {
        field_e_ezsignfoldertype_sendreminderfrequency_free(e_ezsignfoldertype_sendreminderfrequency_local_nonprim);
        e_ezsignfoldertype_sendreminderfrequency_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_disposal_local_nonprim) {
        field_e_ezsignfoldertype_disposal_free(e_ezsignfoldertype_disposal_local_nonprim);
        e_ezsignfoldertype_disposal_local_nonprim = NULL;
    }
    return NULL;

}
