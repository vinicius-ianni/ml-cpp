#
# Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
# or more contributor license agreements. Licensed under the Elastic License;
# you may not use this file except in compliance with the Elastic License.
#
$ErrorActionPreference="Stop"
$Archive="usr-x86_64-windows-2012_r2-4.zip"
$Destination="C:\"
if (!(Test-Path "$Destination\usr\local\lib\boost_system-vc120-mt-1_65_1.dll")) {
    Remove-Item "$Destination\usr" -Recurse -Force -ErrorAction Ignore
    $ZipSource="https://s3-eu-west-1.amazonaws.com/prelert-artifacts/dependencies/$Archive"
    $ZipDestination="$env:TEMP\$Archive"
    (New-Object Net.WebClient).DownloadFile($ZipSource, $ZipDestination)
    Add-Type -assembly "system.io.compression.filesystem"
    [IO.Compression.ZipFile]::ExtractToDirectory($ZipDestination, $Destination)
    Remove-Item $ZipDestination
}
