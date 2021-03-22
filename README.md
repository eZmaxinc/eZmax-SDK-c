# C API client for ezmax_api_definition

## Overview
This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project. By using the [OpenAPI spec](https://openapis.org) from a remote server, you can easily generate an API client.

- API version: 1.0.38
- Package version: 
- Build package: org.openapitools.codegen.languages.CLibcurlClientCodegen
For more information, please visit [https://www.ezmax.ca/en/contact](https://www.ezmax.ca/en/contact)

## Installation
You'll need the `curl 7.58.0` package in order to build the API. To have code formatted nicely, you also need to have uncrustify version 0.67 or later.

# Prerequisites

## Install the `curl 7.58.0` package with the following command on Linux.
```bash
sudo apt remove curl
wget http://curl.haxx.se/download/curl-7.58.0.tar.gz
tar -xvf curl-7.58.0.tar.gz
cd curl-7.58.0/
./configure
make
sudo make install
```
## Install the `uncrustify 0.67` package with the following command on Linux.
```bash
git clone https://github.com/uncrustify/uncrustify.git
cd uncrustify
mkdir build
cd build
cmake ..
make
sudo make install
```

## Compile the sample:
This will compile the generated code and create a library in the build folder which has to be linked to the codes where API will be used.
```bash
mkdir build
cd build
// To install library to specific location, use following commands
cmake -DCMAKE_INSTALL_PREFIX=/pathtolocaiton ..
// for normal install use following command
cmake ..
make
sudo make install
```
## How to use compiled library
Considering the test/source code which uses the API is written in main.c(respective api include is written and all objects necessary are defined and created)

To compile main.c(considering the file is present in build folder) use following command
-L - locaiton of the library(not required if cmake with normal installation is performed)
-l library name
```bash
gcc main.c -L. -lezmax_api_definition -o main
```
Once compiled, you can run it with ``` ./main ```

Note: You don't need to specify includes for models and include folder seperately as they are path linked. You just have to import the api.h file in your code, the include linking will work.

## Documentation for API Endpoints

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Category | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*GlobalCustomerAPI* | [**GlobalCustomerAPI_globalCustomerGetEndpointV1**](docs/GlobalCustomerAPI.md#GlobalCustomerAPI_globalCustomerGetEndpointV1) | **GET** /1/customer/{pksCustomerCode}/endpoint | Get customer endpoint
*ModuleSsprAPI* | [**ModuleSsprAPI_ssprResetPasswordRequestV1**](docs/ModuleSsprAPI.md#ModuleSsprAPI_ssprResetPasswordRequestV1) | **POST** /1/module/sspr/resetPasswordRequest | Reset Password Request
*ModuleSsprAPI* | [**ModuleSsprAPI_ssprResetPasswordV1**](docs/ModuleSsprAPI.md#ModuleSsprAPI_ssprResetPasswordV1) | **POST** /1/module/sspr/resetPassword | Reset Password
*ModuleSsprAPI* | [**ModuleSsprAPI_ssprSendUsernamesV1**](docs/ModuleSsprAPI.md#ModuleSsprAPI_ssprSendUsernamesV1) | **POST** /1/module/sspr/sendUsernames | Send username(s)
*ModuleSsprAPI* | [**ModuleSsprAPI_ssprUnlockAccountRequestV1**](docs/ModuleSsprAPI.md#ModuleSsprAPI_ssprUnlockAccountRequestV1) | **POST** /1/module/sspr/unlockAccountRequest | Unlock Account Request
*ModuleSsprAPI* | [**ModuleSsprAPI_ssprUnlockAccountV1**](docs/ModuleSsprAPI.md#ModuleSsprAPI_ssprUnlockAccountV1) | **POST** /1/module/sspr/unlockAccount | Unlock Account
*ModuleSsprAPI* | [**ModuleSsprAPI_ssprValidateTokenV1**](docs/ModuleSsprAPI.md#ModuleSsprAPI_ssprValidateTokenV1) | **POST** /1/module/sspr/validateToken | Validate Token
*ModuleUserAPI* | [**ModuleUserAPI_userCreateEzsignuserV1**](docs/ModuleUserAPI.md#ModuleUserAPI_userCreateEzsignuserV1) | **POST** /1/module/user/createezsignuser | Create a new User of type Ezsignuser
*ObjectActivesessionAPI* | [**ObjectActivesessionAPI_activesessionGetCurrentV1**](docs/ObjectActivesessionAPI.md#ObjectActivesessionAPI_activesessionGetCurrentV1) | **GET** /1/object/activesession/getCurrent | Get Current Activesession
*ObjectApikeyAPI* | [**ObjectApikeyAPI_apikeyCreateObjectV1**](docs/ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyCreateObjectV1) | **POST** /1/object/apikey | Create a new Apikey
*ObjectEzsigndocumentAPI* | [**ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1**](docs/ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1) | **POST** /1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate | Apply an Ezsign Template to the Ezsigndocument.
*ObjectEzsigndocumentAPI* | [**ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1**](docs/ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1) | **POST** /1/object/ezsigndocument | Create a new Ezsigndocument
*ObjectEzsigndocumentAPI* | [**ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1**](docs/ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1) | **DELETE** /1/object/ezsigndocument/{pkiEzsigndocumentID} | Delete an existing Ezsigndocument
*ObjectEzsigndocumentAPI* | [**ObjectEzsigndocumentAPI_ezsigndocumentGetChildrenV1**](docs/ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentGetChildrenV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID}/getChildren | Retrieve an existing Ezsigndocument's children IDs
*ObjectEzsigndocumentAPI* | [**ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1**](docs/ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID}/getDownloadUrl/{eDocumentType} | Retrieve a URL to download documents.
*ObjectEzsigndocumentAPI* | [**ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1**](docs/ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID} | Retrieve an existing Ezsigndocument
*ObjectEzsignfolderAPI* | [**ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1**](docs/ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1) | **POST** /1/object/ezsignfolder | Create a new Ezsignfolder
*ObjectEzsignfolderAPI* | [**ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1**](docs/ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1) | **DELETE** /1/object/ezsignfolder/{pkiEzsignfolderID} | Delete an existing Ezsignfolder
*ObjectEzsignfolderAPI* | [**ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1**](docs/ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1) | **GET** /1/object/ezsignfolder/{pkiEzsignfolderID}/getChildren | Retrieve an existing Ezsignfolder's children IDs
*ObjectEzsignfolderAPI* | [**ObjectEzsignfolderAPI_ezsignfolderGetObjectV1**](docs/ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderGetObjectV1) | **GET** /1/object/ezsignfolder/{pkiEzsignfolderID} | Retrieve an existing Ezsignfolder
*ObjectEzsignfolderAPI* | [**ObjectEzsignfolderAPI_ezsignfolderSendV1**](docs/ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderSendV1) | **POST** /1/object/ezsignfolder/{pkiEzsignfolderID}/send | Send the Ezsignfolder to the signatories for signature
*ObjectEzsignfoldersignerassociationAPI* | [**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1**](docs/ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1) | **POST** /1/object/ezsignfoldersignerassociation | Create a new Ezsignfoldersignerassociation
*ObjectEzsignfoldersignerassociationAPI* | [**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1**](docs/ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1) | **DELETE** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID} | Delete an existing Ezsignfoldersignerassociation
*ObjectEzsignfoldersignerassociationAPI* | [**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetChildrenV1**](docs/ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetChildrenV1) | **GET** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getChildren | Retrieve an existing Ezsignfoldersignerassociation's children IDs
*ObjectEzsignfoldersignerassociationAPI* | [**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetInPersonLoginUrlV1**](docs/ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetInPersonLoginUrlV1) | **GET** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getInPersonLoginUrl | Retrieve a Login Url to allow In-Person signing
*ObjectEzsignfoldersignerassociationAPI* | [**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV1**](docs/ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV1) | **GET** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID} | Retrieve an existing Ezsignfoldersignerassociation
*ObjectEzsignsignatureAPI* | [**ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1**](docs/ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1) | **POST** /1/object/ezsignsignature | Create a new Ezsignsignature
*ObjectEzsignsignatureAPI* | [**ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1**](docs/ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1) | **DELETE** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Delete an existing Ezsignsignature
*ObjectEzsignsignatureAPI* | [**ObjectEzsignsignatureAPI_ezsignsignatureGetChildrenV1**](docs/ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureGetChildrenV1) | **GET** /1/object/ezsignsignature/{pkiEzsignsignatureID}/getChildren | Retrieve an existing Ezsignsignature's children IDs
*ObjectEzsignsignatureAPI* | [**ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV1**](docs/ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV1) | **GET** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Retrieve an existing Ezsignsignature
*ObjectFranchisebrokerAPI* | [**ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV1**](docs/ObjectFranchisebrokerAPI.md#ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV1) | **GET** /1/object/franchisebroker/getAutocomplete/{sSelector} | Retrieve Franchisebrokers and IDs
*ObjectFranchiseofficeAPI* | [**ObjectFranchiseofficeAPI_franchiseofficeGetAutocompleteV1**](docs/ObjectFranchiseofficeAPI.md#ObjectFranchiseofficeAPI_franchiseofficeGetAutocompleteV1) | **GET** /1/object/franchiseoffice/getAutocomplete/{sSelector} | Retrieve Franchiseoffices and IDs
*ObjectFranchisereferalincomeAPI* | [**ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV1**](docs/ObjectFranchisereferalincomeAPI.md#ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV1) | **POST** /1/object/franchisereferalincome | Create a new Franchisereferalincome
*ObjectPeriodAPI* | [**ObjectPeriodAPI_periodGetAutocompleteV1**](docs/ObjectPeriodAPI.md#ObjectPeriodAPI_periodGetAutocompleteV1) | **GET** /1/object/period/getAutocomplete/{sSelector} | Retrieve Periods and IDs


## Documentation for Models

 - [activesession_get_current_v1_response_t](docs/activesession_get_current_v1_response.md)
 - [activesession_get_current_v1_response_m_payload_t](docs/activesession_get_current_v1_response_m_payload.md)
 - [address_request_t](docs/address_request.md)
 - [apikey_create_object_v1_request_t](docs/apikey_create_object_v1_request.md)
 - [apikey_create_object_v1_response_t](docs/apikey_create_object_v1_response.md)
 - [apikey_create_object_v1_response_m_payload_t](docs/apikey_create_object_v1_response_m_payload.md)
 - [apikey_request_t](docs/apikey_request.md)
 - [apikey_request_compound_t](docs/apikey_request_compound.md)
 - [apikey_response_t](docs/apikey_response.md)
 - [attempt_response_t](docs/attempt_response.md)
 - [common_audit_t](docs/common_audit.md)
 - [common_get_autocomplete_v1_response_t](docs/common_get_autocomplete_v1_response.md)
 - [common_get_autocomplete_v1_response_m_payload_t](docs/common_get_autocomplete_v1_response_m_payload.md)
 - [common_response_t](docs/common_response.md)
 - [common_response_error_t](docs/common_response_error.md)
 - [common_response_obj_debug_t](docs/common_response_obj_debug.md)
 - [common_response_obj_debug_payload_t](docs/common_response_obj_debug_payload.md)
 - [common_response_obj_sql_query_t](docs/common_response_obj_sql_query.md)
 - [common_webhook_t](docs/common_webhook.md)
 - [contact_request_t](docs/contact_request.md)
 - [contact_request_compound_t](docs/contact_request_compound.md)
 - [contact_request_compound_all_of_t](docs/contact_request_compound_all_of.md)
 - [contactinformations_request_t](docs/contactinformations_request.md)
 - [contactinformations_request_compound_t](docs/contactinformations_request_compound.md)
 - [email_request_t](docs/email_request.md)
 - [ezsigndocument_apply_ezsigntemplate_v1_request_t](docs/ezsigndocument_apply_ezsigntemplate_v1_request.md)
 - [ezsigndocument_apply_ezsigntemplate_v1_response_t](docs/ezsigndocument_apply_ezsigntemplate_v1_response.md)
 - [ezsigndocument_create_object_v1_request_t](docs/ezsigndocument_create_object_v1_request.md)
 - [ezsigndocument_create_object_v1_response_t](docs/ezsigndocument_create_object_v1_response.md)
 - [ezsigndocument_create_object_v1_response_m_payload_t](docs/ezsigndocument_create_object_v1_response_m_payload.md)
 - [ezsigndocument_delete_object_v1_response_t](docs/ezsigndocument_delete_object_v1_response.md)
 - [ezsigndocument_get_download_url_v1_response_t](docs/ezsigndocument_get_download_url_v1_response.md)
 - [ezsigndocument_get_download_url_v1_response_m_payload_t](docs/ezsigndocument_get_download_url_v1_response_m_payload.md)
 - [ezsigndocument_get_object_v1_response_t](docs/ezsigndocument_get_object_v1_response.md)
 - [ezsigndocument_get_object_v1_response_m_payload_t](docs/ezsigndocument_get_object_v1_response_m_payload.md)
 - [ezsigndocument_request_t](docs/ezsigndocument_request.md)
 - [ezsigndocument_request_compound_t](docs/ezsigndocument_request_compound.md)
 - [ezsigndocument_response_t](docs/ezsigndocument_response.md)
 - [ezsigndocument_response_all_of_t](docs/ezsigndocument_response_all_of.md)
 - [ezsigndocument_response_compound_t](docs/ezsigndocument_response_compound.md)
 - [ezsignfolder_create_object_v1_request_t](docs/ezsignfolder_create_object_v1_request.md)
 - [ezsignfolder_create_object_v1_response_t](docs/ezsignfolder_create_object_v1_response.md)
 - [ezsignfolder_create_object_v1_response_m_payload_t](docs/ezsignfolder_create_object_v1_response_m_payload.md)
 - [ezsignfolder_delete_object_v1_response_t](docs/ezsignfolder_delete_object_v1_response.md)
 - [ezsignfolder_get_object_v1_response_t](docs/ezsignfolder_get_object_v1_response.md)
 - [ezsignfolder_get_object_v1_response_m_payload_t](docs/ezsignfolder_get_object_v1_response_m_payload.md)
 - [ezsignfolder_request_t](docs/ezsignfolder_request.md)
 - [ezsignfolder_request_compound_t](docs/ezsignfolder_request_compound.md)
 - [ezsignfolder_response_t](docs/ezsignfolder_response.md)
 - [ezsignfolder_response_all_of_t](docs/ezsignfolder_response_all_of.md)
 - [ezsignfolder_response_compound_t](docs/ezsignfolder_response_compound.md)
 - [ezsignfolder_send_v1_request_t](docs/ezsignfolder_send_v1_request.md)
 - [ezsignfolder_send_v1_response_t](docs/ezsignfolder_send_v1_response.md)
 - [ezsignfoldersignerassociation_create_object_v1_request_t](docs/ezsignfoldersignerassociation_create_object_v1_request.md)
 - [ezsignfoldersignerassociation_create_object_v1_response_t](docs/ezsignfoldersignerassociation_create_object_v1_response.md)
 - [ezsignfoldersignerassociation_create_object_v1_response_m_payload_t](docs/ezsignfoldersignerassociation_create_object_v1_response_m_payload.md)
 - [ezsignfoldersignerassociation_delete_object_v1_response_t](docs/ezsignfoldersignerassociation_delete_object_v1_response.md)
 - [ezsignfoldersignerassociation_get_in_person_login_url_v1_response_t](docs/ezsignfoldersignerassociation_get_in_person_login_url_v1_response.md)
 - [ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload_t](docs/ezsignfoldersignerassociation_get_in_person_login_url_v1_response_m_payload.md)
 - [ezsignfoldersignerassociation_get_object_v1_response_t](docs/ezsignfoldersignerassociation_get_object_v1_response.md)
 - [ezsignfoldersignerassociation_request_t](docs/ezsignfoldersignerassociation_request.md)
 - [ezsignfoldersignerassociation_request_compound_t](docs/ezsignfoldersignerassociation_request_compound.md)
 - [ezsignsignature_create_object_v1_request_t](docs/ezsignsignature_create_object_v1_request.md)
 - [ezsignsignature_create_object_v1_response_t](docs/ezsignsignature_create_object_v1_response.md)
 - [ezsignsignature_create_object_v1_response_m_payload_t](docs/ezsignsignature_create_object_v1_response_m_payload.md)
 - [ezsignsignature_delete_object_v1_response_t](docs/ezsignsignature_delete_object_v1_response.md)
 - [ezsignsignature_get_object_v1_response_t](docs/ezsignsignature_get_object_v1_response.md)
 - [ezsignsignature_request_t](docs/ezsignsignature_request.md)
 - [ezsignsignature_request_compound_t](docs/ezsignsignature_request_compound.md)
 - [ezsignsigner_request_t](docs/ezsignsigner_request.md)
 - [ezsignsigner_request_compound_t](docs/ezsignsigner_request_compound.md)
 - [ezsignsigner_request_compound_contact_t](docs/ezsignsigner_request_compound_contact.md)
 - [field_e_ezsigndocument_step_t](docs/field_e_ezsigndocument_step.md)
 - [field_e_ezsignfolder_sendreminderfrequency_t](docs/field_e_ezsignfolder_sendreminderfrequency.md)
 - [field_e_ezsignfolder_step_t](docs/field_e_ezsignfolder_step.md)
 - [field_e_phone_type_t](docs/field_e_phone_type.md)
 - [field_e_user_type_t](docs/field_e_user_type.md)
 - [field_e_user_type_sspr_t](docs/field_e_user_type_sspr.md)
 - [franchisereferalincome_create_object_v1_request_t](docs/franchisereferalincome_create_object_v1_request.md)
 - [franchisereferalincome_create_object_v1_response_t](docs/franchisereferalincome_create_object_v1_response.md)
 - [franchisereferalincome_create_object_v1_response_m_payload_t](docs/franchisereferalincome_create_object_v1_response_m_payload.md)
 - [franchisereferalincome_request_t](docs/franchisereferalincome_request.md)
 - [franchisereferalincome_request_compound_t](docs/franchisereferalincome_request_compound.md)
 - [global_customer_get_endpoint_v1_response_t](docs/global_customer_get_endpoint_v1_response.md)
 - [multilingual_apikey_description_t](docs/multilingual_apikey_description.md)
 - [phone_request_t](docs/phone_request.md)
 - [sspr_reset_password_request_v1_request_t](docs/sspr_reset_password_request_v1_request.md)
 - [sspr_reset_password_v1_request_t](docs/sspr_reset_password_v1_request.md)
 - [sspr_send_usernames_v1_request_t](docs/sspr_send_usernames_v1_request.md)
 - [sspr_unlock_account_request_v1_request_t](docs/sspr_unlock_account_request_v1_request.md)
 - [sspr_unlock_account_v1_request_t](docs/sspr_unlock_account_v1_request.md)
 - [sspr_validate_token_v1_request_t](docs/sspr_validate_token_v1_request.md)
 - [unused_ezsigndocument_edit_object_v1_request_t](docs/unused_ezsigndocument_edit_object_v1_request.md)
 - [unused_ezsigndocument_edit_object_v1_response_t](docs/unused_ezsigndocument_edit_object_v1_response.md)
 - [unused_ezsignfolder_edit_object_v1_request_t](docs/unused_ezsignfolder_edit_object_v1_request.md)
 - [unused_ezsignfolder_edit_object_v1_response_t](docs/unused_ezsignfolder_edit_object_v1_response.md)
 - [unused_ezsignfoldersignerassociation_edit_object_v1_request_t](docs/unused_ezsignfoldersignerassociation_edit_object_v1_request.md)
 - [unused_ezsignfoldersignerassociation_edit_object_v1_response_t](docs/unused_ezsignfoldersignerassociation_edit_object_v1_response.md)
 - [unused_ezsignsignature_edit_object_v1_request_t](docs/unused_ezsignsignature_edit_object_v1_request.md)
 - [unused_ezsignsignature_edit_object_v1_response_t](docs/unused_ezsignsignature_edit_object_v1_response.md)
 - [user_create_ezsignuser_v1_request_t](docs/user_create_ezsignuser_v1_request.md)
 - [user_create_ezsignuser_v1_response_t](docs/user_create_ezsignuser_v1_response.md)
 - [user_create_ezsignuser_v1_response_m_payload_t](docs/user_create_ezsignuser_v1_response_m_payload.md)
 - [user_response_t](docs/user_response.md)
 - [user_response_all_of_t](docs/user_response_all_of.md)
 - [webhook_ezsign_document_completed_t](docs/webhook_ezsign_document_completed.md)
 - [webhook_ezsign_document_completed_all_of_t](docs/webhook_ezsign_document_completed_all_of.md)
 - [webhook_ezsign_folder_completed_t](docs/webhook_ezsign_folder_completed.md)
 - [webhook_ezsign_folder_completed_all_of_t](docs/webhook_ezsign_folder_completed_all_of.md)
 - [webhook_response_t](docs/webhook_response.md)
 - [webhook_user_user_created_t](docs/webhook_user_user_created.md)
 - [webhook_user_user_created_all_of_t](docs/webhook_user_user_created_all_of.md)
 - [website_request_t](docs/website_request.md)


## Documentation for Authorization


### Authorization

- **Type**: API key

- **API key parameter name**: Authorization
- **Location**: HTTP header


## Author

support-api@ezmax.ca

