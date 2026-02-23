{
  description = "QMK Firmware";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs =
    { nixpkgs, ... }:
    let
      system = "x86_64-linux";
      pkgs = import nixpkgs { inherit system; };
    in
    {
      devShells.${system}.default = pkgs.mkShell {
        packages = with pkgs; [
          qmk

          python3Packages.appdirs
          python3Packages.argcomplete
          python3Packages.colorama
          python3Packages.dotty-dict
          python3Packages.hid
          python3Packages.hjson
          python3Packages.jsonschema
          python3Packages.milc
          python3Packages.pygments
          python3Packages.pyserial
          python3Packages.pyusb
          python3Packages.pillow

        ];
        shellHook = ''
          ${pkgs.qmk}/bin/qmk doctor
        '';
      };
    };
}
