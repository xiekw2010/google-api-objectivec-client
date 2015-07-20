/* Copyright (c) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLBigqueryJobStatus.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   BigQuery API (bigquery/v2)
// Description:
//   A data platform for customers to create, manage, share and query data.
// Documentation:
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryJobStatus (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBigqueryErrorProto;

// ----------------------------------------------------------------------------
//
//   GTLBigqueryJobStatus
//

@interface GTLBigqueryJobStatus : GTLObject

// [Output-only] Final error result of the job. If present, indicates that the
// job has completed and was unsuccessful.
@property (nonatomic, retain) GTLBigqueryErrorProto *errorResult;

// [Output-only] All errors encountered during the running of the job. Errors
// here do not necessarily mean that the job has completed or was unsuccessful.
@property (nonatomic, retain) NSArray *errors;  // of GTLBigqueryErrorProto

// [Output-only] Running state of the job.
@property (nonatomic, copy) NSString *state;

@end