Pod::Spec.new do |s|
  s.name             = "Presenter"
  s.version          = "0.1.0"
  s.summary          = "A short description of Presenter."
  s.description      = <<-DESC
                       An optional longer description of Presenter

                       * Markdown format.
                       * Don't worry about the indent, we strip it!
                       DESC
  s.homepage         = "http://EXAMPLE/NAME"
  s.screenshots      = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "James Tang" => "j@jamztang.com", "Simon Pang" => "hksimon@gmail.com" }
  s.source           = { :git => "http://EXAMPLE/NAME.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/EXAMPLE'
  s.ios.deployment_target = '7.0'
  s.requires_arc = true
  s.source_files = 'Classes', 'Classes/**/*'
  s.resources = 'Assets/*.png'
  s.ios.exclude_files = 'Classes/osx'
  s.osx.exclude_files = 'Classes/ios'
end
