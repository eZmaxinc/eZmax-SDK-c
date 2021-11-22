cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "ezmax_api_definition")
set(VERSION 0.0.1) # this default version can be overridden in PreTarget.cmake

find_package(CURL 7.58.0 REQUIRED)
if(CURL_FOUND)
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else(CURL_FOUND)
    message(FATAL_ERROR "Could not find the CURL library and development files.")
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/activesession_get_current_v1_response.c
    model/activesession_get_current_v1_response_all_of.c
    model/activesession_get_current_v1_response_m_payload.c
    model/address_request.c
    model/apikey_create_object_v1_request.c
    model/apikey_create_object_v1_response.c
    model/apikey_create_object_v1_response_all_of.c
    model/apikey_create_object_v1_response_m_payload.c
    model/apikey_request.c
    model/apikey_request_compound.c
    model/apikey_response.c
    model/attempt_response.c
    model/authenticate_authenticate_v2_request.c
    model/authenticate_authenticate_v2_response.c
    model/authenticate_authenticate_v2_response_all_of.c
    model/authenticate_authenticate_v2_response_m_payload.c
    model/common_audit.c
    model/common_get_autocomplete_v1_response.c
    model/common_get_autocomplete_v1_response_all_of.c
    model/common_get_list_v1_response_m_payload.c
    model/common_response.c
    model/common_response_error.c
    model/common_response_error_s_temporary_file_url.c
    model/common_response_error_s_temporary_file_url_all_of.c
    model/common_response_filter.c
    model/common_response_get_list.c
    model/common_response_obj_debug.c
    model/common_response_obj_debug_payload.c
    model/common_response_obj_debug_payload_get_list.c
    model/common_response_obj_debug_payload_get_list_all_of.c
    model/common_response_obj_sql_query.c
    model/common_webhook.c
    model/contact_request.c
    model/contact_request_compound.c
    model/contact_request_compound_all_of.c
    model/contactinformations_request.c
    model/contactinformations_request_compound.c
    model/contactinformations_request_compound_all_of.c
    model/custom_autocomplete_element_response.c
    model/custom_form_data_document_response.c
    model/custom_form_data_signer_response.c
    model/custom_forms_data_folder_response.c
    model/custom_word_position_occurence_response.c
    model/custom_word_position_word_response.c
    model/email_request.c
    model/ezsignbulksend_get_list_v1_response.c
    model/ezsignbulksend_get_list_v1_response_all_of.c
    model/ezsignbulksend_get_list_v1_response_m_payload.c
    model/ezsignbulksend_get_list_v1_response_m_payload_all_of.c
    model/ezsignbulksend_list_element.c
    model/ezsigndocument_apply_ezsigntemplate_v1_request.c
    model/ezsigndocument_apply_ezsigntemplate_v1_response.c
    model/ezsigndocument_apply_ezsigntemplate_v2_request.c
    model/ezsigndocument_apply_ezsigntemplate_v2_response.c
    model/ezsigndocument_create_object_v1_request.c
    model/ezsigndocument_create_object_v1_response.c
    model/ezsigndocument_create_object_v1_response_all_of.c
    model/ezsigndocument_create_object_v1_response_m_payload.c
    model/ezsigndocument_delete_object_v1_response.c
    model/ezsigndocument_get_download_url_v1_response.c
    model/ezsigndocument_get_download_url_v1_response_all_of.c
    model/ezsigndocument_get_download_url_v1_response_m_payload.c
    model/ezsigndocument_get_ezsignpages_v1_response.c
    model/ezsigndocument_get_ezsignpages_v1_response_all_of.c
    model/ezsigndocument_get_ezsignpages_v1_response_m_payload.c
    model/ezsigndocument_get_form_data_v1_response.c
    model/ezsigndocument_get_form_data_v1_response_all_of.c
    model/ezsigndocument_get_form_data_v1_response_m_payload.c
    model/ezsigndocument_get_object_v1_response.c
    model/ezsigndocument_get_object_v1_response_all_of.c
    model/ezsigndocument_get_object_v1_response_m_payload.c
    model/ezsigndocument_get_words_positions_v1_request.c
    model/ezsigndocument_get_words_positions_v1_response.c
    model/ezsigndocument_get_words_positions_v1_response_all_of.c
    model/ezsigndocument_request.c
    model/ezsigndocument_request_compound.c
    model/ezsigndocument_response.c
    model/ezsigndocument_response_compound.c
    model/ezsignfolder_create_object_v1_request.c
    model/ezsignfolder_create_object_v1_response.c
    model/ezsignfolder_create_object_v1_response_all_of.c
    model/ezsignfolder_create_object_v1_response_m_payload.c
    model/ezsignfolder_delete_object_v1_response.c
    model/ezsignfolder_get_forms_data_v1_response.c
    model/ezsignfolder_get_forms_data_v1_response_all_of.c
    model/ezsignfolder_get_forms_data_v1_response_m_payload.c
    model/ezsignfolder_get_list_v1_response.c
    model/ezsignfolder_get_list_v1_response_all_of.c
    model/ezsignfolder_get_list_v1_response_m_payload.c
    model/ezsignfolder_get_list_v1_response_m_payload_all_of.c
    model/ezsignfolder_get_object_v1_response.c
    model/ezsignfolder_get_object_v1_response_all_of.c
    model/ezsignfolder_get_object_v1_response_m_payload.c
    model/ezsignfolder_list_element.c
    model/ezsignfolder_request.c
    model/ezsignfolder_request_compound.c
    model/ezsignfolder_request_compound_all_of.c
    model/ezsignfolder_response.c
    model/ezsignfolder_response_compound.c
    model/ezsignfolder_send_v1_request.c
    model/ezsignfolder_send_v1_response.c
    model/ezsignfolder_unsend_v1_response.c
    model/ezsignfoldersignerassociation_create_object_v1_request.c
    model/ezsignfoldersignerassociation_create_object_v1_response.c
    model/ezsignfoldersignerassociation_create_object_v1_response_all_of.c
    model/ezsignfoldersignerassociation_create_object_v1_response_m_payload.c
    model/ezsignfoldersignerassociation_delete_object_v1_response.c
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response.c
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response_all_of.c
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload.c
    model/ezsignfoldersignerassociation_get_object_v1_response.c
    model/ezsignfoldersignerassociation_get_object_v1_response_all_of.c
    model/ezsignfoldersignerassociation_request.c
    model/ezsignfoldersignerassociation_request_compound.c
    model/ezsignfoldersignerassociation_request_compound_all_of.c
    model/ezsignfoldertype_get_list_v1_response.c
    model/ezsignfoldertype_get_list_v1_response_all_of.c
    model/ezsignfoldertype_get_list_v1_response_m_payload.c
    model/ezsignfoldertype_get_list_v1_response_m_payload_all_of.c
    model/ezsignfoldertype_list_element.c
    model/ezsignformfield_response.c
    model/ezsignformfield_response_compound.c
    model/ezsignformfieldgroup_response.c
    model/ezsignformfieldgroup_response_compound.c
    model/ezsignformfieldgroup_response_compound_all_of.c
    model/ezsignpage_response.c
    model/ezsignsignature_create_object_v1_request.c
    model/ezsignsignature_create_object_v1_response.c
    model/ezsignsignature_create_object_v1_response_all_of.c
    model/ezsignsignature_create_object_v1_response_m_payload.c
    model/ezsignsignature_delete_object_v1_response.c
    model/ezsignsignature_get_object_v1_response.c
    model/ezsignsignature_get_object_v1_response_all_of.c
    model/ezsignsignature_request.c
    model/ezsignsignature_request_compound.c
    model/ezsignsigner_request.c
    model/ezsignsigner_request_compound.c
    model/ezsignsigner_request_compound_all_of.c
    model/ezsignsigner_request_compound_contact.c
    model/field_e_ezsigndocument_step.c
    model/field_e_ezsignfolder_sendreminderfrequency.c
    model/field_e_ezsignfolder_step.c
    model/field_e_ezsignfoldertype_privacylevel.c
    model/field_e_ezsignsignature_type.c
    model/field_e_phone_type.c
    model/field_e_user_type.c
    model/field_e_user_type_sspr.c
    model/franchisereferalincome_create_object_v1_request.c
    model/franchisereferalincome_create_object_v1_response.c
    model/franchisereferalincome_create_object_v1_response_all_of.c
    model/franchisereferalincome_create_object_v1_response_m_payload.c
    model/franchisereferalincome_request.c
    model/franchisereferalincome_request_compound.c
    model/franchisereferalincome_request_compound_all_of.c
    model/global_customer_get_endpoint_v1_response.c
    model/header_accept_language.c
    model/list_get_listpresentation_v1_response.c
    model/list_get_listpresentation_v1_response_all_of.c
    model/list_get_listpresentation_v1_response_m_payload.c
    model/list_save_listpresentation_v1_request.c
    model/list_save_listpresentation_v1_response.c
    model/listpresentation_request.c
    model/multilingual_apikey_description.c
    model/phone_request.c
    model/sspr_reset_password_request_v1_request.c
    model/sspr_reset_password_v1_request.c
    model/sspr_send_usernames_v1_request.c
    model/sspr_unlock_account_request_v1_request.c
    model/sspr_unlock_account_v1_request.c
    model/sspr_validate_token_v1_request.c
    model/unused_ezsigndocument_edit_object_v1_request.c
    model/unused_ezsigndocument_edit_object_v1_response.c
    model/unused_ezsignfolder_edit_object_v1_request.c
    model/unused_ezsignfolder_edit_object_v1_response.c
    model/unused_ezsignfoldersignerassociation_edit_object_v1_request.c
    model/unused_ezsignfoldersignerassociation_edit_object_v1_response.c
    model/unused_ezsignsignature_edit_object_v1_request.c
    model/unused_ezsignsignature_edit_object_v1_response.c
    model/user_create_ezsignuser_v1_request.c
    model/user_create_ezsignuser_v1_response.c
    model/user_create_ezsignuser_v1_response_all_of.c
    model/user_create_ezsignuser_v1_response_m_payload.c
    model/user_response.c
    model/webhook_ezsign_document_completed.c
    model/webhook_ezsign_document_completed_all_of.c
    model/webhook_ezsign_folder_completed.c
    model/webhook_ezsign_folder_completed_all_of.c
    model/webhook_response.c
    model/webhook_user_user_created.c
    model/webhook_user_user_created_all_of.c
    model/website_request.c
    api/GlobalCustomerAPI.c
    api/ModuleAuthenticateAPI.c
    api/ModuleListAPI.c
    api/ModuleSsprAPI.c
    api/ModuleUserAPI.c
    api/ObjectActivesessionAPI.c
    api/ObjectApikeyAPI.c
    api/ObjectEzsignbulksendAPI.c
    api/ObjectEzsigndocumentAPI.c
    api/ObjectEzsignfolderAPI.c
    api/ObjectEzsignfoldersignerassociationAPI.c
    api/ObjectEzsignfoldertypeAPI.c
    api/ObjectEzsignsignatureAPI.c
    api/ObjectFranchisebrokerAPI.c
    api/ObjectFranchiseofficeAPI.c
    api/ObjectFranchisereferalincomeAPI.c
    api/ObjectPeriodAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/activesession_get_current_v1_response.h
    model/activesession_get_current_v1_response_all_of.h
    model/activesession_get_current_v1_response_m_payload.h
    model/address_request.h
    model/apikey_create_object_v1_request.h
    model/apikey_create_object_v1_response.h
    model/apikey_create_object_v1_response_all_of.h
    model/apikey_create_object_v1_response_m_payload.h
    model/apikey_request.h
    model/apikey_request_compound.h
    model/apikey_response.h
    model/attempt_response.h
    model/authenticate_authenticate_v2_request.h
    model/authenticate_authenticate_v2_response.h
    model/authenticate_authenticate_v2_response_all_of.h
    model/authenticate_authenticate_v2_response_m_payload.h
    model/common_audit.h
    model/common_get_autocomplete_v1_response.h
    model/common_get_autocomplete_v1_response_all_of.h
    model/common_get_list_v1_response_m_payload.h
    model/common_response.h
    model/common_response_error.h
    model/common_response_error_s_temporary_file_url.h
    model/common_response_error_s_temporary_file_url_all_of.h
    model/common_response_filter.h
    model/common_response_get_list.h
    model/common_response_obj_debug.h
    model/common_response_obj_debug_payload.h
    model/common_response_obj_debug_payload_get_list.h
    model/common_response_obj_debug_payload_get_list_all_of.h
    model/common_response_obj_sql_query.h
    model/common_webhook.h
    model/contact_request.h
    model/contact_request_compound.h
    model/contact_request_compound_all_of.h
    model/contactinformations_request.h
    model/contactinformations_request_compound.h
    model/contactinformations_request_compound_all_of.h
    model/custom_autocomplete_element_response.h
    model/custom_form_data_document_response.h
    model/custom_form_data_signer_response.h
    model/custom_forms_data_folder_response.h
    model/custom_word_position_occurence_response.h
    model/custom_word_position_word_response.h
    model/email_request.h
    model/ezsignbulksend_get_list_v1_response.h
    model/ezsignbulksend_get_list_v1_response_all_of.h
    model/ezsignbulksend_get_list_v1_response_m_payload.h
    model/ezsignbulksend_get_list_v1_response_m_payload_all_of.h
    model/ezsignbulksend_list_element.h
    model/ezsigndocument_apply_ezsigntemplate_v1_request.h
    model/ezsigndocument_apply_ezsigntemplate_v1_response.h
    model/ezsigndocument_apply_ezsigntemplate_v2_request.h
    model/ezsigndocument_apply_ezsigntemplate_v2_response.h
    model/ezsigndocument_create_object_v1_request.h
    model/ezsigndocument_create_object_v1_response.h
    model/ezsigndocument_create_object_v1_response_all_of.h
    model/ezsigndocument_create_object_v1_response_m_payload.h
    model/ezsigndocument_delete_object_v1_response.h
    model/ezsigndocument_get_download_url_v1_response.h
    model/ezsigndocument_get_download_url_v1_response_all_of.h
    model/ezsigndocument_get_download_url_v1_response_m_payload.h
    model/ezsigndocument_get_ezsignpages_v1_response.h
    model/ezsigndocument_get_ezsignpages_v1_response_all_of.h
    model/ezsigndocument_get_ezsignpages_v1_response_m_payload.h
    model/ezsigndocument_get_form_data_v1_response.h
    model/ezsigndocument_get_form_data_v1_response_all_of.h
    model/ezsigndocument_get_form_data_v1_response_m_payload.h
    model/ezsigndocument_get_object_v1_response.h
    model/ezsigndocument_get_object_v1_response_all_of.h
    model/ezsigndocument_get_object_v1_response_m_payload.h
    model/ezsigndocument_get_words_positions_v1_request.h
    model/ezsigndocument_get_words_positions_v1_response.h
    model/ezsigndocument_get_words_positions_v1_response_all_of.h
    model/ezsigndocument_request.h
    model/ezsigndocument_request_compound.h
    model/ezsigndocument_response.h
    model/ezsigndocument_response_compound.h
    model/ezsignfolder_create_object_v1_request.h
    model/ezsignfolder_create_object_v1_response.h
    model/ezsignfolder_create_object_v1_response_all_of.h
    model/ezsignfolder_create_object_v1_response_m_payload.h
    model/ezsignfolder_delete_object_v1_response.h
    model/ezsignfolder_get_forms_data_v1_response.h
    model/ezsignfolder_get_forms_data_v1_response_all_of.h
    model/ezsignfolder_get_forms_data_v1_response_m_payload.h
    model/ezsignfolder_get_list_v1_response.h
    model/ezsignfolder_get_list_v1_response_all_of.h
    model/ezsignfolder_get_list_v1_response_m_payload.h
    model/ezsignfolder_get_list_v1_response_m_payload_all_of.h
    model/ezsignfolder_get_object_v1_response.h
    model/ezsignfolder_get_object_v1_response_all_of.h
    model/ezsignfolder_get_object_v1_response_m_payload.h
    model/ezsignfolder_list_element.h
    model/ezsignfolder_request.h
    model/ezsignfolder_request_compound.h
    model/ezsignfolder_request_compound_all_of.h
    model/ezsignfolder_response.h
    model/ezsignfolder_response_compound.h
    model/ezsignfolder_send_v1_request.h
    model/ezsignfolder_send_v1_response.h
    model/ezsignfolder_unsend_v1_response.h
    model/ezsignfoldersignerassociation_create_object_v1_request.h
    model/ezsignfoldersignerassociation_create_object_v1_response.h
    model/ezsignfoldersignerassociation_create_object_v1_response_all_of.h
    model/ezsignfoldersignerassociation_create_object_v1_response_m_payload.h
    model/ezsignfoldersignerassociation_delete_object_v1_response.h
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response.h
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response_all_of.h
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload.h
    model/ezsignfoldersignerassociation_get_object_v1_response.h
    model/ezsignfoldersignerassociation_get_object_v1_response_all_of.h
    model/ezsignfoldersignerassociation_request.h
    model/ezsignfoldersignerassociation_request_compound.h
    model/ezsignfoldersignerassociation_request_compound_all_of.h
    model/ezsignfoldertype_get_list_v1_response.h
    model/ezsignfoldertype_get_list_v1_response_all_of.h
    model/ezsignfoldertype_get_list_v1_response_m_payload.h
    model/ezsignfoldertype_get_list_v1_response_m_payload_all_of.h
    model/ezsignfoldertype_list_element.h
    model/ezsignformfield_response.h
    model/ezsignformfield_response_compound.h
    model/ezsignformfieldgroup_response.h
    model/ezsignformfieldgroup_response_compound.h
    model/ezsignformfieldgroup_response_compound_all_of.h
    model/ezsignpage_response.h
    model/ezsignsignature_create_object_v1_request.h
    model/ezsignsignature_create_object_v1_response.h
    model/ezsignsignature_create_object_v1_response_all_of.h
    model/ezsignsignature_create_object_v1_response_m_payload.h
    model/ezsignsignature_delete_object_v1_response.h
    model/ezsignsignature_get_object_v1_response.h
    model/ezsignsignature_get_object_v1_response_all_of.h
    model/ezsignsignature_request.h
    model/ezsignsignature_request_compound.h
    model/ezsignsigner_request.h
    model/ezsignsigner_request_compound.h
    model/ezsignsigner_request_compound_all_of.h
    model/ezsignsigner_request_compound_contact.h
    model/field_e_ezsigndocument_step.h
    model/field_e_ezsignfolder_sendreminderfrequency.h
    model/field_e_ezsignfolder_step.h
    model/field_e_ezsignfoldertype_privacylevel.h
    model/field_e_ezsignsignature_type.h
    model/field_e_phone_type.h
    model/field_e_user_type.h
    model/field_e_user_type_sspr.h
    model/franchisereferalincome_create_object_v1_request.h
    model/franchisereferalincome_create_object_v1_response.h
    model/franchisereferalincome_create_object_v1_response_all_of.h
    model/franchisereferalincome_create_object_v1_response_m_payload.h
    model/franchisereferalincome_request.h
    model/franchisereferalincome_request_compound.h
    model/franchisereferalincome_request_compound_all_of.h
    model/global_customer_get_endpoint_v1_response.h
    model/header_accept_language.h
    model/list_get_listpresentation_v1_response.h
    model/list_get_listpresentation_v1_response_all_of.h
    model/list_get_listpresentation_v1_response_m_payload.h
    model/list_save_listpresentation_v1_request.h
    model/list_save_listpresentation_v1_response.h
    model/listpresentation_request.h
    model/multilingual_apikey_description.h
    model/phone_request.h
    model/sspr_reset_password_request_v1_request.h
    model/sspr_reset_password_v1_request.h
    model/sspr_send_usernames_v1_request.h
    model/sspr_unlock_account_request_v1_request.h
    model/sspr_unlock_account_v1_request.h
    model/sspr_validate_token_v1_request.h
    model/unused_ezsigndocument_edit_object_v1_request.h
    model/unused_ezsigndocument_edit_object_v1_response.h
    model/unused_ezsignfolder_edit_object_v1_request.h
    model/unused_ezsignfolder_edit_object_v1_response.h
    model/unused_ezsignfoldersignerassociation_edit_object_v1_request.h
    model/unused_ezsignfoldersignerassociation_edit_object_v1_response.h
    model/unused_ezsignsignature_edit_object_v1_request.h
    model/unused_ezsignsignature_edit_object_v1_response.h
    model/user_create_ezsignuser_v1_request.h
    model/user_create_ezsignuser_v1_response.h
    model/user_create_ezsignuser_v1_response_all_of.h
    model/user_create_ezsignuser_v1_response_m_payload.h
    model/user_response.h
    model/webhook_ezsign_document_completed.h
    model/webhook_ezsign_document_completed_all_of.h
    model/webhook_ezsign_folder_completed.h
    model/webhook_ezsign_folder_completed_all_of.h
    model/webhook_response.h
    model/webhook_user_user_created.h
    model/webhook_user_user_created_all_of.h
    model/website_request.h
    api/GlobalCustomerAPI.h
    api/ModuleAuthenticateAPI.h
    api/ModuleListAPI.h
    api/ModuleSsprAPI.h
    api/ModuleUserAPI.h
    api/ObjectActivesessionAPI.h
    api/ObjectApikeyAPI.h
    api/ObjectEzsignbulksendAPI.h
    api/ObjectEzsigndocumentAPI.h
    api/ObjectEzsignfolderAPI.h
    api/ObjectEzsignfoldersignerassociationAPI.h
    api/ObjectEzsignfoldertypeAPI.h
    api/ObjectEzsignsignatureAPI.h
    api/ObjectFranchisebrokerAPI.h
    api/ObjectFranchiseofficeAPI.h
    api/ObjectFranchisereferalincomeAPI.h
    api/ObjectPeriodAPI.h

)

include(PreTarget.cmake OPTIONAL)

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX})
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX} EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${VERSION}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-GlobalCustomerAPI.c
#    unit-tests/manual-ModuleAuthenticateAPI.c
#    unit-tests/manual-ModuleListAPI.c
#    unit-tests/manual-ModuleSsprAPI.c
#    unit-tests/manual-ModuleUserAPI.c
#    unit-tests/manual-ObjectActivesessionAPI.c
#    unit-tests/manual-ObjectApikeyAPI.c
#    unit-tests/manual-ObjectEzsignbulksendAPI.c
#    unit-tests/manual-ObjectEzsigndocumentAPI.c
#    unit-tests/manual-ObjectEzsignfolderAPI.c
#    unit-tests/manual-ObjectEzsignfoldersignerassociationAPI.c
#    unit-tests/manual-ObjectEzsignfoldertypeAPI.c
#    unit-tests/manual-ObjectEzsignsignatureAPI.c
#    unit-tests/manual-ObjectFranchisebrokerAPI.c
#    unit-tests/manual-ObjectFranchiseofficeAPI.c
#    unit-tests/manual-ObjectFranchisereferalincomeAPI.c
#    unit-tests/manual-ObjectPeriodAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
