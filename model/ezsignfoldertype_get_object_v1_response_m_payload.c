#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_get_object_v1_response_m_payload.h"


char* e_ezsignfoldertype_privacylevelezsignfoldertype_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
	return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__e e_ezsignfoldertype_privacylevelezsignfoldertype_get_object_v1_response_m_payload_FromString(char* e_ezsignfoldertype_privacylevel){
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
char* e_ezsignfoldertype_sendreminderfrequencyezsignfoldertype_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__e e_ezsignfoldertype_sendreminderfrequency) {
    char* e_ezsignfoldertype_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
	return e_ezsignfoldertype_sendreminderfrequencyArray[e_ezsignfoldertype_sendreminderfrequency];
}

ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__e e_ezsignfoldertype_sendreminderfrequencyezsignfoldertype_get_object_v1_response_m_payload_FromString(char* e_ezsignfoldertype_sendreminderfrequency){
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
char* e_ezsignfoldertype_disposalezsignfoldertype_get_object_v1_response_m_payload_ToString(ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__e e_ezsignfoldertype_disposal) {
    char* e_ezsignfoldertype_disposalArray[] =  { "NULL", "No", "Manual", "Automatic" };
	return e_ezsignfoldertype_disposalArray[e_ezsignfoldertype_disposal];
}

ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__e e_ezsignfoldertype_disposalezsignfoldertype_get_object_v1_response_m_payload_FromString(char* e_ezsignfoldertype_disposal){
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

ezsignfoldertype_get_object_v1_response_m_payload_t *ezsignfoldertype_get_object_v1_response_m_payload_create(
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
    int b_ezsignfoldertype_isactive,
    list_t *a_fki_user_id_signed,
    list_t *a_fki_user_id_summary
    ) {
    ezsignfoldertype_get_object_v1_response_m_payload_t *ezsignfoldertype_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignfoldertype_get_object_v1_response_m_payload_t));
    if (!ezsignfoldertype_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->obj_ezsignfoldertype_name = obj_ezsignfoldertype_name;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->fki_branding_id = fki_branding_id;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->fki_usergroup_id = fki_usergroup_id;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->fki_usergroup_id_restricted = fki_usergroup_id_restricted;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->s_branding_description_x = s_branding_description_x;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->s_email_address_signed = s_email_address_signed;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->s_email_address_summary = s_email_address_summary;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->s_usergroup_name_x = s_usergroup_name_x;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->s_usergroup_name_x_restricted = s_usergroup_name_x_restricted;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->e_ezsignfoldertype_sendreminderfrequency = e_ezsignfoldertype_sendreminderfrequency;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->i_ezsignfoldertype_archivaldays = i_ezsignfoldertype_archivaldays;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->e_ezsignfoldertype_disposal = e_ezsignfoldertype_disposal;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->i_ezsignfoldertype_disposaldays = i_ezsignfoldertype_disposaldays;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->i_ezsignfoldertype_deadlinedays = i_ezsignfoldertype_deadlinedays;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendattatchmentsigner = b_ezsignfoldertype_sendattatchmentsigner;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsignedtodocumentowner = b_ezsignfoldertype_sendsignedtodocumentowner;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsignedtofolderowner = b_ezsignfoldertype_sendsignedtofolderowner;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsignedtofullgroup = b_ezsignfoldertype_sendsignedtofullgroup;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsignedtolimitedgroup = b_ezsignfoldertype_sendsignedtolimitedgroup;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsignedtocolleague = b_ezsignfoldertype_sendsignedtocolleague;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsummarytodocumentowner = b_ezsignfoldertype_sendsummarytodocumentowner;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsummarytofolderowner = b_ezsignfoldertype_sendsummarytofolderowner;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsummarytofullgroup = b_ezsignfoldertype_sendsummarytofullgroup;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsummarytolimitedgroup = b_ezsignfoldertype_sendsummarytolimitedgroup;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_sendsummarytocolleague = b_ezsignfoldertype_sendsummarytocolleague;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_includeproofsigner = b_ezsignfoldertype_includeproofsigner;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_includeproofuser = b_ezsignfoldertype_includeproofuser;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->b_ezsignfoldertype_isactive = b_ezsignfoldertype_isactive;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->a_fki_user_id_signed = a_fki_user_id_signed;
    ezsignfoldertype_get_object_v1_response_m_payload_local_var->a_fki_user_id_summary = a_fki_user_id_summary;

    return ezsignfoldertype_get_object_v1_response_m_payload_local_var;
}


void ezsignfoldertype_get_object_v1_response_m_payload_free(ezsignfoldertype_get_object_v1_response_m_payload_t *ezsignfoldertype_get_object_v1_response_m_payload) {
    if(NULL == ezsignfoldertype_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_get_object_v1_response_m_payload->obj_ezsignfoldertype_name) {
        multilingual_ezsignfoldertype_name_free(ezsignfoldertype_get_object_v1_response_m_payload->obj_ezsignfoldertype_name);
        ezsignfoldertype_get_object_v1_response_m_payload->obj_ezsignfoldertype_name = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->s_branding_description_x) {
        free(ezsignfoldertype_get_object_v1_response_m_payload->s_branding_description_x);
        ezsignfoldertype_get_object_v1_response_m_payload->s_branding_description_x = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->s_billingentityinternal_description_x) {
        free(ezsignfoldertype_get_object_v1_response_m_payload->s_billingentityinternal_description_x);
        ezsignfoldertype_get_object_v1_response_m_payload->s_billingentityinternal_description_x = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x) {
        free(ezsignfoldertype_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x);
        ezsignfoldertype_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_signed) {
        free(ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_signed);
        ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_signed = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_summary) {
        free(ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_summary);
        ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_summary = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x) {
        free(ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x);
        ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x_restricted) {
        free(ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x_restricted);
        ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x_restricted = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_privacylevel) {
        field_e_ezsignfoldertype_privacylevel_free(ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_privacylevel);
        ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_privacylevel = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_sendreminderfrequency) {
        field_e_ezsignfoldertype_sendreminderfrequency_free(ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_sendreminderfrequency);
        ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_sendreminderfrequency = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_disposal) {
        field_e_ezsignfoldertype_disposal_free(ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_disposal);
        ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_disposal = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_signed) {
        list_ForEach(listEntry, ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_signed) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_signed);
        ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_signed = NULL;
    }
    if (ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_summary) {
        list_ForEach(listEntry, ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_summary) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_summary);
        ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_summary = NULL;
    }
    free(ezsignfoldertype_get_object_v1_response_m_payload);
}

