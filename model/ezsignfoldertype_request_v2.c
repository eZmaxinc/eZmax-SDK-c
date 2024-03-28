#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_request_v2.h"


char* ezsignfoldertype_request_v2_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignfoldertype_request_v2__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition__full_ezsignfoldertype_request_v2__e ezsignfoldertype_request_v2_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel){
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
char* ezsignfoldertype_request_v2_e_ezsignfoldertype_sendreminderfrequency_ToString(ezmax_api_definition__full_ezsignfoldertype_request_v2__e e_ezsignfoldertype_sendreminderfrequency) {
    char* e_ezsignfoldertype_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    return e_ezsignfoldertype_sendreminderfrequencyArray[e_ezsignfoldertype_sendreminderfrequency];
}

ezmax_api_definition__full_ezsignfoldertype_request_v2__e ezsignfoldertype_request_v2_e_ezsignfoldertype_sendreminderfrequency_FromString(char* e_ezsignfoldertype_sendreminderfrequency){
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
char* ezsignfoldertype_request_v2_e_ezsignfoldertype_disposal_ToString(ezmax_api_definition__full_ezsignfoldertype_request_v2__e e_ezsignfoldertype_disposal) {
    char* e_ezsignfoldertype_disposalArray[] =  { "NULL", "No", "Manual", "Automatic" };
    return e_ezsignfoldertype_disposalArray[e_ezsignfoldertype_disposal];
}

ezmax_api_definition__full_ezsignfoldertype_request_v2__e ezsignfoldertype_request_v2_e_ezsignfoldertype_disposal_FromString(char* e_ezsignfoldertype_disposal){
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
char* ezsignfoldertype_request_v2_e_ezsignfoldertype_completion_ToString(ezmax_api_definition__full_ezsignfoldertype_request_v2__e e_ezsignfoldertype_completion) {
    char* e_ezsignfoldertype_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    return e_ezsignfoldertype_completionArray[e_ezsignfoldertype_completion];
}

ezmax_api_definition__full_ezsignfoldertype_request_v2__e ezsignfoldertype_request_v2_e_ezsignfoldertype_completion_FromString(char* e_ezsignfoldertype_completion){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_completionArray) / sizeof(e_ezsignfoldertype_completionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_completion, e_ezsignfoldertype_completionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfoldertype_request_v2_t *ezsignfoldertype_request_v2_create(
    int pki_ezsignfoldertype_id,
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name,
    int fki_branding_id,
    int fki_billingentityinternal_id,
    int fki_ezsigntsarequirement_id,
    list_t *a_fki_userlogintype_id,
    list_t *a_fki_usergroup_id_all,
    list_t *a_fki_usergroup_id_restricted,
    list_t *a_fki_usergroup_id_template,
    char *s_email_address_signed,
    char *s_email_address_summary,
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    field_e_ezsignfoldertype_sendreminderfrequency_t *e_ezsignfoldertype_sendreminderfrequency,
    int i_ezsignfoldertype_archivaldays,
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal,
    field_e_ezsignfoldertype_completion_t *e_ezsignfoldertype_completion,
    int i_ezsignfoldertype_disposaldays,
    int i_ezsignfoldertype_deadlinedays,
    int b_ezsignfoldertype_delegate,
    int b_ezsignfoldertype_discussion,
    int b_ezsignfoldertype_reassignezsignsigner,
    int b_ezsignfoldertype_reassignuser,
    int b_ezsignfoldertype_sendsignedtoezsignsigner,
    int b_ezsignfoldertype_sendsignedtouser,
    int b_ezsignfoldertype_sendattachmentezsignsigner,
    int b_ezsignfoldertype_sendproofezsignsigner,
    int b_ezsignfoldertype_sendattachmentuser,
    int b_ezsignfoldertype_sendproofuser,
    int b_ezsignfoldertype_sendproofemail,
    int b_ezsignfoldertype_allowdownloadattachmentezsignsigner,
    int b_ezsignfoldertype_allowdownloadproofezsignsigner,
    int b_ezsignfoldertype_sendproofreceivealldocument,
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
    int b_ezsignfoldertype_isactive
    ) {
    ezsignfoldertype_request_v2_t *ezsignfoldertype_request_v2_local_var = malloc(sizeof(ezsignfoldertype_request_v2_t));
    if (!ezsignfoldertype_request_v2_local_var) {
        return NULL;
    }
    ezsignfoldertype_request_v2_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    ezsignfoldertype_request_v2_local_var->obj_ezsignfoldertype_name = obj_ezsignfoldertype_name;
    ezsignfoldertype_request_v2_local_var->fki_branding_id = fki_branding_id;
    ezsignfoldertype_request_v2_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezsignfoldertype_request_v2_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfoldertype_request_v2_local_var->a_fki_userlogintype_id = a_fki_userlogintype_id;
    ezsignfoldertype_request_v2_local_var->a_fki_usergroup_id_all = a_fki_usergroup_id_all;
    ezsignfoldertype_request_v2_local_var->a_fki_usergroup_id_restricted = a_fki_usergroup_id_restricted;
    ezsignfoldertype_request_v2_local_var->a_fki_usergroup_id_template = a_fki_usergroup_id_template;
    ezsignfoldertype_request_v2_local_var->s_email_address_signed = s_email_address_signed;
    ezsignfoldertype_request_v2_local_var->s_email_address_summary = s_email_address_summary;
    ezsignfoldertype_request_v2_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfoldertype_request_v2_local_var->e_ezsignfoldertype_sendreminderfrequency = e_ezsignfoldertype_sendreminderfrequency;
    ezsignfoldertype_request_v2_local_var->i_ezsignfoldertype_archivaldays = i_ezsignfoldertype_archivaldays;
    ezsignfoldertype_request_v2_local_var->e_ezsignfoldertype_disposal = e_ezsignfoldertype_disposal;
    ezsignfoldertype_request_v2_local_var->e_ezsignfoldertype_completion = e_ezsignfoldertype_completion;
    ezsignfoldertype_request_v2_local_var->i_ezsignfoldertype_disposaldays = i_ezsignfoldertype_disposaldays;
    ezsignfoldertype_request_v2_local_var->i_ezsignfoldertype_deadlinedays = i_ezsignfoldertype_deadlinedays;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_delegate = b_ezsignfoldertype_delegate;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_discussion = b_ezsignfoldertype_discussion;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_reassignezsignsigner = b_ezsignfoldertype_reassignezsignsigner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_reassignuser = b_ezsignfoldertype_reassignuser;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsignedtoezsignsigner = b_ezsignfoldertype_sendsignedtoezsignsigner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsignedtouser = b_ezsignfoldertype_sendsignedtouser;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendattachmentezsignsigner = b_ezsignfoldertype_sendattachmentezsignsigner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendproofezsignsigner = b_ezsignfoldertype_sendproofezsignsigner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendattachmentuser = b_ezsignfoldertype_sendattachmentuser;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendproofuser = b_ezsignfoldertype_sendproofuser;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendproofemail = b_ezsignfoldertype_sendproofemail;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_allowdownloadattachmentezsignsigner = b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_allowdownloadproofezsignsigner = b_ezsignfoldertype_allowdownloadproofezsignsigner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendproofreceivealldocument = b_ezsignfoldertype_sendproofreceivealldocument;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsignedtodocumentowner = b_ezsignfoldertype_sendsignedtodocumentowner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsignedtofolderowner = b_ezsignfoldertype_sendsignedtofolderowner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsignedtofullgroup = b_ezsignfoldertype_sendsignedtofullgroup;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsignedtolimitedgroup = b_ezsignfoldertype_sendsignedtolimitedgroup;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsignedtocolleague = b_ezsignfoldertype_sendsignedtocolleague;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsummarytodocumentowner = b_ezsignfoldertype_sendsummarytodocumentowner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsummarytofolderowner = b_ezsignfoldertype_sendsummarytofolderowner;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsummarytofullgroup = b_ezsignfoldertype_sendsummarytofullgroup;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsummarytolimitedgroup = b_ezsignfoldertype_sendsummarytolimitedgroup;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_sendsummarytocolleague = b_ezsignfoldertype_sendsummarytocolleague;
    ezsignfoldertype_request_v2_local_var->b_ezsignfoldertype_isactive = b_ezsignfoldertype_isactive;

    return ezsignfoldertype_request_v2_local_var;
}


void ezsignfoldertype_request_v2_free(ezsignfoldertype_request_v2_t *ezsignfoldertype_request_v2) {
    if(NULL == ezsignfoldertype_request_v2){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_request_v2->obj_ezsignfoldertype_name) {
        multilingual_ezsignfoldertype_name_free(ezsignfoldertype_request_v2->obj_ezsignfoldertype_name);
        ezsignfoldertype_request_v2->obj_ezsignfoldertype_name = NULL;
    }
    if (ezsignfoldertype_request_v2->a_fki_userlogintype_id) {
        list_ForEach(listEntry, ezsignfoldertype_request_v2->a_fki_userlogintype_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_v2->a_fki_userlogintype_id);
        ezsignfoldertype_request_v2->a_fki_userlogintype_id = NULL;
    }
    if (ezsignfoldertype_request_v2->a_fki_usergroup_id_all) {
        list_ForEach(listEntry, ezsignfoldertype_request_v2->a_fki_usergroup_id_all) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_v2->a_fki_usergroup_id_all);
        ezsignfoldertype_request_v2->a_fki_usergroup_id_all = NULL;
    }
    if (ezsignfoldertype_request_v2->a_fki_usergroup_id_restricted) {
        list_ForEach(listEntry, ezsignfoldertype_request_v2->a_fki_usergroup_id_restricted) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_v2->a_fki_usergroup_id_restricted);
        ezsignfoldertype_request_v2->a_fki_usergroup_id_restricted = NULL;
    }
    if (ezsignfoldertype_request_v2->a_fki_usergroup_id_template) {
        list_ForEach(listEntry, ezsignfoldertype_request_v2->a_fki_usergroup_id_template) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_v2->a_fki_usergroup_id_template);
        ezsignfoldertype_request_v2->a_fki_usergroup_id_template = NULL;
    }
    if (ezsignfoldertype_request_v2->s_email_address_signed) {
        free(ezsignfoldertype_request_v2->s_email_address_signed);
        ezsignfoldertype_request_v2->s_email_address_signed = NULL;
    }
    if (ezsignfoldertype_request_v2->s_email_address_summary) {
        free(ezsignfoldertype_request_v2->s_email_address_summary);
        ezsignfoldertype_request_v2->s_email_address_summary = NULL;
    }
    if (ezsignfoldertype_request_v2->e_ezsignfoldertype_privacylevel) {
        field_e_ezsignfoldertype_privacylevel_free(ezsignfoldertype_request_v2->e_ezsignfoldertype_privacylevel);
        ezsignfoldertype_request_v2->e_ezsignfoldertype_privacylevel = NULL;
    }
    if (ezsignfoldertype_request_v2->e_ezsignfoldertype_sendreminderfrequency) {
        field_e_ezsignfoldertype_sendreminderfrequency_free(ezsignfoldertype_request_v2->e_ezsignfoldertype_sendreminderfrequency);
        ezsignfoldertype_request_v2->e_ezsignfoldertype_sendreminderfrequency = NULL;
    }
    if (ezsignfoldertype_request_v2->e_ezsignfoldertype_disposal) {
        field_e_ezsignfoldertype_disposal_free(ezsignfoldertype_request_v2->e_ezsignfoldertype_disposal);
        ezsignfoldertype_request_v2->e_ezsignfoldertype_disposal = NULL;
    }
    if (ezsignfoldertype_request_v2->e_ezsignfoldertype_completion) {
        field_e_ezsignfoldertype_completion_free(ezsignfoldertype_request_v2->e_ezsignfoldertype_completion);
        ezsignfoldertype_request_v2->e_ezsignfoldertype_completion = NULL;
    }
    free(ezsignfoldertype_request_v2);
}

cJSON *ezsignfoldertype_request_v2_convertToJSON(ezsignfoldertype_request_v2_t *ezsignfoldertype_request_v2) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_request_v2->pki_ezsignfoldertype_id
    if(ezsignfoldertype_request_v2->pki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", ezsignfoldertype_request_v2->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v2->obj_ezsignfoldertype_name
    if (!ezsignfoldertype_request_v2->obj_ezsignfoldertype_name) {
        goto fail;
    }
    cJSON *obj_ezsignfoldertype_name_local_JSON = multilingual_ezsignfoldertype_name_convertToJSON(ezsignfoldertype_request_v2->obj_ezsignfoldertype_name);
    if(obj_ezsignfoldertype_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertypeName", obj_ezsignfoldertype_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldertype_request_v2->fki_branding_id
    if (!ezsignfoldertype_request_v2->fki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrandingID", ezsignfoldertype_request_v2->fki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_request_v2->fki_billingentityinternal_id
    if(ezsignfoldertype_request_v2->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezsignfoldertype_request_v2->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v2->fki_ezsigntsarequirement_id
    if(ezsignfoldertype_request_v2->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfoldertype_request_v2->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v2->a_fki_userlogintype_id
    if (!ezsignfoldertype_request_v2->a_fki_userlogintype_id) {
        goto fail;
    }
    cJSON *a_fki_userlogintype_id = cJSON_AddArrayToObject(item, "a_fkiUserlogintypeID");
    if(a_fki_userlogintype_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_userlogintype_idListEntry;
    list_ForEach(a_fki_userlogintype_idListEntry, ezsignfoldertype_request_v2->a_fki_userlogintype_id) {
    if(cJSON_AddNumberToObject(a_fki_userlogintype_id, "", *(double *)a_fki_userlogintype_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsignfoldertype_request_v2->a_fki_usergroup_id_all
    if(ezsignfoldertype_request_v2->a_fki_usergroup_id_all) {
    cJSON *a_fki_usergroup_id_all = cJSON_AddArrayToObject(item, "a_fkiUsergroupIDAll");
    if(a_fki_usergroup_id_all == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_usergroup_id_allListEntry;
    list_ForEach(a_fki_usergroup_id_allListEntry, ezsignfoldertype_request_v2->a_fki_usergroup_id_all) {
    if(cJSON_AddNumberToObject(a_fki_usergroup_id_all, "", *(double *)a_fki_usergroup_id_allListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_v2->a_fki_usergroup_id_restricted
    if(ezsignfoldertype_request_v2->a_fki_usergroup_id_restricted) {
    cJSON *a_fki_usergroup_id_restricted = cJSON_AddArrayToObject(item, "a_fkiUsergroupIDRestricted");
    if(a_fki_usergroup_id_restricted == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_usergroup_id_restrictedListEntry;
    list_ForEach(a_fki_usergroup_id_restrictedListEntry, ezsignfoldertype_request_v2->a_fki_usergroup_id_restricted) {
    if(cJSON_AddNumberToObject(a_fki_usergroup_id_restricted, "", *(double *)a_fki_usergroup_id_restrictedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_v2->a_fki_usergroup_id_template
    if(ezsignfoldertype_request_v2->a_fki_usergroup_id_template) {
    cJSON *a_fki_usergroup_id_template = cJSON_AddArrayToObject(item, "a_fkiUsergroupIDTemplate");
    if(a_fki_usergroup_id_template == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_usergroup_id_templateListEntry;
    list_ForEach(a_fki_usergroup_id_templateListEntry, ezsignfoldertype_request_v2->a_fki_usergroup_id_template) {
    if(cJSON_AddNumberToObject(a_fki_usergroup_id_template, "", *(double *)a_fki_usergroup_id_templateListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_v2->s_email_address_signed
    if(ezsignfoldertype_request_v2->s_email_address_signed) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSigned", ezsignfoldertype_request_v2->s_email_address_signed) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_request_v2->s_email_address_summary
    if(ezsignfoldertype_request_v2->s_email_address_summary) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSummary", ezsignfoldertype_request_v2->s_email_address_summary) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_request_v2->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_ezsignfoldertype_request_v2__NULL == ezsignfoldertype_request_v2->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfoldertype_request_v2->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_v2->e_ezsignfoldertype_sendreminderfrequency
    if(ezsignfoldertype_request_v2->e_ezsignfoldertype_sendreminderfrequency != ezmax_api_definition__full_ezsignfoldertype_request_v2__NULL) {
    cJSON *e_ezsignfoldertype_sendreminderfrequency_local_JSON = field_e_ezsignfoldertype_sendreminderfrequency_convertToJSON(ezsignfoldertype_request_v2->e_ezsignfoldertype_sendreminderfrequency);
    if(e_ezsignfoldertype_sendreminderfrequency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeSendreminderfrequency", e_ezsignfoldertype_sendreminderfrequency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_v2->i_ezsignfoldertype_archivaldays
    if (!ezsignfoldertype_request_v2->i_ezsignfoldertype_archivaldays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeArchivaldays", ezsignfoldertype_request_v2->i_ezsignfoldertype_archivaldays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_request_v2->e_ezsignfoldertype_disposal
    if (ezmax_api_definition__full_ezsignfoldertype_request_v2__NULL == ezsignfoldertype_request_v2->e_ezsignfoldertype_disposal) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_disposal_local_JSON = field_e_ezsignfoldertype_disposal_convertToJSON(ezsignfoldertype_request_v2->e_ezsignfoldertype_disposal);
    if(e_ezsignfoldertype_disposal_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDisposal", e_ezsignfoldertype_disposal_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_v2->e_ezsignfoldertype_completion
    if (ezmax_api_definition__full_ezsignfoldertype_request_v2__NULL == ezsignfoldertype_request_v2->e_ezsignfoldertype_completion) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_completion_local_JSON = field_e_ezsignfoldertype_completion_convertToJSON(ezsignfoldertype_request_v2->e_ezsignfoldertype_completion);
    if(e_ezsignfoldertype_completion_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeCompletion", e_ezsignfoldertype_completion_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_v2->i_ezsignfoldertype_disposaldays
    if(ezsignfoldertype_request_v2->i_ezsignfoldertype_disposaldays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDisposaldays", ezsignfoldertype_request_v2->i_ezsignfoldertype_disposaldays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v2->i_ezsignfoldertype_deadlinedays
    if (!ezsignfoldertype_request_v2->i_ezsignfoldertype_deadlinedays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDeadlinedays", ezsignfoldertype_request_v2->i_ezsignfoldertype_deadlinedays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_delegate
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_delegate) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDelegate", ezsignfoldertype_request_v2->b_ezsignfoldertype_delegate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_discussion
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_discussion) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDiscussion", ezsignfoldertype_request_v2->b_ezsignfoldertype_discussion) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_reassignezsignsigner
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_reassignezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignezsignsigner", ezsignfoldertype_request_v2->b_ezsignfoldertype_reassignezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_reassignuser
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_reassignuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignuser", ezsignfoldertype_request_v2->b_ezsignfoldertype_reassignuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtoezsignsigner
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtoezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtoezsignsigner", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtoezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtouser
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtouser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtouser", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtouser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendattachmentezsignsigner
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattachmentezsignsigner", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofezsignsigner
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofezsignsigner", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendattachmentuser
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendattachmentuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattachmentuser", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendattachmentuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofuser
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofuser", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofemail
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofemail) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofemail", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofemail) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner", ezsignfoldertype_request_v2->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_allowdownloadproofezsignsigner
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_allowdownloadproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadproofezsignsigner", ezsignfoldertype_request_v2->b_ezsignfoldertype_allowdownloadproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofreceivealldocument
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofreceivealldocument) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofreceivealldocument", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofreceivealldocument) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtodocumentowner
    if (!ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtodocumentowner", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtofolderowner
    if (!ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofolderowner", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtofullgroup
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofullgroup", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtolimitedgroup
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtolimitedgroup", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtocolleague
    if (!ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtocolleague", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytodocumentowner
    if (!ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytodocumentowner", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytofolderowner
    if (!ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofolderowner", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytofullgroup
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofullgroup", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytolimitedgroup
    if(ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytolimitedgroup", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytocolleague
    if (!ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytocolleague", ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v2->b_ezsignfoldertype_isactive
    if (!ezsignfoldertype_request_v2->b_ezsignfoldertype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIsactive", ezsignfoldertype_request_v2->b_ezsignfoldertype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_request_v2_t *ezsignfoldertype_request_v2_parseFromJSON(cJSON *ezsignfoldertype_request_v2JSON){

    ezsignfoldertype_request_v2_t *ezsignfoldertype_request_v2_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v2->obj_ezsignfoldertype_name
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name_local_nonprim = NULL;

    // define the local list for ezsignfoldertype_request_v2->a_fki_userlogintype_id
    list_t *a_fki_userlogintype_idList = NULL;

    // define the local list for ezsignfoldertype_request_v2->a_fki_usergroup_id_all
    list_t *a_fki_usergroup_id_allList = NULL;

    // define the local list for ezsignfoldertype_request_v2->a_fki_usergroup_id_restricted
    list_t *a_fki_usergroup_id_restrictedList = NULL;

    // define the local list for ezsignfoldertype_request_v2->a_fki_usergroup_id_template
    list_t *a_fki_usergroup_id_templateList = NULL;

    // define the local variable for ezsignfoldertype_request_v2->e_ezsignfoldertype_privacylevel
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_request_v2->e_ezsignfoldertype_sendreminderfrequency
    field_e_ezsignfoldertype_sendreminderfrequency_t *e_ezsignfoldertype_sendreminderfrequency_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_request_v2->e_ezsignfoldertype_disposal
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_request_v2->e_ezsignfoldertype_completion
    field_e_ezsignfoldertype_completion_t *e_ezsignfoldertype_completion_local_nonprim = NULL;

    // ezsignfoldertype_request_v2->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "pkiEzsignfoldertypeID");
    if (pki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_v2->obj_ezsignfoldertype_name
    cJSON *obj_ezsignfoldertype_name = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "objEzsignfoldertypeName");
    if (!obj_ezsignfoldertype_name) {
        goto end;
    }

    
    obj_ezsignfoldertype_name_local_nonprim = multilingual_ezsignfoldertype_name_parseFromJSON(obj_ezsignfoldertype_name); //nonprimitive

    // ezsignfoldertype_request_v2->fki_branding_id
    cJSON *fki_branding_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "fkiBrandingID");
    if (!fki_branding_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_branding_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_request_v2->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "fkiBillingentityinternalID");
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_v2->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "fkiEzsigntsarequirementID");
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_v2->a_fki_userlogintype_id
    cJSON *a_fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "a_fkiUserlogintypeID");
    if (!a_fki_userlogintype_id) {
        goto end;
    }

    
    cJSON *a_fki_userlogintype_id_local = NULL;
    if(!cJSON_IsArray(a_fki_userlogintype_id)) {
        goto end;//primitive container
    }
    a_fki_userlogintype_idList = list_createList();

    cJSON_ArrayForEach(a_fki_userlogintype_id_local, a_fki_userlogintype_id)
    {
        if(!cJSON_IsNumber(a_fki_userlogintype_id_local))
        {
            goto end;
        }
        double *a_fki_userlogintype_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_userlogintype_id_local_value)
        {
            goto end;
        }
        *a_fki_userlogintype_id_local_value = a_fki_userlogintype_id_local->valuedouble;
        list_addElement(a_fki_userlogintype_idList , a_fki_userlogintype_id_local_value);
    }

    // ezsignfoldertype_request_v2->a_fki_usergroup_id_all
    cJSON *a_fki_usergroup_id_all = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "a_fkiUsergroupIDAll");
    if (a_fki_usergroup_id_all) { 
    cJSON *a_fki_usergroup_id_all_local = NULL;
    if(!cJSON_IsArray(a_fki_usergroup_id_all)) {
        goto end;//primitive container
    }
    a_fki_usergroup_id_allList = list_createList();

    cJSON_ArrayForEach(a_fki_usergroup_id_all_local, a_fki_usergroup_id_all)
    {
        if(!cJSON_IsNumber(a_fki_usergroup_id_all_local))
        {
            goto end;
        }
        double *a_fki_usergroup_id_all_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_usergroup_id_all_local_value)
        {
            goto end;
        }
        *a_fki_usergroup_id_all_local_value = a_fki_usergroup_id_all_local->valuedouble;
        list_addElement(a_fki_usergroup_id_allList , a_fki_usergroup_id_all_local_value);
    }
    }

    // ezsignfoldertype_request_v2->a_fki_usergroup_id_restricted
    cJSON *a_fki_usergroup_id_restricted = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "a_fkiUsergroupIDRestricted");
    if (a_fki_usergroup_id_restricted) { 
    cJSON *a_fki_usergroup_id_restricted_local = NULL;
    if(!cJSON_IsArray(a_fki_usergroup_id_restricted)) {
        goto end;//primitive container
    }
    a_fki_usergroup_id_restrictedList = list_createList();

    cJSON_ArrayForEach(a_fki_usergroup_id_restricted_local, a_fki_usergroup_id_restricted)
    {
        if(!cJSON_IsNumber(a_fki_usergroup_id_restricted_local))
        {
            goto end;
        }
        double *a_fki_usergroup_id_restricted_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_usergroup_id_restricted_local_value)
        {
            goto end;
        }
        *a_fki_usergroup_id_restricted_local_value = a_fki_usergroup_id_restricted_local->valuedouble;
        list_addElement(a_fki_usergroup_id_restrictedList , a_fki_usergroup_id_restricted_local_value);
    }
    }

    // ezsignfoldertype_request_v2->a_fki_usergroup_id_template
    cJSON *a_fki_usergroup_id_template = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "a_fkiUsergroupIDTemplate");
    if (a_fki_usergroup_id_template) { 
    cJSON *a_fki_usergroup_id_template_local = NULL;
    if(!cJSON_IsArray(a_fki_usergroup_id_template)) {
        goto end;//primitive container
    }
    a_fki_usergroup_id_templateList = list_createList();

    cJSON_ArrayForEach(a_fki_usergroup_id_template_local, a_fki_usergroup_id_template)
    {
        if(!cJSON_IsNumber(a_fki_usergroup_id_template_local))
        {
            goto end;
        }
        double *a_fki_usergroup_id_template_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_usergroup_id_template_local_value)
        {
            goto end;
        }
        *a_fki_usergroup_id_template_local_value = a_fki_usergroup_id_template_local->valuedouble;
        list_addElement(a_fki_usergroup_id_templateList , a_fki_usergroup_id_template_local_value);
    }
    }

    // ezsignfoldertype_request_v2->s_email_address_signed
    cJSON *s_email_address_signed = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "sEmailAddressSigned");
    if (s_email_address_signed) { 
    if(!cJSON_IsString(s_email_address_signed) && !cJSON_IsNull(s_email_address_signed))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_request_v2->s_email_address_summary
    cJSON *s_email_address_summary = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "sEmailAddressSummary");
    if (s_email_address_summary) { 
    if(!cJSON_IsString(s_email_address_summary) && !cJSON_IsNull(s_email_address_summary))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_request_v2->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfoldertype_request_v2->e_ezsignfoldertype_sendreminderfrequency
    cJSON *e_ezsignfoldertype_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "eEzsignfoldertypeSendreminderfrequency");
    if (e_ezsignfoldertype_sendreminderfrequency) { 
    e_ezsignfoldertype_sendreminderfrequency_local_nonprim = field_e_ezsignfoldertype_sendreminderfrequency_parseFromJSON(e_ezsignfoldertype_sendreminderfrequency); //custom
    }

    // ezsignfoldertype_request_v2->i_ezsignfoldertype_archivaldays
    cJSON *i_ezsignfoldertype_archivaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "iEzsignfoldertypeArchivaldays");
    if (!i_ezsignfoldertype_archivaldays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_archivaldays))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_request_v2->e_ezsignfoldertype_disposal
    cJSON *e_ezsignfoldertype_disposal = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "eEzsignfoldertypeDisposal");
    if (!e_ezsignfoldertype_disposal) {
        goto end;
    }

    
    e_ezsignfoldertype_disposal_local_nonprim = field_e_ezsignfoldertype_disposal_parseFromJSON(e_ezsignfoldertype_disposal); //custom

    // ezsignfoldertype_request_v2->e_ezsignfoldertype_completion
    cJSON *e_ezsignfoldertype_completion = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "eEzsignfoldertypeCompletion");
    if (!e_ezsignfoldertype_completion) {
        goto end;
    }

    
    e_ezsignfoldertype_completion_local_nonprim = field_e_ezsignfoldertype_completion_parseFromJSON(e_ezsignfoldertype_completion); //custom

    // ezsignfoldertype_request_v2->i_ezsignfoldertype_disposaldays
    cJSON *i_ezsignfoldertype_disposaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "iEzsignfoldertypeDisposaldays");
    if (i_ezsignfoldertype_disposaldays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_disposaldays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_v2->i_ezsignfoldertype_deadlinedays
    cJSON *i_ezsignfoldertype_deadlinedays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "iEzsignfoldertypeDeadlinedays");
    if (!i_ezsignfoldertype_deadlinedays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_deadlinedays))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_delegate
    cJSON *b_ezsignfoldertype_delegate = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeDelegate");
    if (b_ezsignfoldertype_delegate) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_delegate))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_discussion
    cJSON *b_ezsignfoldertype_discussion = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeDiscussion");
    if (b_ezsignfoldertype_discussion) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_discussion))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_reassignezsignsigner
    cJSON *b_ezsignfoldertype_reassignezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeReassignezsignsigner");
    if (b_ezsignfoldertype_reassignezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_reassignuser
    cJSON *b_ezsignfoldertype_reassignuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeReassignuser");
    if (b_ezsignfoldertype_reassignuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignuser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtoezsignsigner
    cJSON *b_ezsignfoldertype_sendsignedtoezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsignedtoezsignsigner");
    if (b_ezsignfoldertype_sendsignedtoezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtoezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtouser
    cJSON *b_ezsignfoldertype_sendsignedtouser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsignedtouser");
    if (b_ezsignfoldertype_sendsignedtouser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtouser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendattachmentezsignsigner
    cJSON *b_ezsignfoldertype_sendattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendattachmentezsignsigner");
    if (b_ezsignfoldertype_sendattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattachmentezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofezsignsigner
    cJSON *b_ezsignfoldertype_sendproofezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendproofezsignsigner");
    if (b_ezsignfoldertype_sendproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendattachmentuser
    cJSON *b_ezsignfoldertype_sendattachmentuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendattachmentuser");
    if (b_ezsignfoldertype_sendattachmentuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattachmentuser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofuser
    cJSON *b_ezsignfoldertype_sendproofuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendproofuser");
    if (b_ezsignfoldertype_sendproofuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofuser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofemail
    cJSON *b_ezsignfoldertype_sendproofemail = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendproofemail");
    if (b_ezsignfoldertype_sendproofemail) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofemail))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner");
    if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadattachmentezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_allowdownloadproofezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadproofezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeAllowdownloadproofezsignsigner");
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadproofezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendproofreceivealldocument
    cJSON *b_ezsignfoldertype_sendproofreceivealldocument = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendproofreceivealldocument");
    if (b_ezsignfoldertype_sendproofreceivealldocument) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofreceivealldocument))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtodocumentowner
    cJSON *b_ezsignfoldertype_sendsignedtodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsignedtodocumentowner");
    if (!b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtodocumentowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtofolderowner
    cJSON *b_ezsignfoldertype_sendsignedtofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsignedtofolderowner");
    if (!b_ezsignfoldertype_sendsignedtofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofolderowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtofullgroup
    cJSON *b_ezsignfoldertype_sendsignedtofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsignedtofullgroup");
    if (b_ezsignfoldertype_sendsignedtofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtolimitedgroup
    cJSON *b_ezsignfoldertype_sendsignedtolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsignedtolimitedgroup");
    if (b_ezsignfoldertype_sendsignedtolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsignedtocolleague
    cJSON *b_ezsignfoldertype_sendsignedtocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsignedtocolleague");
    if (!b_ezsignfoldertype_sendsignedtocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtocolleague))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytodocumentowner
    cJSON *b_ezsignfoldertype_sendsummarytodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsummarytodocumentowner");
    if (!b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytodocumentowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytofolderowner
    cJSON *b_ezsignfoldertype_sendsummarytofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsummarytofolderowner");
    if (!b_ezsignfoldertype_sendsummarytofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofolderowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytofullgroup
    cJSON *b_ezsignfoldertype_sendsummarytofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsummarytofullgroup");
    if (b_ezsignfoldertype_sendsummarytofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytolimitedgroup
    cJSON *b_ezsignfoldertype_sendsummarytolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsummarytolimitedgroup");
    if (b_ezsignfoldertype_sendsummarytolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_sendsummarytocolleague
    cJSON *b_ezsignfoldertype_sendsummarytocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeSendsummarytocolleague");
    if (!b_ezsignfoldertype_sendsummarytocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytocolleague))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_request_v2->b_ezsignfoldertype_isactive
    cJSON *b_ezsignfoldertype_isactive = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v2JSON, "bEzsignfoldertypeIsactive");
    if (!b_ezsignfoldertype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_isactive))
    {
    goto end; //Bool
    }


    ezsignfoldertype_request_v2_local_var = ezsignfoldertype_request_v2_create (
        pki_ezsignfoldertype_id ? pki_ezsignfoldertype_id->valuedouble : 0,
        obj_ezsignfoldertype_name_local_nonprim,
        fki_branding_id->valuedouble,
        fki_billingentityinternal_id ? fki_billingentityinternal_id->valuedouble : 0,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        a_fki_userlogintype_idList,
        a_fki_usergroup_id_all ? a_fki_usergroup_id_allList : NULL,
        a_fki_usergroup_id_restricted ? a_fki_usergroup_id_restrictedList : NULL,
        a_fki_usergroup_id_template ? a_fki_usergroup_id_templateList : NULL,
        s_email_address_signed && !cJSON_IsNull(s_email_address_signed) ? strdup(s_email_address_signed->valuestring) : NULL,
        s_email_address_summary && !cJSON_IsNull(s_email_address_summary) ? strdup(s_email_address_summary->valuestring) : NULL,
        e_ezsignfoldertype_privacylevel_local_nonprim,
        e_ezsignfoldertype_sendreminderfrequency ? e_ezsignfoldertype_sendreminderfrequency_local_nonprim : NULL,
        i_ezsignfoldertype_archivaldays->valuedouble,
        e_ezsignfoldertype_disposal_local_nonprim,
        e_ezsignfoldertype_completion_local_nonprim,
        i_ezsignfoldertype_disposaldays ? i_ezsignfoldertype_disposaldays->valuedouble : 0,
        i_ezsignfoldertype_deadlinedays->valuedouble,
        b_ezsignfoldertype_delegate ? b_ezsignfoldertype_delegate->valueint : 0,
        b_ezsignfoldertype_discussion ? b_ezsignfoldertype_discussion->valueint : 0,
        b_ezsignfoldertype_reassignezsignsigner ? b_ezsignfoldertype_reassignezsignsigner->valueint : 0,
        b_ezsignfoldertype_reassignuser ? b_ezsignfoldertype_reassignuser->valueint : 0,
        b_ezsignfoldertype_sendsignedtoezsignsigner ? b_ezsignfoldertype_sendsignedtoezsignsigner->valueint : 0,
        b_ezsignfoldertype_sendsignedtouser ? b_ezsignfoldertype_sendsignedtouser->valueint : 0,
        b_ezsignfoldertype_sendattachmentezsignsigner ? b_ezsignfoldertype_sendattachmentezsignsigner->valueint : 0,
        b_ezsignfoldertype_sendproofezsignsigner ? b_ezsignfoldertype_sendproofezsignsigner->valueint : 0,
        b_ezsignfoldertype_sendattachmentuser ? b_ezsignfoldertype_sendattachmentuser->valueint : 0,
        b_ezsignfoldertype_sendproofuser ? b_ezsignfoldertype_sendproofuser->valueint : 0,
        b_ezsignfoldertype_sendproofemail ? b_ezsignfoldertype_sendproofemail->valueint : 0,
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner ? b_ezsignfoldertype_allowdownloadattachmentezsignsigner->valueint : 0,
        b_ezsignfoldertype_allowdownloadproofezsignsigner ? b_ezsignfoldertype_allowdownloadproofezsignsigner->valueint : 0,
        b_ezsignfoldertype_sendproofreceivealldocument ? b_ezsignfoldertype_sendproofreceivealldocument->valueint : 0,
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
        b_ezsignfoldertype_isactive->valueint
        );

    return ezsignfoldertype_request_v2_local_var;
end:
    if (obj_ezsignfoldertype_name_local_nonprim) {
        multilingual_ezsignfoldertype_name_free(obj_ezsignfoldertype_name_local_nonprim);
        obj_ezsignfoldertype_name_local_nonprim = NULL;
    }
    if (a_fki_userlogintype_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_userlogintype_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_userlogintype_idList);
        a_fki_userlogintype_idList = NULL;
    }
    if (a_fki_usergroup_id_allList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_usergroup_id_allList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_usergroup_id_allList);
        a_fki_usergroup_id_allList = NULL;
    }
    if (a_fki_usergroup_id_restrictedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_usergroup_id_restrictedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_usergroup_id_restrictedList);
        a_fki_usergroup_id_restrictedList = NULL;
    }
    if (a_fki_usergroup_id_templateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_usergroup_id_templateList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_usergroup_id_templateList);
        a_fki_usergroup_id_templateList = NULL;
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
    if (e_ezsignfoldertype_completion_local_nonprim) {
        field_e_ezsignfoldertype_completion_free(e_ezsignfoldertype_completion_local_nonprim);
        e_ezsignfoldertype_completion_local_nonprim = NULL;
    }
    return NULL;

}
