Pod::Spec.new do |s|
  s.name         = "AeroGear-Encrypted-Store"
  s.version      = "1.5.0"
  s.summary      = "Provides a crypto utilities for permanent storage."
  s.homepage     = "https://github.com/aerogear/aerogear-ios"
  s.license      = 'Apache License, Version 2.0'
  s.author       = "Red Hat, Inc."
  s.source       = { :git => 'https://github.com/aerogear/aerogear-ios-encrypted-store.git'}
  s.platform     = :ios, 7.0
  s.source_files = 'AeroGear-iOS/**/*.{h,m}'

  s.public_header_files = 'AeroGear-iOS/AeroGear-Encrypted-Store.h', 'AeroGear-iOS/security/AGCryptoConfig.h', 'AeroGear-iOS/security/AGEncryptionService.h', 'AeroGear-iOS/security/AGKeyManager.h', 'AeroGear-iOS/security/AGKeyStoreCryptoConfig.h', 'AeroGear-iOS/security/AGPassPhraseCryptoConfig.h'

  s.requires_arc = true
  s.dependency 'AeroGear-Store', '1.5.0'
  s.dependency 'AeroGear-Crypto', '0.2.3'  
end