cJSON *ezsignfoldertype_get_object_v1_response_m_payload_convertToJSON(ezsignfoldertype_get_object_v1_response_m_payload_t *ezsignfoldertype_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_get_object_v1_response_m_payload->pki_ezsignfoldertype_id
    if (!ezsignfoldertype_get_object_v1_response_m_payload->pki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", ezsignfoldertype_get_object_v1_response_m_payload->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->obj_ezsignfoldertype_name
    if (!ezsignfoldertype_get_object_v1_response_m_payload->obj_ezsignfoldertype_name) {
        goto fail;
    }
    cJSON *obj_ezsignfoldertype_name_local_JSON = multilingual_ezsignfoldertype_name_convertToJSON(ezsignfoldertype_get_object_v1_response_m_payload->obj_ezsignfoldertype_name);
    if(obj_ezsignfoldertype_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertypeName", obj_ezsignfoldertype_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->fki_branding_id
    if (!ezsignfoldertype_get_object_v1_response_m_payload->fki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrandingID", ezsignfoldertype_get_object_v1_response_m_payload->fki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->fki_billingentityinternal_id
    if(ezsignfoldertype_get_object_v1_response_m_payload->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezsignfoldertype_get_object_v1_response_m_payload->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->fki_usergroup_id
    if(ezsignfoldertype_get_object_v1_response_m_payload->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", ezsignfoldertype_get_object_v1_response_m_payload->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->fki_usergroup_id_restricted
    if(ezsignfoldertype_get_object_v1_response_m_payload->fki_usergroup_id_restricted) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupIDRestricted", ezsignfoldertype_get_object_v1_response_m_payload->fki_usergroup_id_restricted) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id
    if(ezsignfoldertype_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfoldertype_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->s_branding_description_x
    if (!ezsignfoldertype_get_object_v1_response_m_payload->s_branding_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrandingDescriptionX", ezsignfoldertype_get_object_v1_response_m_payload->s_branding_description_x) == NULL) {
    goto fail; //String
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->s_billingentityinternal_description_x
    if(ezsignfoldertype_get_object_v1_response_m_payload->s_billingentityinternal_description_x) {
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezsignfoldertype_get_object_v1_response_m_payload->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x
    if(ezsignfoldertype_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsigntsarequirementDescriptionX", ezsignfoldertype_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_signed
    if(ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_signed) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSigned", ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_signed) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_summary
    if(ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_summary) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSummary", ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_summary) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x
    if(ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x) {
    if(cJSON_AddStringToObject(item, "sUsergroupNameX", ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x_restricted
    if(ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x_restricted) {
    if(cJSON_AddStringToObject(item, "sUsergroupNameXRestricted", ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x_restricted) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__NULL == ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_sendreminderfrequency
    if(ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_sendreminderfrequency != ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__NULL) {
    cJSON *e_ezsignfoldertype_sendreminderfrequency_local_JSON = field_e_ezsignfoldertype_sendreminderfrequency_convertToJSON(ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_sendreminderfrequency);
    if(e_ezsignfoldertype_sendreminderfrequency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeSendreminderfrequency", e_ezsignfoldertype_sendreminderfrequency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_archivaldays
    if (!ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_archivaldays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeArchivaldays", ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_archivaldays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_disposal
    if (ezmax_api_definition__full_ezsignfoldertype_get_object_v1_response_m_payload__NULL == ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_disposal) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_disposal_local_JSON = field_e_ezsignfoldertype_disposal_convertToJSON(ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_disposal);
    if(e_ezsignfoldertype_disposal_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDisposal", e_ezsignfoldertype_disposal_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_disposaldays
    if(ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_disposaldays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDisposaldays", ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_disposaldays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_deadlinedays
    if (!ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_deadlinedays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDeadlinedays", ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_deadlinedays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendattatchmentsigner
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendattatchmentsigner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattatchmentsigner", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendattatchmentsigner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtodocumentowner
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtodocumentowner", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtofolderowner
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofolderowner", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtofullgroup
    if(ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofullgroup", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtolimitedgroup
    if(ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtolimitedgroup", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtocolleague
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtocolleague", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytodocumentowner
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytodocumentowner", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytofolderowner
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofolderowner", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytofullgroup
    if(ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofullgroup", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytolimitedgroup
    if(ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytolimitedgroup", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytocolleague
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytocolleague", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_includeproofsigner
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_includeproofsigner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIncludeproofsigner", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_includeproofsigner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_includeproofuser
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_includeproofuser) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIncludeproofuser", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_includeproofuser) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_isactive
    if (!ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIsactive", ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_signed
    if(ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_signed) {
    cJSON *a_fki_user_id_signed = cJSON_AddArrayToObject(item, "a_fkiUserIDSigned");
    if(a_fki_user_id_signed == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_user_id_signedListEntry;
    list_ForEach(a_fki_user_id_signedListEntry, ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_signed) {
    if(cJSON_AddNumberToObject(a_fki_user_id_signed, "", *(double *)a_fki_user_id_signedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_summary
    if(ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_summary) {
    cJSON *a_fki_user_id_summary = cJSON_AddArrayToObject(item, "a_fkiUserIDSummary");
    if(a_fki_user_id_summary == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_user_id_summaryListEntry;
    list_ForEach(a_fki_user_id_summaryListEntry, ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_summary) {
    if(cJSON_AddNumberToObject(a_fki_user_id_summary, "", *(double *)a_fki_user_id_summaryListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_get_object_v1_response_m_payload_t *ezsignfoldertype_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_get_object_v1_response_m_payloadJSON){

    ezsignfoldertype_get_object_v1_response_m_payload_t *ezsignfoldertype_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfoldertype_get_object_v1_response_m_payload->obj_ezsignfoldertype_name
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_privacylevel
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_sendreminderfrequency
    field_e_ezsignfoldertype_sendreminderfrequency_t *e_ezsignfoldertype_sendreminderfrequency_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_disposal
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal_local_nonprim = NULL;

    // define the local list for ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_signed
    list_t *a_fki_user_id_signedList = NULL;

    // define the local list for ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_summary
    list_t *a_fki_user_id_summaryList = NULL;

    // ezsignfoldertype_get_object_v1_response_m_payload->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "pkiEzsignfoldertypeID");
    if (!pki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->obj_ezsignfoldertype_name
    cJSON *obj_ezsignfoldertype_name = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "objEzsignfoldertypeName");
    if (!obj_ezsignfoldertype_name) {
        goto end;
    }

    
    obj_ezsignfoldertype_name_local_nonprim = multilingual_ezsignfoldertype_name_parseFromJSON(obj_ezsignfoldertype_name); //nonprimitive

    // ezsignfoldertype_get_object_v1_response_m_payload->fki_branding_id
    cJSON *fki_branding_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "fkiBrandingID");
    if (!fki_branding_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_branding_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "fkiBillingentityinternalID");
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "fkiUsergroupID");
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->fki_usergroup_id_restricted
    cJSON *fki_usergroup_id_restricted = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "fkiUsergroupIDRestricted");
    if (fki_usergroup_id_restricted) { 
    if(!cJSON_IsNumber(fki_usergroup_id_restricted))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "fkiEzsigntsarequirementID");
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->s_branding_description_x
    cJSON *s_branding_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "sBrandingDescriptionX");
    if (!s_branding_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_branding_description_x))
    {
    goto end; //String
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "sBillingentityinternalDescriptionX");
    if (s_billingentityinternal_description_x) { 
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x
    cJSON *s_ezsigntsarequirement_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "sEzsigntsarequirementDescriptionX");
    if (s_ezsigntsarequirement_description_x) { 
    if(!cJSON_IsString(s_ezsigntsarequirement_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_signed
    cJSON *s_email_address_signed = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "sEmailAddressSigned");
    if (s_email_address_signed) { 
    if(!cJSON_IsString(s_email_address_signed))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->s_email_address_summary
    cJSON *s_email_address_summary = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "sEmailAddressSummary");
    if (s_email_address_summary) { 
    if(!cJSON_IsString(s_email_address_summary))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x
    cJSON *s_usergroup_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "sUsergroupNameX");
    if (s_usergroup_name_x) { 
    if(!cJSON_IsString(s_usergroup_name_x))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->s_usergroup_name_x_restricted
    cJSON *s_usergroup_name_x_restricted = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "sUsergroupNameXRestricted");
    if (s_usergroup_name_x_restricted) { 
    if(!cJSON_IsString(s_usergroup_name_x_restricted))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_sendreminderfrequency
    cJSON *e_ezsignfoldertype_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "eEzsignfoldertypeSendreminderfrequency");
    if (e_ezsignfoldertype_sendreminderfrequency) { 
    e_ezsignfoldertype_sendreminderfrequency_local_nonprim = field_e_ezsignfoldertype_sendreminderfrequency_parseFromJSON(e_ezsignfoldertype_sendreminderfrequency); //custom
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_archivaldays
    cJSON *i_ezsignfoldertype_archivaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "iEzsignfoldertypeArchivaldays");
    if (!i_ezsignfoldertype_archivaldays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_archivaldays))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->e_ezsignfoldertype_disposal
    cJSON *e_ezsignfoldertype_disposal = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "eEzsignfoldertypeDisposal");
    if (!e_ezsignfoldertype_disposal) {
        goto end;
    }

    
    e_ezsignfoldertype_disposal_local_nonprim = field_e_ezsignfoldertype_disposal_parseFromJSON(e_ezsignfoldertype_disposal); //custom

    // ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_disposaldays
    cJSON *i_ezsignfoldertype_disposaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "iEzsignfoldertypeDisposaldays");
    if (i_ezsignfoldertype_disposaldays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_disposaldays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->i_ezsignfoldertype_deadlinedays
    cJSON *i_ezsignfoldertype_deadlinedays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "iEzsignfoldertypeDeadlinedays");
    if (!i_ezsignfoldertype_deadlinedays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_deadlinedays))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendattatchmentsigner
    cJSON *b_ezsignfoldertype_sendattatchmentsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendattatchmentsigner");
    if (!b_ezsignfoldertype_sendattatchmentsigner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattatchmentsigner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtodocumentowner
    cJSON *b_ezsignfoldertype_sendsignedtodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsignedtodocumentowner");
    if (!b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtodocumentowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtofolderowner
    cJSON *b_ezsignfoldertype_sendsignedtofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsignedtofolderowner");
    if (!b_ezsignfoldertype_sendsignedtofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofolderowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtofullgroup
    cJSON *b_ezsignfoldertype_sendsignedtofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsignedtofullgroup");
    if (b_ezsignfoldertype_sendsignedtofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtolimitedgroup
    cJSON *b_ezsignfoldertype_sendsignedtolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsignedtolimitedgroup");
    if (b_ezsignfoldertype_sendsignedtolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsignedtocolleague
    cJSON *b_ezsignfoldertype_sendsignedtocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsignedtocolleague");
    if (!b_ezsignfoldertype_sendsignedtocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtocolleague))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytodocumentowner
    cJSON *b_ezsignfoldertype_sendsummarytodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsummarytodocumentowner");
    if (!b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytodocumentowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytofolderowner
    cJSON *b_ezsignfoldertype_sendsummarytofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsummarytofolderowner");
    if (!b_ezsignfoldertype_sendsummarytofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofolderowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytofullgroup
    cJSON *b_ezsignfoldertype_sendsummarytofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsummarytofullgroup");
    if (b_ezsignfoldertype_sendsummarytofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytolimitedgroup
    cJSON *b_ezsignfoldertype_sendsummarytolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsummarytolimitedgroup");
    if (b_ezsignfoldertype_sendsummarytolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_sendsummarytocolleague
    cJSON *b_ezsignfoldertype_sendsummarytocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeSendsummarytocolleague");
    if (!b_ezsignfoldertype_sendsummarytocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytocolleague))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_includeproofsigner
    cJSON *b_ezsignfoldertype_includeproofsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeIncludeproofsigner");
    if (!b_ezsignfoldertype_includeproofsigner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_includeproofsigner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_includeproofuser
    cJSON *b_ezsignfoldertype_includeproofuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeIncludeproofuser");
    if (!b_ezsignfoldertype_includeproofuser) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_includeproofuser))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->b_ezsignfoldertype_isactive
    cJSON *b_ezsignfoldertype_isactive = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "bEzsignfoldertypeIsactive");
    if (!b_ezsignfoldertype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_isactive))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_signed
    cJSON *a_fki_user_id_signed = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "a_fkiUserIDSigned");
    if (a_fki_user_id_signed) { 
    cJSON *a_fki_user_id_signed_local = NULL;
    if(!cJSON_IsArray(a_fki_user_id_signed)) {
        goto end;//primitive container
    }
    a_fki_user_id_signedList = list_createList();

    cJSON_ArrayForEach(a_fki_user_id_signed_local, a_fki_user_id_signed)
    {
        if(!cJSON_IsNumber(a_fki_user_id_signed_local))
        {
            goto end;
        }
        double *a_fki_user_id_signed_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_user_id_signed_local_value)
        {
            goto end;
        }
        *a_fki_user_id_signed_local_value = a_fki_user_id_signed_local->valuedouble;
        list_addElement(a_fki_user_id_signedList , a_fki_user_id_signed_local_value);
    }
    }

    // ezsignfoldertype_get_object_v1_response_m_payload->a_fki_user_id_summary
    cJSON *a_fki_user_id_summary = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v1_response_m_payloadJSON, "a_fkiUserIDSummary");
    if (a_fki_user_id_summary) { 
    cJSON *a_fki_user_id_summary_local = NULL;
    if(!cJSON_IsArray(a_fki_user_id_summary)) {
        goto end;//primitive container
    }
    a_fki_user_id_summaryList = list_createList();

    cJSON_ArrayForEach(a_fki_user_id_summary_local, a_fki_user_id_summary)
    {
        if(!cJSON_IsNumber(a_fki_user_id_summary_local))
        {
            goto end;
        }
        double *a_fki_user_id_summary_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_user_id_summary_local_value)
        {
            goto end;
        }
        *a_fki_user_id_summary_local_value = a_fki_user_id_summary_local->valuedouble;
        list_addElement(a_fki_user_id_summaryList , a_fki_user_id_summary_local_value);
    }
    }


    ezsignfoldertype_get_object_v1_response_m_payload_local_var = ezsignfoldertype_get_object_v1_response_m_payload_create (
        pki_ezsignfoldertype_id->valuedouble,
        obj_ezsignfoldertype_name_local_nonprim,
        fki_branding_id->valuedouble,
        fki_billingentityinternal_id ? fki_billingentityinternal_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        fki_usergroup_id_restricted ? fki_usergroup_id_restricted->valuedouble : 0,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        strdup(s_branding_description_x->valuestring),
        s_billingentityinternal_description_x ? strdup(s_billingentityinternal_description_x->valuestring) : NULL,
        s_ezsigntsarequirement_description_x ? strdup(s_ezsigntsarequirement_description_x->valuestring) : NULL,
        s_email_address_signed ? strdup(s_email_address_signed->valuestring) : NULL,
        s_email_address_summary ? strdup(s_email_address_summary->valuestring) : NULL,
        s_usergroup_name_x ? strdup(s_usergroup_name_x->valuestring) : NULL,
        s_usergroup_name_x_restricted ? strdup(s_usergroup_name_x_restricted->valuestring) : NULL,
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
        b_ezsignfoldertype_isactive->valueint,
        a_fki_user_id_signed ? a_fki_user_id_signedList : NULL,
        a_fki_user_id_summary ? a_fki_user_id_summaryList : NULL
        );

    return ezsignfoldertype_get_object_v1_response_m_payload_local_var;
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
    if (a_fki_user_id_signedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_user_id_signedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_user_id_signedList);
        a_fki_user_id_signedList = NULL;
    }
    if (a_fki_user_id_summaryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_user_id_summaryList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_user_id_summaryList);
        a_fki_user_id_summaryList = NULL;
    }
    return NULL;

}
