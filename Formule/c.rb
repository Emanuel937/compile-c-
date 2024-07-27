class C < Formula
  desc "This command allow to run the c script withoud query about to compile, just run : c file_name.c"
  homepage "https://github.com/Emanuel937/homebrew-my_script/compile-c-.git"
  url "https://github.com/YOUR_USERNAME/homebrew-my_script/archive/refs/tags/v1.0.tar.gz"
  sha256 "YOUR_SHA256_CHECKSUM"
  license "MIT"

  def install
    bin.install "c.sh" => "c"
  end

  test do
    system "#{bin}/c", "--version"
  end
end

