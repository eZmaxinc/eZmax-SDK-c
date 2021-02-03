cmake_minimum_required (VERSION 2.6)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_BUILD_TYPE Debug)

find_package(OpenSSL)

if (OPENSSL_FOUND)
	message (STATUS "OPENSSL found")
	set (CMAKE_C_FLAGS "-DOPENSSL")
	include_directories(${OPENSSL_INCLUDE_DIR})
	include_directories(${OPENSSL_INCLUDE_DIRS})
	link_directories(${OPENSSL_LIBRARIES})
	message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else() 
	message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "ezmax_api_definition")

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
    model/activesession_get_current_v1_response_m_payload.c
    model/address_request.c
    model/apikey_create_object_v1_request.c
    model/apikey_create_object_v1_response.c
    model/apikey_create_object_v1_response_m_payload.c
    model/apikey_request.c
    model/apikey_request_compound.c
    model/apikey_response.c
    model/attempt_response.c
    model/common_audit.c
    model/common_get_autocomplete_v1_response.c
    model/common_get_autocomplete_v1_response_m_payload.c
    model/common_response.c
    model/common_response_error.c
    model/common_response_obj_debug.c
    model/common_response_obj_debug_payload.c
    model/common_response_obj_sql_query.c
    model/common_webhook.c
    model/contact_request.c
    model/contact_request_compound.c
    model/contact_request_compound_all_of.c
    model/contactinformations_request.c
    model/contactinformations_request_compound.c
    model/email_request.c
    model/ezsigndocument_apply_ezsigntemplate_v1_request.c
    model/ezsigndocument_apply_ezsigntemplate_v1_response.c
    model/ezsigndocument_create_object_v1_request.c
    model/ezsigndocument_create_object_v1_response.c
    model/ezsigndocument_create_object_v1_response_m_payload.c
    model/ezsigndocument_delete_object_v1_response.c
    model/ezsigndocument_edit_object_v1_request.c
    model/ezsigndocument_edit_object_v1_response.c
    model/ezsigndocument_get_download_url_v1_response.c
    model/ezsigndocument_get_download_url_v1_response_m_payload.c
    model/ezsigndocument_get_object_v1_response.c
    model/ezsigndocument_get_object_v1_response_m_payload.c
    model/ezsigndocument_request.c
    model/ezsigndocument_request_compound.c
    model/ezsigndocument_response.c
    model/ezsigndocument_response_all_of.c
    model/ezsigndocument_response_compound.c
    model/ezsignfolder_create_object_v1_request.c
    model/ezsignfolder_create_object_v1_response.c
    model/ezsignfolder_create_object_v1_response_m_payload.c
    model/ezsignfolder_delete_object_v1_response.c
    model/ezsignfolder_edit_object_v1_request.c
    model/ezsignfolder_edit_object_v1_response.c
    model/ezsignfolder_get_object_v1_response.c
    model/ezsignfolder_get_object_v1_response_m_payload.c
    model/ezsignfolder_request.c
    model/ezsignfolder_request_compound.c
    model/ezsignfolder_response.c
    model/ezsignfolder_response_all_of.c
    model/ezsignfolder_response_compound.c
    model/ezsignfolder_send_v1_request.c
    model/ezsignfolder_send_v1_response.c
    model/ezsignfoldersignerassociation_create_object_v1_request.c
    model/ezsignfoldersignerassociation_create_object_v1_response.c
    model/ezsignfoldersignerassociation_create_object_v1_response_m_payload.c
    model/ezsignfoldersignerassociation_delete_object_v1_response.c
    model/ezsignfoldersignerassociation_edit_object_v1_request.c
    model/ezsignfoldersignerassociation_edit_object_v1_response.c
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response.c
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload.c
    model/ezsignfoldersignerassociation_get_object_v1_response.c
    model/ezsignfoldersignerassociation_request.c
    model/ezsignfoldersignerassociation_request_compound.c
    model/ezsignsignature_create_object_v1_request.c
    model/ezsignsignature_create_object_v1_response.c
    model/ezsignsignature_create_object_v1_response_m_payload.c
    model/ezsignsignature_delete_object_v1_response.c
    model/ezsignsignature_edit_object_v1_request.c
    model/ezsignsignature_edit_object_v1_response.c
    model/ezsignsignature_get_object_v1_response.c
    model/ezsignsignature_request.c
    model/ezsignsignature_request_compound.c
    model/ezsignsigner_request.c
    model/ezsignsigner_request_compound.c
    model/ezsignsigner_request_compound_contact.c
    model/field_e_ezsigndocument_step.c
    model/field_e_ezsignfolder_sendreminderfrequency.c
    model/field_e_ezsignfolder_step.c
    model/field_e_phone_type.c
    model/field_e_user_type.c
    model/franchisereferalincome_create_object_v1_request.c
    model/franchisereferalincome_create_object_v1_response.c
    model/franchisereferalincome_create_object_v1_response_m_payload.c
    model/franchisereferalincome_request.c
    model/franchisereferalincome_request_compound.c
    model/multilingual_apikey_description.c
    model/phone_request.c
    model/user_create_ezsignuser_v1_request.c
    model/user_create_ezsignuser_v1_response.c
    model/user_create_ezsignuser_v1_response_m_payload.c
    model/user_response.c
    model/user_response_all_of.c
    model/webhook_ezsign_document_completed.c
    model/webhook_ezsign_document_completed_all_of.c
    model/webhook_ezsign_folder_completed.c
    model/webhook_ezsign_folder_completed_all_of.c
    model/webhook_response.c
    model/webhook_user_user_created.c
    model/webhook_user_user_created_all_of.c
    model/website_request.c
    api/ModuleUserAPI.c
    api/ObjectActivesessionAPI.c
    api/ObjectApikeyAPI.c
    api/ObjectEzsigndocumentAPI.c
    api/ObjectEzsignfolderAPI.c
    api/ObjectEzsignfoldersignerassociationAPI.c
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
    model/activesession_get_current_v1_response_m_payload.h
    model/address_request.h
    model/apikey_create_object_v1_request.h
    model/apikey_create_object_v1_response.h
    model/apikey_create_object_v1_response_m_payload.h
    model/apikey_request.h
    model/apikey_request_compound.h
    model/apikey_response.h
    model/attempt_response.h
    model/common_audit.h
    model/common_get_autocomplete_v1_response.h
    model/common_get_autocomplete_v1_response_m_payload.h
    model/common_response.h
    model/common_response_error.h
    model/common_response_obj_debug.h
    model/common_response_obj_debug_payload.h
    model/common_response_obj_sql_query.h
    model/common_webhook.h
    model/contact_request.h
    model/contact_request_compound.h
    model/contact_request_compound_all_of.h
    model/contactinformations_request.h
    model/contactinformations_request_compound.h
    model/email_request.h
    model/ezsigndocument_apply_ezsigntemplate_v1_request.h
    model/ezsigndocument_apply_ezsigntemplate_v1_response.h
    model/ezsigndocument_create_object_v1_request.h
    model/ezsigndocument_create_object_v1_response.h
    model/ezsigndocument_create_object_v1_response_m_payload.h
    model/ezsigndocument_delete_object_v1_response.h
    model/ezsigndocument_edit_object_v1_request.h
    model/ezsigndocument_edit_object_v1_response.h
    model/ezsigndocument_get_download_url_v1_response.h
    model/ezsigndocument_get_download_url_v1_response_m_payload.h
    model/ezsigndocument_get_object_v1_response.h
    model/ezsigndocument_get_object_v1_response_m_payload.h
    model/ezsigndocument_request.h
    model/ezsigndocument_request_compound.h
    model/ezsigndocument_response.h
    model/ezsigndocument_response_all_of.h
    model/ezsigndocument_response_compound.h
    model/ezsignfolder_create_object_v1_request.h
    model/ezsignfolder_create_object_v1_response.h
    model/ezsignfolder_create_object_v1_response_m_payload.h
    model/ezsignfolder_delete_object_v1_response.h
    model/ezsignfolder_edit_object_v1_request.h
    model/ezsignfolder_edit_object_v1_response.h
    model/ezsignfolder_get_object_v1_response.h
    model/ezsignfolder_get_object_v1_response_m_payload.h
    model/ezsignfolder_request.h
    model/ezsignfolder_request_compound.h
    model/ezsignfolder_response.h
    model/ezsignfolder_response_all_of.h
    model/ezsignfolder_response_compound.h
    model/ezsignfolder_send_v1_request.h
    model/ezsignfolder_send_v1_response.h
    model/ezsignfoldersignerassociation_create_object_v1_request.h
    model/ezsignfoldersignerassociation_create_object_v1_response.h
    model/ezsignfoldersignerassociation_create_object_v1_response_m_payload.h
    model/ezsignfoldersignerassociation_delete_object_v1_response.h
    model/ezsignfoldersignerassociation_edit_object_v1_request.h
    model/ezsignfoldersignerassociation_edit_object_v1_response.h
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response.h
    model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload.h
    model/ezsignfoldersignerassociation_get_object_v1_response.h
    model/ezsignfoldersignerassociation_request.h
    model/ezsignfoldersignerassociation_request_compound.h
    model/ezsignsignature_create_object_v1_request.h
    model/ezsignsignature_create_object_v1_response.h
    model/ezsignsignature_create_object_v1_response_m_payload.h
    model/ezsignsignature_delete_object_v1_response.h
    model/ezsignsignature_edit_object_v1_request.h
    model/ezsignsignature_edit_object_v1_response.h
    model/ezsignsignature_get_object_v1_response.h
    model/ezsignsignature_request.h
    model/ezsignsignature_request_compound.h
    model/ezsignsigner_request.h
    model/ezsignsigner_request_compound.h
    model/ezsignsigner_request_compound_contact.h
    model/field_e_ezsigndocument_step.h
    model/field_e_ezsignfolder_sendreminderfrequency.h
    model/field_e_ezsignfolder_step.h
    model/field_e_phone_type.h
    model/field_e_user_type.h
    model/franchisereferalincome_create_object_v1_request.h
    model/franchisereferalincome_create_object_v1_response.h
    model/franchisereferalincome_create_object_v1_response_m_payload.h
    model/franchisereferalincome_request.h
    model/franchisereferalincome_request_compound.h
    model/multilingual_apikey_description.h
    model/phone_request.h
    model/user_create_ezsignuser_v1_request.h
    model/user_create_ezsignuser_v1_response.h
    model/user_create_ezsignuser_v1_response_m_payload.h
    model/user_response.h
    model/user_response_all_of.h
    model/webhook_ezsign_document_completed.h
    model/webhook_ezsign_document_completed_all_of.h
    model/webhook_ezsign_folder_completed.h
    model/webhook_ezsign_folder_completed_all_of.h
    model/webhook_response.h
    model/webhook_user_user_created.h
    model/webhook_user_user_created_all_of.h
    model/website_request.h
    api/ModuleUserAPI.h
    api/ObjectActivesessionAPI.h
    api/ObjectApikeyAPI.h
    api/ObjectEzsigndocumentAPI.h
    api/ObjectEzsignfolderAPI.h
    api/ObjectEzsignfoldersignerassociationAPI.h
    api/ObjectEzsignsignatureAPI.h
    api/ObjectFranchisebrokerAPI.h
    api/ObjectFranchiseofficeAPI.h
    api/ObjectFranchisereferalincomeAPI.h
    api/ObjectPeriodAPI.h

)

# Add library with project file with projectname as library name
add_library(${pkgName} SHARED ${SRCS} ${HDRS})
# Link dependent libraries
target_link_libraries(${pkgName} ${CURL_LIBRARIES} )
#install library to destination
install(TARGETS ${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX})

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled libary to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-ModuleUserAPI.c
#    unit-tests/manual-ObjectActivesessionAPI.c
#    unit-tests/manual-ObjectApikeyAPI.c
#    unit-tests/manual-ObjectEzsigndocumentAPI.c
#    unit-tests/manual-ObjectEzsignfolderAPI.c
#    unit-tests/manual-ObjectEzsignfoldersignerassociationAPI.c
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
#    # Get only the file name from the file as add_executable doesnot support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created libary to executable and dependent libary curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
