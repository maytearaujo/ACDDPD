object Form7: TForm7
  Left = 235
  Top = 160
  HelpContext = 140
  AutoSize = True
  BorderIcons = [biSystemMenu]
  BorderStyle = bsToolWindow
  Caption = 'Consulta de Sócio'
  ClientHeight = 142
  ClientWidth = 543
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  HelpFile = 'Ajuda'
  OldCreateOrder = False
  Position = poDesktopCenter
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 0
    Top = 117
    Width = 543
    Height = 25
    Caption = 'Consultar'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = SpeedButton1Click
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 542
    Height = 118
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 8
      Top = 7
      Width = 526
      Height = 103
      Caption = 'Tipo de Consulta'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      object RadioButton1: TRadioButton
        Left = 5
        Top = 17
        Width = 106
        Height = 17
        Caption = '&Código Sócio'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 3
        OnClick = RadioButton1Click
      end
      object RadioButton2: TRadioButton
        Left = 5
        Top = 47
        Width = 80
        Height = 17
        Caption = '&Nome'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 4
        OnClick = RadioButton2Click
      end
      object Edit1: TEdit
        Left = 75
        Top = 45
        Width = 250
        Height = 21
        MaxLength = 50
        TabOrder = 1
      end
      object MaskEdit1: TMaskEdit
        Left = 107
        Top = 15
        Width = 65
        Height = 21
        EditMask = '99999999;0; '
        MaxLength = 8
        TabOrder = 2
        OnExit = MaskEdit1Exit
      end
      object Animate1: TAnimate
        Left = 2
        Top = 75
        Width = 522
        Height = 26
        Align = alBottom
        Active = False
        AutoSize = False
        CommonAVI = aviFindFile
        StopFrame = 8
        Visible = False
      end
      object MaskEdit4: TMaskEdit
        Left = 409
        Top = 45
        Width = 109
        Height = 21
        EditMask = '99.999.999/9999-99;1;_'
        MaxLength = 18
        TabOrder = 7
        Text = '  .   .   /    -  '
      end
      object RadioButton3: TRadioButton
        Left = 213
        Top = 17
        Width = 49
        Height = 17
        Caption = 'RG'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 8
        OnClick = RadioButton3Click
      end
      object MaskEdit3: TMaskEdit
        Left = 254
        Top = 14
        Width = 85
        Height = 21
        EditMask = '999.999.999-99;1;_'
        MaxLength = 14
        TabOrder = 6
        Text = '   .   .   -  '
      end
      object RadioButton4: TRadioButton
        Left = 385
        Top = 15
        Width = 54
        Height = 17
        Caption = 'CPF'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 9
        OnClick = RadioButton4Click
      end
      object MaskEdit2: TMaskEdit
        Left = 433
        Top = 12
        Width = 85
        Height = 21
        EditMask = '999.999.999-99;1;_'
        MaxLength = 14
        TabOrder = 0
        Text = '   .   .   -  '
      end
      object RadioButton5: TRadioButton
        Left = 356
        Top = 47
        Width = 54
        Height = 17
        Caption = 'CNPJ'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 10
        OnClick = RadioButton5Click
      end
    end
  end
end
