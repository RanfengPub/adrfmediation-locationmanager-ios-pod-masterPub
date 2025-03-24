Pod::Spec.new do |s|
  s.name = "ADRFMediationLocationManagerPub"
  s.version = "0.2.1.01301"
  s.summary = "A short description of ADRFMediationLocationManager."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"business@ssdmobile.cn"=>"business@ssdmobile.cn"}
  s.homepage = "https://github.com/RanfengPub/adrfmediation-locationmanager-ios-pod-masterPub"
  s.description = "TODO: Add long description of the pod here."
  s.source = {
    :git => 'https://github.com/RanfengPub/adrfmediation-locationmanager-ios-pod-masterPub.git',
    :tag => s.version.to_s
  }
  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ADRFMediationLocationManager/Classes/ADRFMediationLocationManager.xcframework'
end
