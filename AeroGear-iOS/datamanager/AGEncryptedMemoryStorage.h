/*
 * JBoss, Home of Professional Open Source.
 * Copyright Red Hat, Inc., and individual contributors
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

#import <Foundation/Foundation.h>
#import <AeroGear-Store.h>

/**
 An internal AGStore implementation that uses an encrypted "in-memory" storage.
 
 *IMPORTANT:* Users are not required to instantiate this class directly, instead an instance of this class is returned automatically when an DataStore with default configuration is constructed or with the _type_ config option set to _"ENCRYPTED_MEMORY"_. See AGDataManager and AGStore class documentation for more information.
 */
@interface AGEncryptedMemoryStorage : AGMemoryStorage

/**
 * Utility method to save an NSData object on the encrypted store.
 * The object is required to be 'Property List compliant' and 'encrypted' with
 * the key that this EncryptedMemory storage was initialized in.
 *
 * @param value An encrypted object to be saved.
 * @param key The key under which this encrypted object will bound to.
 *
 */
- (void)save:(NSData *)encryptedData forKey:(NSString *)key;

/**
 * utility method to dump the contents of the encrypted storage. The returned 
 * format is Property List compliant and can be saved to a permanent storage for
 * later retrieval.
 *
 * @return an NSData object with the contents of the encrypted storage.
 */
- (NSData *)dump;

@end
