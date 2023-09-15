object Form9: TForm9
  Left = 140
  Top = 166
  HelpContext = 220
  AutoSize = True
  BorderIcons = [biSystemMenu]
  BorderStyle = bsToolWindow
  Caption = 'Consulta de Histórico'
  ClientHeight = 165
  ClientWidth = 650
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
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TSpeedButton
    Left = 0
    Top = 140
    Width = 650
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
    Width = 650
    Height = 144
    BevelInner = bvLowered
    BevelOuter = bvLowered
    BorderWidth = 3
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 10
      Top = 6
      Width = 630
      Height = 130
      Caption = 'Tipo de Consulta'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      object Label1: TLabel
        Left = 338
        Top = 47
        Width = 25
        Height = 13
        Caption = 'Mãe'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label2: TLabel
        Left = 338
        Top = 77
        Width = 32
        Height = 13
        Caption = 'CNPJ'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object Label3: TLabel
        Left = 522
        Top = 18
        Width = 28
        Height = 13
        Caption = 'Final'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object RadioButton1: TRadioButton
        Left = 5
        Top = 17
        Width = 98
        Height = 17
        Caption = '&Código Sócio'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 7
        OnClick = RadioButton1Click
      end
      object RadioButton2: TRadioButton
        Left = 5
        Top = 47
        Width = 60
        Height = 17
        Caption = '&Nome'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 8
        OnClick = RadioButton2Click
      end
      object Edit1: TEdit
        Left = 75
        Top = 45
        Width = 250
        Height = 21
        MaxLength = 50
        TabOrder = 3
      end
      object Edit2: TEdit
        Left = 370
        Top = 41
        Width = 250
        Height = 21
        MaxLength = 50
        TabOrder = 4
      end
      object MaskEdit1: TMaskEdit
        Left = 107
        Top = 15
        Width = 45
        Height = 21
        EditMask = '99999;1; '
        MaxLength = 5
        TabOrder = 9
        Text = '     '
        OnExit = MaskEdit1Exit
      end
      object RadioButton3: TRadioButton
        Left = 5
        Top = 77
        Width = 59
        Height = 17
        Caption = 'N&ome'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 10
        OnClick = RadioButton3Click
      end
      object MaskEdit2: TMaskEdit
        Left = 370
        Top = 72
        Width = 109
        Height = 21
        EditMask = '99.999.999/9999-99;1;_'
        MaxLength = 18
        TabOrder = 6
        Text = '  .   .   /    -  '
      end
      object Edit3: TEdit
        Left = 75
        Top = 75
        Width = 250
        Height = 21
        MaxLength = 50
        TabOrder = 5
      end
      object RadioButton4: TRadioButton
        Left = 161
        Top = 17
        Width = 115
        Height = 17
        Caption = 'Có&digo Histórico'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 11
        OnClick = RadioButton4Click
      end
      object MaskEdit3: TMaskEdit
        Left = 279
        Top = 15
        Width = 45
        Height = 21
        EditMask = '99999;1; '
        MaxLength = 5
        TabOrder = 0
        Text = '     '
        OnExit = MaskEdit3Exit
      end
      object MaskEdit4: TMaskEdit
        Left = 440
        Top = 15
        Width = 65
        Height = 21
        EditMask = '99/99/9999;1;_'
        MaxLength = 10
        TabOrder = 1
        Text = '  /  /    '
        OnExit = MaskEdit4Exit
      end
      object RadioButton5: TRadioButton
        Left = 378
        Top = 17
        Width = 53
        Height = 17
        Caption = 'Data'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 12
        OnClick = RadioButton5Click
      end
      object MaskEdit5: TMaskEdit
        Left = 554
        Top = 15
        Width = 65
        Height = 21
        EditMask = '99/99/9999;1;_'
        MaxLength = 10
        TabOrder = 2
        Text = '  /  /    '
        OnExit = MaskEdit5Exit
      end
      object Animate1: TAnimate
        Left = 2
        Top = 102
        Width = 626
        Height = 26
        Align = alBottom
        Active = False
        AutoSize = False
        CommonAVI = aviFindFile
        StopFrame = 8
        Visible = False
      end
    end
  end
end
